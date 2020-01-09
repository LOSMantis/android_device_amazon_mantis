# Boot animation
TARGET_SCREEN_WIDTH := 600
TARGET_SCREEN_HEIGHT := 1024

$(call inherit-product-if-exists, vendor/cm/config/common_full_tablet_wifionly.mk)

# Inherit device configuration
$(call inherit-product, device/amazon/mantis/full_mantis.mk)

## Device identifier. This must come after all inclusions
PRODUCT_DEVICE := mantis
PRODUCT_NAME := lineage_mantis
PRODUCT_BRAND := Amazon
PRODUCT_BOARD := mantis
PRODUCT_MODEL := AFTMM
PRODUCT_MANUFACTURER := amzn

PRODUCT_BUILD_PROP_OVERRIDES += \
    BUILD_FINGERPRINT=Amazon/mantis/mantis:6.0/NS6265/2157N:user/amz-p,release-keys \
    PRIVATE_BUILD_DESC="mantis-user 6.0 NS6265 2157 amz-p,release-keys"

