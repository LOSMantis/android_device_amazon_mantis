DEVICE_PATH := device/amazon/mantis
VENDOR_PATH := vendor/amazon/mantis
$(shell mkdir -p $(OUT)/obj/KERNEL_OBJ/usr)


# headers
TARGET_SPECIFIC_HEADER_PATH := $(DEVICE_PATH)/include

# inherit from the proprietary version
-include $(VENDOR_PATH)/BoardConfigVendor.mk

# Platform
TARGET_BOARD_PLATFORM := mt8695
#TARGET_BOARD_PLATFORM_GPU := mali-720mp2

# Bootloader
TARGET_NO_BOOTLOADER := true

# Architecture
TARGET_ARCH := arm
TARGET_CPU_VARIANT := cortex-a7
TARGET_ARCH_VARIANT := armv7-a-neon
TARGET_ARCH_VARIANT_CPU := cortex-a7
TARGET_CPU_VARIANT:= cortex-a7
TARGET_CPU_ABI := armeabi-v7a
TARGET_CPU_ABI2 := armeabi
TARGET_CPU_SMP := true

# Kernel Config
TARGET_KERNEL_CROSS_COMPILE_PREFIX := arm-linux-androideabi-

BOARD_KERNEL_CMDLINE := bootopt=64S3,32N2,32N2 androidboot.selinux=permissive

BOARD_KERNEL_BASE := 0x40000000
BOARD_KERNEL_PAGESIZE := 2048
BOARD_FLASH_BLOCK_SIZE := 131072

#TARGET_PREBUILT_KERNEL := device/amazon/mantis/boot.img

BOARD_KERNEL_IMAGE_NAME := zImage-dtb
#TARGET_PREBUILT_KERNEL := $(DEVICE_PATH)/zImage-dtb

TARGET_KERNEL_SOURCE := kernel/amazon/mantis
TARGET_KERNEL_CONFIG := mantis_defconfig
#TARGET_KERNEL_VARIANT_CONFIG := mantis_defconfig

BOARD_MKBOOTIMG_ARGS := --base 0x40000000 --ramdisk_offset 0x04000000 --second_offset 0x00f00000 --tags_offset 0x0e000000

# MTK Hardware
BOARD_HAS_MTK_HARDWARE := true

# Target has /vendor
TARGET_COPY_OUT_VENDOR := vendor
BOARD_NEEDS_VENDORIMAGE_SYMLINK := true
BOARD_VENDORIMAGE_FILE_SYSTEM_TYPE := ext4

# Binder API version
TARGET_USES_64_BIT_BINDER := false
BOARD_NO_SECURE_DISCARD := true

# WIFI
WPA_SUPPLICANT_VERSION := VER_0_8_X
BOARD_HOSTAPD_DRIVER := NL80211
BOARD_HOSTAPD_PRIVATE_LIB := lib_driver_cmd_mt66xx
BOARD_WPA_SUPPLICANT_DRIVER := NL80211
BOARD_WPA_SUPPLICANT_PRIVATE_LIB := lib_driver_cmd_mt66xx
WIFI_DRIVER_FW_PATH_PARAM := "/dev/wmtWifi"
WIFI_DRIVER_FW_PATH_STA:=STA
WIFI_DRIVER_FW_PATH_AP:=AP
WIFI_DRIVER_FW_PATH_P2P:=P2P

# Bluetooth
BOARD_HAVE_BLUETOOTH := true
BOARD_HAVE_BLUETOOTH_MTK := true
BOARD_BLUETOOTH_DOES_NOT_USE_RFKILL := true
BOARD_BLUETOOTH_BDROID_BUILDCFG_INCLUDE_DIR := $(DEVICE_PATH)/bluetooth

# Graphics
BOARD_EGL_CFG := $(DEVICE_PATH)/configs/egl.cfg
USE_OPENGL_RENDERER := true
#VSYNC_EVENT_PHASE_OFFSET_NS := 0
#TARGET_RUNNING_WITHOUT_SYNC_FRAMEWORK := true
#NUM_FRAMEBUFFER_SURFACE_BUFFERS := 3

# Filesystem
BOARD_BOOTIMAGE_PARTITION_SIZE := 16777216
BOARD_RECOVERYIMAGE_PARTITION_SIZE := 16777216
BOARD_CACHEIMAGE_PARTITION_SIZE := 536870912
BOARD_SYSTEMIMAGE_PARTITION_SIZE := 1153433600
BOARD_VENDORIMAGE_PARTITION_SIZE := 157286400
BOARD_USERDATAIMAGE_PARTITION_SIZE := 5920046592
BOARD_FLASH_BLOCK_SIZE := 131072

TARGET_USERIMAGES_USE_EXT4 := true

BLOCK_BASED_OTA := true

# SECCOMP
BOARD_SECCOMP_POLICY += $(DEVICE_PATH)/seccomp

# SELinux
BOARD_SEPOLICY_DIRS += $(DEVICE_PATH)/sepolicy

# Vold
TARGET_USE_CUSTOM_LUN_FILE_PATH := /sys/devices/platform/mt_usb/musb-hdrc.0.auto/gadget/lun%d/file

# Shims
LINKER_FORCED_SHIM_LIBS := \
    /system/lib/liblog.so|libshim_liblog.so \
    /system/lib/libcutils.so|libshim_liblog.so \
    /system/vendor/lib/libwvm.so|libshim_libwvm.so \
    /system/lib/libgui.so|libshim_libgui.so

# TWRP
ifneq (,$(strip $(wildcard bootable/recovery-twrp/twrp.cpp)))
RECOVERY_VARIANT := twrp
endif
TARGET_RECOVERY_FSTAB := $(DEVICE_PATH)/recovery.fstab
TW_THEME := landscape_hdpi
TW_CUSTOM_CPU_TEMP_PATH := /sys/devices/virtual/thermal/thermal_zone1/temp
BOARD_HAS_NO_REAL_SDCARD := true
RECOVERY_SDCARD_ON_DATA := true
TW_NO_BATT_PERCENT := true
TW_NO_SCREEN_TIMEOUT := true
TW_AMONET := true
TW_HACKED_BL_BUTTON := true
TW_BOOT_MENU := true
TW_DEFAULT_BACKUP_LIST := "/system_image;/vendor_image;/data;/boot;"

# Use dlmalloc instead of jemalloc for mallocs
MALLOC_SVELTE := true

# Disable API check
WITHOUT_CHECK_API := true
