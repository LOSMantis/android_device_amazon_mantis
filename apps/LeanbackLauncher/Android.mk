LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := LeanbackLauncher
LOCAL_SRC_FILES := $(LOCAL_MODULE).apk
LOCAL_MODULE_CLASS := APPS
LOCAL_MODULE_TAGS := optional
LOCAL_MODULE_SUFFIX := $(COMMON_ANDROID_PACKAGE_SUFFIX)
LOCAL_CERTIFICATE := platform

#Apps not used on TV
LOCAL_OVERRIDES_PACKAGES := \
	AudioFX \
	BasicDreams \
	Calculator \
	Calendar \
	CalendarProvider \
	Camera2 \
	Contacts \
	ContactsProvider \
	DeskClock \
	Eleven \
	Email \
	Exchange2 \
	Galaxy4 \
	Gallery2 \
	HoloSpiralWallpaper \
	LiveWallpapers \
	LiveWallpapersPicker \
	LockClock \
	MmsService \
	PhaseBeam \
	PhotoPhase \
	PhotoTable \
	PrintSpooler \
	privacy-browser \
	SoundRecorder \
	Telecom \
	TelephonyProvider \
	TeleService \
	ThemeChooser \
	Trebuchet \
	VisualizationWallpapers \
	WallpaperCropper

include $(BUILD_PREBUILT)
