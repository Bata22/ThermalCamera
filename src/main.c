#include <libopencm3/stm32/rcc.h>
#include <libopencm3/stm32/gpio.h>
#include "tft_display.h"
#include "mlx90640_api.h"

static void delay(uint32_t count)
{
    for (uint32_t i = 0; i < count; i++)
    {
        __asm__("nop");
    }
}

int main(void)
{
    rcc_periph_clock_enable(RCC_GPIOC);

    gpio_set_mode(GPIOC, GPIO_MODE_OUTPUT_10_MHZ, GPIO_CNF_OUTPUT_PUSHPULL, GPIO13);

    while (1)
    {
        gpio_toggle(GPIOC, GPIO13);
        delay(800000);
    }
}