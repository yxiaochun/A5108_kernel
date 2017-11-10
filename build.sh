#!/bin/bash
cd Kernel
make
cp arch/arm64/boot/Image ../../mkbootimg_tools-master/A5108/kernel
cd ../../mkbootimg_tools-master
#./mkboot A5108 bootnew1.img
#cp arch/arm64/boot/Image /home/gtx1049/mkbootimg_tools-master/A5108/kernel
#cd /home/gtx1049/mkbootimg_tools-master
./mkboot A5108 boot.img
adb push boot.img /sdcard/
adb shell "su -c dd if=/mnt/shell/emulated/0/boot.img of=/dev/block/mmcblk0p10"
adb reboot
