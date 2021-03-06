#ifndef _USER_IIC_H
#define _USER_IIC_H
#include "stm32f10x.h"
//如果移植程序时只要改一下四个地方就行了
/* 定时使用的IO口 */
#define I2C_RCC_APBxPeriph_GPIOx  RCC_APB2Periph_GPIOB
#define GPIO_I2C                  GPIOB
#define I2C_SCL                   GPIO_Pin_6	  //PB10
#define I2C_SDA                   GPIO_Pin_7	  //PB11



#define I2C_SCL_H GPIO_SetBits(GPIO_I2C,I2C_SCL)
#define I2C_SCL_L GPIO_ResetBits(GPIO_I2C,I2C_SCL)

#define I2C_SDA_H GPIO_SetBits(GPIO_I2C,I2C_SDA)
#define I2C_SDA_L GPIO_ResetBits(GPIO_I2C,I2C_SDA)

/* 声明全局函数 */
void I2C_Init_IO(void);
void I2C_SDA_OUT(void);
void I2C_SDA_IN(void);
void I2C_Start(void);
void I2C_Stop(void);
void I2C_Ack(void);
void I2C_NAck(void);
uint8_t   I2C_Wait_Ack(void);
void I2C_Send_Byte(uint8_t txd);
uint8_t   I2C_Read_Byte(void);

#endif


