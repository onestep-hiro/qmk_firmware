# Build Options
#   change yes to no to disable
#

DEFAULT_FOLDER = crkbd/rev1

RGBLIGHT_SUPPORTED = no
RGB_MATRIX_SUPPORTED = no

VIA_ENABLE = yes
CONSOLE_ENABLE = yes

# JOYSTICK_ENABLE = yes
# JOYSTICK_DRIVER = analog

MOUSEKEY_ENABLE = yes
OLED_DRIVER_ENABLE  = no
POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = analog_joystick
NKRO_ENABLE = yes
# BOOTLOADER = qmk-dfu

SRC += analog.c




