#include "user_delay.h"
/**
*名称：较精确延时函数
*作者：陈冲
*时间：2018年9月
*版本：1.0
*更新：1.0：无
**/

/**
*name:delay_us(uint32_t nTimer)  
*fun :实现较为精确的微秒延时
*para:微秒数
*ret ：void
**/
void delay_Us(uint32_t nTimer)  
{  
    uint32_t i=0;  
    for(i=0;i<nTimer;i++){  
        __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();  
        __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();  
        __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();  
        __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();  
        __NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();__NOP();  
    }  
}  
/**
*name:delay_ms(uint32_t nTimer)  
*fun :实现较为精确的毫秒延时
*para:毫秒数
*ret ：void
**/
void delay_Ms(uint32_t nTimer)  
{  
    uint32_t i=1000*nTimer;  
    delay_Us(i);  
}  
/**
*name:delay_ms(uint32_t nTimer)  
*fun :实现较为精确的百微秒秒延时
*para:毫秒数
*ret ：void
**/
void delay_100Us(uint32_t nTimer)
{
	uint32_t i=100*nTimer;  
    delay_Us(i);  
}
