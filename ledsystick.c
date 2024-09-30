// SysTick.c
/* Group 6 
Brandon Jamjampour
Daniel Banuelos
Anthony Nuth
Anastacia Estrella
*/
//date 9/23/24
#include <stdint.h>
#include "tm4c123gh6pm.h"
#include "ledsystick.h"

// Initialize SysTick with busy wait running at bus clock.
void SysTick_Init(uint32_t period){//passes in the reload value from main
  NVIC_ST_CTRL_R = 0;         // disable SysTick during setup
  NVIC_ST_RELOAD_R = period-1;// reload value: if period = 4
  NVIC_ST_CURRENT_R = 0;      // any write to current clears it
  NVIC_SYS_PRI3_R = (NVIC_SYS_PRI3_R&0x1FFFFFFF)|0x40000000; // priority 2
  NVIC_ST_CTRL_R |= NVIC_ST_CTRL_CLK_SRC|NVIC_ST_CTRL_INTEN|NVIC_ST_CTRL_ENABLE; // enable SysTick with core clock and interrupts      
}
void StopSystick(void){
	 NVIC_ST_CTRL_R = 0;         // this stops the clock
}