#ifdef _MLX90640_I2C_Driver_H_
#define _MLX90640_I2C_Driver_H_
#include <stdint.h>
#include "mlx90604_api.h"

extern void MLX90640_I2CInit(void); //MLX90640
extern int MLX90640_I2CGenerateReset(void);
extern int MLX90640_I2CRead(uint8_t slaveAddress, uint16_t startAddress, uint16_t  nMemAddrRead, uint16_t *data);
extern int MLX90640_I2CWrite(uint8_t slaveAddress, uint16_t writeAddress, uint16_t data);
extern void MLX90640_I2CFrequencySet(int frequency);

#endif       