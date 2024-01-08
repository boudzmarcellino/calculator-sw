
#include "stm32f401xe.h"
#include "sysclk.h"
void SYSCLK_gpioA(){

    //TODO : Enable the AHB 
    RCC->AHB1ENR |= GPIOAEN; 
    //TODO : Enable AHB1
    //TODO : Enable ClkGPIO
    
}