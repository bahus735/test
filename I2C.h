

#ifndef I2C_H_
#define I2C_H_

#include "MKL25Z4.h"


#define ALT0				0
#define ALT1				1
#define ALT2				2
#define ALT3				3
#define MULT0				0
#define MULT1				1
#define MULT2				2
#define I2C_WRITE		0	// Master write
#define I2C_READ		1	// Master read

void I2C_int( void );
void i2c_DisableAck( void);
void i2c_EnableAck( void);
void i2c_RepeatedStart( void);
void i2c_EnterRxMode( void);
void i2c_Start( void);
void i2c_Stop( void);
void i2c_Wait( void);
void i2c_EnterTxMode(void);
void i2c_WriteByte( uint8_t data);
void i2c_SetPointer( uint8_t SlaveAddress,uint8_t Pointer);
void i2c_WriteRegister( uint8_t SlaveAddress,uint8_t RegisterAddress, uint8_t data);
uint8_t i2c_ReadByte(void );
uint8_t i2c_ReadRegister(uint8_t SlaveAddress,uint8_t RegisterAddress);
//void i2c_ReadMultRegister( uint8_t SlaveAddress,uint8_t RegisterAddress,uint8_t n_data, uint8_t *res);
void i2c_WriteMultRegister(uint8_t SlaveAddress,uint8_t RegisterAddress, uint8_t n_data, uint8_t *data);


void mywait(uint32_t t);

#endif 
