/*
 * This config file is for the Sandisk Sansa Fuze+
 */
#define TARGET_TREE /* this target is using the target tree system */

/* For Rolo and boot loader */
#define MODEL_NUMBER 72
#define MODEL_NAME   "Sandisk Sansa Fuze+"

#define HW_SAMPR_CAPS       SAMPR_CAP_ALL

/* define this if you have recording possibility */
#define HAVE_RECORDING

#define REC_SAMPR_CAPS      SAMPR_CAP_ALL

/* Default recording levels */
#define DEFAULT_REC_MIC_GAIN    23
#define DEFAULT_REC_LEFT_GAIN   23
#define DEFAULT_REC_RIGHT_GAIN  23

/* Define bitmask of input sources - recordable bitmask can be defined
   explicitly if different */
#define INPUT_SRC_CAPS (SRC_CAP_MIC | SRC_CAP_FMRADIO)

/* define this if you have a bitmap LCD display */
#define HAVE_LCD_BITMAP
/* define this if you have a colour LCD */
#define HAVE_LCD_COLOR

#ifndef BOOTLOADER/* define this if you want album art for this target */
#define HAVE_ALBUMART

/* define this to enable bitmap scaling */
#define HAVE_BMP_SCALING

/* define this to enable JPEG decoding */
#define HAVE_JPEG

/* define this if you have a light associated with the buttons */
#define HAVE_BUTTON_LIGHT

/* define this if you have access to the quickscreen */
#define HAVE_QUICKSCREEN

/* define this if you have access to the pitchscreen */
#define HAVE_PITCHSCREEN

/* define this if you would like tagcache to build on this target */
#define HAVE_TAGCACHE

/* define this if you have LCD enable function */
#define HAVE_LCD_ENABLE

/* Define this if your LCD can be put to sleep. HAVE_LCD_ENABLE
   should be defined as well.
#define HAVE_LCD_SLEEP
#define HAVE_LCD_SLEEP_SETTING
*/

/* define this if you can flip your LCD
#define HAVE_LCD_FLIP
*/

/* define this if you can invert the colours on your LCD
#define HAVE_LCD_INVERT
*/

/* define this if you have a real-time clock */
#define CONFIG_RTC RTC_IMX233

/* There is no hardware tone control */
#define HAVE_SW_TONE_CONTROLS

#endif /* !BOOTLOADER */

#define CONFIG_KEYPAD SANSA_FUZEPLUS_PAD

/* Define this to enable morse code input */
#define HAVE_MORSE_INPUT

/* Define this if you do software codec */
#define CONFIG_CODEC SWCODEC


/* LCD dimensions */
#define LCD_WIDTH  240
#define LCD_HEIGHT 320
#define LCD_DEPTH  16   /* 65536 colours */
#define LCD_PIXELFORMAT RGB565 /* rgb565 */

/* Define this if you have a software controlled poweroff */
#define HAVE_SW_POWEROFF

/* The number of bytes reserved for loadable codecs */
#define CODEC_SIZE 0

/* The number of bytes reserved for loadable plugins */
#define PLUGIN_BUFFER_SIZE 0

#define AB_REPEAT_ENABLE

/* Define this for LCD backlight available */
#define HAVE_BACKLIGHT
#define HAVE_BACKLIGHT_BRIGHTNESS

/* Main LCD backlight brightness range and defaults */
#define MIN_BRIGHTNESS_SETTING      1
#define MAX_BRIGHTNESS_SETTING     100 /* unsure */
#define DEFAULT_BRIGHTNESS_SETTING  60 /* fixme */

/* Which backlight fading type? */
#define CONFIG_BACKLIGHT_FADING BACKLIGHT_FADING_SW_SETTING

/* define this if you have a flash memory storage */
#define HAVE_FLASH_STORAGE

/* define this if the flash memory uses the SecureDigital Memory Card protocol */
#define CONFIG_STORAGE (STORAGE_SD | STORAGE_MMC)

#define NUM_DRIVES 2

/* todo */
#define BATTERY_CAPACITY_DEFAULT 550    /* default battery capacity */
#define BATTERY_CAPACITY_MIN 550        /* min. capacity selectable */
#define BATTERY_CAPACITY_MAX 550        /* max. capacity selectable */
#define BATTERY_CAPACITY_INC 0          /* capacity increment */
#define BATTERY_TYPES_COUNT  1          /* only one type */

/* Charging implemented in a target-specific algorithm */
#define CONFIG_CHARGING CHARGING_TARGET

/* define this if the unit can be powered or charged via USB */
#define HAVE_USB_POWER

/* Define this if you have an IMX233*/
#define CONFIG_CPU IMX233

/* Define this if you want to use the IMX233 i2c interface */
#define CONFIG_I2C I2C_IMX233

/* define current usage levels (based on battery bench) */
#define CURRENT_NORMAL     35
#define CURRENT_BACKLIGHT  30
#define CURRENT_RECORD     CURRENT_NORMAL

/* maximum charging current */
#define CURRENT_MAX_CHG   200

/* Define this to the CPU frequency */
#define CPU_FREQ      454000000

/* Type of LCD */
#define CONFIG_LCD LCD_FUZEPLUS

/* Offset ( in the firmware file's header ) to the file CRC and data. These are
   only used when loading the old format rockbox.e200 file */
#define FIRMWARE_OFFSET_FILE_CRC    0x0
#define FIRMWARE_OFFSET_FILE_DATA   0x8

#ifndef BOOTLOADER
#define HAVE_MULTIDRIVE
#define NUM_DRIVES 2
#define HAVE_HOTSWAP
#endif

/* USB On-the-go */
#define CONFIG_USBOTG USBOTG_ARC

/* enable these for the experimental usb stack */
#define HAVE_USBSTACK
//#define USB_HANDLED_BY_OF
#define USE_ROCKBOX_USB
#define HAVE_BOOTLOADER_USB_MODE
#define USB_VENDOR_ID 0x0781
#define USB_PRODUCT_ID 0x74e1
#define HAVE_USB_HID_MOUSE
//#define HAVE_BOOTLOADER_USB_MODE

/* Define this if you have adjustable CPU frequency */
#define HAVE_ADJUSTABLE_CPU_FREQ

#define BOOTFILE_EXT    "sansa"
#define BOOTFILE        "rockbox." BOOTFILE_EXT
#define BOOTDIR "/.rockbox"

#define INCLUDE_TIMEOUT_API