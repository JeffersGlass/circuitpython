LD_FILE = boards/samd21x18-bootloader.ld
USB_VID = 0x04D8
USB_PID = 0xEC75
USB_PRODUCT = "XinaBox CS11"
USB_MANUFACTURER = "XinaBox"

CHIP_VARIANT = SAMD21G18A
CHIP_FAMILY = samd21

INTERNAL_FLASH_FILESYSTEM = 1
LONGINT_IMPL = MPZ
CIRCUITPY_FULL_BUILD = 0

SUPEROPT_GC = 0

# Make room for frozen libs.
CIRCUITPY_FREQUENCYIO = 0
CIRCUITPY_ANALOGIO=0
CIRCUITPY_NEOPIXEL_WRITE=0
CIRCUITPY_PULSEIO=0
CIRCUITPY_ROTARYIO=0
CIRCUITPY_TOUCHIO_USE_NATIVE=0
CIRCUITPY_TOUCHIO=0
CIRCUITPY_USB_MIDI=0
CIRCUITPY_RTC=0
CIRCUITPY_COUNTIO=0
CIRCUITPY_BUSDEVICE=1

# Include these Python libraries in firmware.
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_SD
