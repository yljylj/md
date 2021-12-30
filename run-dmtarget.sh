#! /bin/bash
# See http://narendrapal2020.blogspot.com/2014/03/device-mapper.html and
# http://techgmm.blogspot.com/p/writing-your-own-device-mapper-target.html.

usage ()
{
	echo "usage: `basename $0` [-swrh]"
	echo "      -s            setup device mapper target"
	echo "      -w            test using dd write"
	echo "      -r            test using dd read"
	echo "      -h            display help"
}

if ( ! getopts ":swrh" option )
then
       usage
       exit 1
fi

while getopts ':swrhm' option;
do
	case "$option" in
	s)
		touch disk0
		touch disk1
		dd if=/dev/zero of=disk0 bs=1M count=128 # 128MB file
		dd if=/dev/zero of=disk1 bs=1M count=128 # 128MB file
		losetup /dev/loop0 disk0 # losetup -f
		losetup /dev/loop1 disk1 # losetup -f
		modprobe dm-persistent-data
		;;
	w)
		dd if=/dev/urandom of=/dev/mapper/my_device_mapper  bs=4096 count=128
		;;
	r)
		dd if=/dev/mapper/my_device_mapper of=out bs=4096 count=128
		;;
	m)
		cd ../../
		#make CONFIG_DM_CACHE=m M=drivers/md
		make CONFIG_MAPPERY=m M=drivers/md
		cd drivers/md
		dmsetup remove my_device_mapper
		rmmod mappery
		rmmod dm-persistent-data
		#modprobe dm-persistent-data
		insmod persistent-data/dm-persistent-data.ko
		insmod mappery.ko
		echo 0 262144 hello_target /dev/loop0 /dev/loop1 0 | dmsetup create my_device_mapper
		;;
		
	h)
		usage
		exit
		;;
	\?)
		printf "illegal option: -%s\n" "$OPTARG" >&2
		usage
		exit 1
		;;
	esac
done
shift $((OPTIND - 1))
