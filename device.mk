LOCAL_PATH := device/amazon/mantis
VENDOR_PATH := vendor/amazon/mantis

# ------- Android TV start -------- #
PRODUCT_IS_ATV_SDK := true
PRODUCT_CHARACTERISTICS := tv,nosdcard

PRODUCT_PACKAGES := \
    TvProvider \
    TvSettings \
    tv_input.default

# From build/target/product/core_base.mk
PRODUCT_PACKAGES += \
    ContactsProvider \
    DefaultContainerService \
    UserDictionaryProvider \
    libaudiopreprocessing \
    libfilterpack_imageproc \
    libgabi++ \
    libkeystore \
    mdnsd \
    requestsync

# From build/target/product/core.mk
PRODUCT_PACKAGES += \
    BasicDreams \
    CalendarProvider \
    CaptivePortalLogin \
    CertInstaller \
    ExternalStorageProvider \
    FusedLocation \
    InputDevices \
    KeyChain \
    PicoTts \
    PacProcessor \
    PrintSpooler \
    ProxyHandler \
    SharedStorageBackup \
    VpnDialogs \
    com.android.media.tv.remoteprovider \
    com.android.media.tv.remoteprovider.xml

# From build/target/product/generic_no_telephony.mk
PRODUCT_PACKAGES += \
    Bluetooth \
    SystemUI \
    librs_jni \
    audio.primary.default \
    audio_policy.default \
    clatd \
    clatd.conf \
    local_time.default \
    screenrecord

# Enable frame-exact AV sync
PRODUCT_PROPERTY_OVERRIDES += \
    persist.sys.media.avsync=true

# Include available languages for TTS in the system image
-include external/svox/pico/lang/PicoLangDeDeInSystem.mk
-include external/svox/pico/lang/PicoLangEnGBInSystem.mk
-include external/svox/pico/lang/PicoLangEnUsInSystem.mk
-include external/svox/pico/lang/PicoLangEsEsInSystem.mk
-include external/svox/pico/lang/PicoLangFrFrInSystem.mk
-include external/svox/pico/lang/PicoLangItItInSystem.mk

# Misc
PRODUCT_PACKAGES += \
    libcurl \

# CMLeanbackCustomizer
PRODUCT_PACKAGES += \
    CMLeanbackCustomizer

# TV Packages
PRODUCT_PACKAGES += \
    LeanbackLauncher \
    LeanbackIme \
    Overscan \
    SetupWraith

# From build/target/product/core_base.mk
PRODUCT_PACKAGES += \
    ContactsProvider \
    DefaultContainerService \
    UserDictionaryProvider \
    libaudiopreprocessing \
    libfilterpack_imageproc \
    libgabi++ \
    libkeystore \
    mdnsd \
    requestsync

# Stagefright
PRODUCT_PACKAGES += \
    libstagefright.so \
    libstagefright_amrnb_common.so \
    libstagefright_avc_common.so \
    libstagefright_enc_common.so \
    libstagefright_foundation.so \
    libstagefright_hdcprx.so \
    libstagefright_http_support.so \
    libstagefright_httplive.so \
    libstagefright_omx.so \
    libstagefright_soft_aacdec \
    libstagefright_soft_aacenc \
    libstagefright_soft_amrdec \
    libstagefright_soft_amrnbenc \
    libstagefright_soft_amrwbenc \
    libstagefright_soft_avcdec \
    libstagefright_soft_avcenc \
    libstagefright_soft_flacenc \
    libstagefright_soft_g712dec \
    libstagefright_soft_gsmdec \
    libstagefright_soft_hevcdec \
    libstagefright_soft_mp3dec \
    libstagefright_soft_mpeg2dec \
    libstagefright_soft_mpeg4dec \
    libstagefright_soft_mpeg4enc \
    libstagefright_soft_opusdec \
    libstagefright_soft_rawdec \
    libstagefright_soft_vorbisdec \
    libstagefright_soft_vpxdec \
    libstagefright_soft_vpxenc \
    libstagefright_soft_h264dec \
    libstagefright_soft_h264enc \
    libstagefright_soft_hevcdec \
    libstagefright_wfd \
    libstagefright_yuv

$(call inherit-product-if-exists, frameworks/base/data/sounds/AllAudio.mk)
$(call inherit-product-if-exists, external/svox/pico/lang/all_pico_languages.mk)
$(call inherit-product-if-exists, frameworks/base/data/fonts/fonts.mk)
$(call inherit-product-if-exists, external/google-fonts/dancing-script/fonts.mk)
$(call inherit-product-if-exists, external/google-fonts/carrois-gothic-sc/fonts.mk)
$(call inherit-product-if-exists, external/google-fonts/coming-soon/fonts.mk)
$(call inherit-product-if-exists, external/google-fonts/cutive-mono/fonts.mk)
$(call inherit-product-if-exists, external/noto-fonts/fonts.mk)
$(call inherit-product-if-exists, external/roboto-fonts/fonts.mk)
$(call inherit-product-if-exists, external/hyphenation-patterns/patterns.mk)
$(call inherit-product-if-exists, frameworks/base/data/keyboards/keyboards.mk)
$(call inherit-product-if-exists, frameworks/webview/chromium/chromium.mk)
$(call inherit-product, $(SRC_TARGET_DIR)/product/core_minimal.mk)

# ------- Android TV end -------- #

# Device overlay
DEVICE_PACKAGE_OVERLAYS += $(LOCAL_PATH)/overlay

# Languages
$(call inherit-product, $(SRC_TARGET_DIR)/product/languages_full.mk)

# Device uses high-density artwork where available
PRODUCT_AAPT_CONFIG := normal large xlarge tvdpi hdpi xhdpi xxhdpi
PRODUCT_AAPT_PREF_CONFIG := xhdpi

# Permissions
PRODUCT_COPY_FILES += \
    frameworks/native/data/etc/tablet_core_hardware.xml:system/etc/permissions/tablet_core_hardware.xml \
    frameworks/native/data/etc/android.hardware.wifi.xml:system/etc/permissions/android.hardware.wifi.xml \
    frameworks/native/data/etc/android.hardware.wifi.direct.xml:system/etc/permissions/android.hardware.wifi.direct.xml \
    frameworks/native/data/etc/android.hardware.usb.accessory.xml:system/etc/permissions/android.hardware.usb.accessory.xml \
    frameworks/native/data/etc/android.hardware.usb.host.xml:system/etc/permissions/android.hardware.usb.host.xml \
    frameworks/native/data/etc/android.software.sip.voip.xml:system/etc/permissions/android.software.sip.voip.xml \
    frameworks/native/data/etc/android.hardware.bluetooth.xml:system/etc/permissions/android.hardware.bluetooth.xml \
    frameworks/native/data/etc/android.hardware.bluetooth_le.xml:system/etc/permissions/android.hardware.bluetooth_le.xml \
    $(LOCAL_PATH)/permissions/tv_core_hardware.xml:system/etc/permissions/tv_core_hardware.xml \
    $(LOCAL_PATH)/permissions/android.hardware.hdmi.cec.xml:system/etc/permissions/android.hardware.hdmi.cec.xml

# Media
PRODUCT_COPY_FILES += \
    frameworks/av/media/libstagefright/data/media_codecs_google_audio.xml:system/etc/media_codecs_google_audio.xml \
    frameworks/av/media/libstagefright/data/media_codecs_google_video_le.xml:system/etc/media_codecs_google_video_le.xml \
    $(LOCAL_PATH)/configs/media/media_codecs_google_tv.xml:system/etc/media_codecs_google_tv.xml \
    $(LOCAL_PATH)/configs/media/media_codecs_mediatek_video.xml:system/etc/media_codecs_mediatek_video.xml \
    $(LOCAL_PATH)/configs/media/media_codecs_performance.xml:system/etc/media_codecs_performance.xml \
    $(LOCAL_PATH)/configs/media/media_codecs.xml:system/etc/media_codecs.xml \
    $(LOCAL_PATH)/configs/media/media_profiles.xml:system/etc/media_profiles.xml \
    $(LOCAL_PATH)/configs/media/media_codecs_dolby_audio.xml:system/etc/media_codecs_dolby_audio.xml \
    $(LOCAL_PATH)/configs/media/audio_effects.conf:system/etc/audio_effects.conf \
    $(LOCAL_PATH)/configs/media/mixer_paths.xml:system/etc/mixer_paths.xml \
    $(LOCAL_PATH)/configs/media/mixer_paths.xml:vendor/etc/mixer_paths.xml

# Ramdisk
PRODUCT_COPY_FILES += \
    $(call find-copy-subdir-files,*,$(LOCAL_PATH)/rootdir,root)

# libshims
PRODUCT_PACKAGES += \
     libshim_liblog \
     libshim_libgui

# Keylayouts
PRODUCT_COPY_FILES += \
    $(LOCAL_PATH)/keylayouts/Generic.kl:system/usr/keylayout/Generic.kl

# Audio
PRODUCT_PACKAGES += \
    audio.a2dp.default \
    audio_policy.stub \
    audio.r_submix.default \
    audio.usb.default \
    libalsautils \
    libaudio-resampler \
    libaudioroute \
    libaudiospdif \
    libeffects \
    libtinyalsa \
    libtinycompress \
    libtinyxml 
    
# Bluetooth
PRODUCT_PACKAGES += \
    bluetooth.default

# Amazon's btremoted
PRODUCT_PACKAGES += \
    btremoted

# Graphics
PRODUCT_PACKAGES += \
    libion
	
# Power
PRODUCT_PACKAGES += \
    power.mt8695

# Network
PRODUCT_PACKAGES += \
    netd

# Init Custom Config Files
PRODUCT_COPY_FILES += $(LOCAL_PATH)/configs/init/mediaserver.rc:system/etc/init/mediaserver.rc
PRODUCT_COPY_FILES += $(LOCAL_PATH)/configs/init/audioserver.rc:system/etc/init/audioserver.rc


# Build date
PRODUCT_BUILD_PROP_OVERRIDES += BUILD_UTC_DATE=0

# call dalvik heap config
$(call inherit-product, frameworks/native/build/tablet-7in-hdpi-1024-dalvik-heap.mk)

# call hwui memory config
$(call inherit-product-if-exists, frameworks/native/build/phone-xxhdpi-2048-hwui-memory.mk)

# Get non-open-source specific aspects
$(call inherit-product-if-exists, $(VENDOR_PATH)/mantis-vendor.mk)
