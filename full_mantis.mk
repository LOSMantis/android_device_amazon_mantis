# Inherit from the common Open Source product configuration
$(call inherit-product, $(SRC_TARGET_DIR)/product/full_base.mk)

# Inherit from hardware-specific part of the product configuration
$(call inherit-product, device/amazon/mantis/device.mk)

PRODUCT_DEVICE := mantis
PRODUCT_NAME := full_mantis
PRODUCT_BRAND := google
PRODUCT_MODEL := Fire TV Stick 4K
PRODUCT_MANUFACTURER := amzn
PRODUCT_RESTRICT_VENDOR_FILES := false

