#ifndef TFT_DISPLAY_H
#define TFR_DISPLAY_H

#include <stdint.h>
void tft_init(void);
void tft_wrtie_command(uint8_t cmd);
void tft_write_data(uint8_t data);


#endif