How to build Mobule for Platform
- It is only for modules are needed to using Android build system.
- Please check its own install information under its folder for other module.

[Step to build]
1. Get android open source.
    : version info - Android 5.1
    ( Download site : http://source.android.com )

2. Copy module that you want to build - to original android open source
   If same module exist in android open source, you should replace it. (no overwrite)
   
  # It is possible to build all modules at once.
  
3. You should add module name to 'PRODUCT_PACKAGES' in 'build\target\product\core.mk' as following case.
                  
ex.) [build\target\product\core.mk] - add below module name

# ProfessionalAudio
PRODUCT_PACKAGES += \
    libjackshm \
    libjackserver \
    libjack \
    libjacklogger \
    androidshmservice \
    jackd \
    jack_dummy \
    jack_alsa \
    jack_opensles \
    jack_loopback \
    in \
    out \
    jack_connect \
    jack_disconnect \
    jack_lsp \
    jack_showtime \
    jack_simple_client \
    jack_transport \
    libasound \    
    libglib-2.0 \
    libgthread-2.0 \
    libfluidsynth

# strongSwan
PRODUCT_PACKAGES += \
    charon \
    libcharon \
    libhydra \
    libstrongswan

# e2fsprog
PRODUCT_PACKAGES += \
    e2fsck \
    blkid \
    resize2fs

# libexifa, libjpega, libexif
PRODUCT_PACKAGES += \
    libexif \
    libexifa \
    libjpega \
    
# KeyUtils
PRODUCT_PACKAGES += \
    libkeyutils
    
#libdmverity_hashgen
PRODUCT_PACKAGES += \
    libdmverity_hashgen  
 
# dm_verity_hash
PRODUCT_PACKAGES += \
    dm_verity_hash
   
4. excute build command
./build.sh user
   
5. Note : 
To download the source code of S/W listed below, please visit http://opensource.samsung.com and find ��Mobile -> Mobile Application�� menu, and then, you will be able to download what you want. You might save time in finding the right one by making use of the search keyword below. 

   - SBrowser : "SBrowser"

   - VoiceNote4Z : "Voice Recorder"

   - libcmph.so, libhuffman.so : "DioDict"
   
   - SAssistant_3 : "S Reminder"
   