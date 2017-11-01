#!/xbin/daemonsu sh
# www.sxsjroot.com to compile the kernel (To obtain root permissions by sxsjroot)
mount -o remount,rw /system
/sbin/busybox mount -t rootfs -o remount,rw rootfs

#cp /sxsjroot/PersonalPageService.apk /system/priv-app/PersonalPageService/PersonalPageService.apk


#cp /system/xbin/su /system/xbin/daemonsu
#cp /system/xbin/su /system/xbin/sugote
#mkdir -p /system/bin/.ext
#cp /system/xbin/su /system/bin/.ext/.su

if [ ! -f /system/xbin/daemonsu ]; then
cp /sbin/daemonsu /system/xbin/
chown 0:0 /system/xbin/daemonsu
chmod 0755 /system/xbin/daemonsu
chcon u:object_r:system_file:s0 /system/xbin/daemonsu
/system/xbin/daemonsu --install -s /system/xbin
ln -s /system/xbin/daemonsu /system/bin/daemonsu
fi

rm -rf /system/app/BBCAgent
rm -rf /system/app/Bridge
rm -rf /system/app/ContainerAgent
rm -rf /system/app/ContainerEventsRelayManager
rm -rf /system/app/KLMSAgent
rm -rf /system/app/KNOXAgent
rm -rf /system/app/KnoxAttestationAgent
rm -rf /system/app/KnoxFolderContainer
rm -rf /system/app/KnoxMigrationAgent
rm -rf /system/app/KnoxSetupWizardClient
rm -rf /system/app/KnoxSetupWizardStub
rm -rf /system/app/KNOXStore
rm -rf /system/app/KNOXStub
rm -rf /system/app/KnoxVpnServices
rm -rf /system/app/RCPComponents
rm -rf /system/app/SPDClient
rm -rf /system/app/UniversalMDMClient
rm -rf /system/app/SecurityLogAgent
rm -rf /system/priv-app/KnoxSetupWizardStub
rm -rf /system/priv-app/KNOXStore
rm -rf /system/priv-app/KNOXStub
rm -rf /system/priv-app/KnoxVpnServices
rm -rf /system/priv-app/RCPComponents
rm -rf /system/priv-app/SPDClient
rm -rf /system/priv-app/UniversalMDMClient
rm -rf /system/priv-app/SecurityLogAgent
rm -rf /system/priv-app/DiagMonAgent
fi

/sbin/busybox mount -t rootfs -o remount,ro rootfs
mount -o remount,ro /system
