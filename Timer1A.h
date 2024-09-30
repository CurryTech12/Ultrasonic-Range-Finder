// Timer1A.h
// Runs on TM4C123
// By Dr. Min He
// December 10th, 2018
/* Group 6 
Brandon Jamjampour
Daniel Banuelos
Anthony Nuth
Anastacia Estrella
*/
 
#include <stdint.h>

// Time delay using busy wait.
void Timer1A_Init(void);//timer one init
void TimerStop(void);//prototype for timerstop function
void EchoStart(unsigned long period);//start the echo timer to count up to 40mS
void TriggerStart(unsigned long period);//trigger create 10uS high count
uint32_t Pulse_width(void);//calculates max value 640000 minus - the current value of timer A
