#define RCC_MASK  0x00000000
#define GPIOAEN  (1U<<0)
#define USART2EN  (1U<<17)
#define USART1EN (1U<<4)

void SYSCLK_init();
void SYSCLK_enable();
void SYSCLK_config();