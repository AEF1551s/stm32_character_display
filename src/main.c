//CMSIS
#include <stm32f410rx.h>
#include <stm32f4xx.h>
//STD
#include <stdbool.h>
#include <stdlib.h>
//USER
#include <gpio.h> //GPIO
#include <exti.h> //EXTERNAL INTERUPS
#include <sipo_sreg.h> //SERIAL IN PARRALEL OUT SHIFT REGISTER

int main()
{
    // Setup
    gpio_init();
    exti_init();

    // Loop
    while (true)
    {
    }

    return 0;
}

// Interrupts
void EXTI15_10_IRQHandler(void)
{   
    // switch (EXTI->PR)
    // {
    // case EXTI_PR_PR11:
    //     break;
    
    // default:
    //     break;
    // }
    // // if interrupt happens on 11 pin
    // if (READ_BIT(EXTI->PR, EXTI_PR_PR11))
    // {
    //     // Clear pending bit by writing 1 per RefManual. reset interupt request
    //     SET_BIT(EXTI->PR, EXTI_PR_PR11);
    // }
}