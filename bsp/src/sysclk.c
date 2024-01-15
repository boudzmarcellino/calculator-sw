
#include "stm32f401xe.h"
#include "sysclk.h"
void SYSCLK_init(){
//    (*RCC) &=  RCC_MASK; 
}
void SYSCLK_config(){
    
};

void SYSCLK_enable(){
/** POSSIBILITIES TO CONFIGURE CLOCK ON NORMAL POWER OR LOW POEWER  **/
    
//PERIPHERAL CLOCKS ON THE AHB BUSE
    //TODO : Enable GPIO clock for each port in use
    RCC->AHB1ENR |= GPIOAEN; 

//PERIPHERAL CLOCKS ON THE APB1 BUSE
    //TODO : Enable USART2 clock
    RCC->APB1ENR |= USART1EN;
 
//PERIPHERAL CLOCKS ON THE APB2 BUSE
    //TODO : Enable USART2 clock
    RCC->APB2ENR |= USART2EN;


}