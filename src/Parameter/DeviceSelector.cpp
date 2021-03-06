#include "../Parameter/DeviceSelector.h"

extern u8 nums_led_channel_available = 4;
extern u8 led_pins[NUM_LED_STRIP] = {PA0, PA1, PA2, PA3};
extern u8 sys_led = PC13;

extern u32 led_color_correction = 0xFFFFFFFF;

extern u8 brightness_button = 0;
extern u8 flash_button = 0;

//EEPROM
extern bool eeprom_enable = false;
extern u32 eeprom_user_adds_0 = 0;
extern u32 eeprom_user_adds_1 = 0;
extern u32 eeprom_palette_adds_0 = 0;
extern u32 eeprom_palette_adds_1 = 0;
extern u32 eeprom_sys_adds_0 = 0;
extern u32 eeprom_sys_adds_1 = 0;
extern u32 eeprom_pagesize = 0x400;

void loadDeviceConfig()
{
  switch(MATRIX_MODEL)
  {
    case MXLS: //MXlS Matrix Light Strip

    switch(MATRIX_VERSION)
    {
      case 0x00:
      loadConfigSTLINKV2M1();
      break;
      case 0x10:
      loadConfigBluePill();
      break;
      case 0x11:
      loadConfigBluePillPlus();
      break;

    }
    break;
  }
}
