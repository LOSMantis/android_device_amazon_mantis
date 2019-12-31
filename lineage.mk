# Boot animation
TARGET_SCREEN_WIDTH := 600
TARGET_SCREEN_HEIGHT := 1024

$(call inherit-product-if-exists, vendor/cm/config/common_full_tablet_wifionly.mk)

# Inherit device configuration
$(call inherit-product, device/amazon/mantis/full_mantis.mk)

## Device identifier. This must come after all inclusions
PRODUCT_DEVICE := mantis
PRODUCT_NAME := lineage_mantis
PRODUCT_BRAND := google
PRODUCT_MODEL := Fire TV Stick 4K
PRODUCT_MANUFACTURER := amzn
