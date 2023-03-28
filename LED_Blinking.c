#include <AT89S52.h>	  /* include header file for AT89S52 */ 
void stop(void);        /*declaring the stop function with the void datatype*/

void main()             /*main function of the program*/
{
  while(1)  	          /* Super loop (Infinite loop) */
  {
  P2_0=0;               /*Configure the port pin 2.0 to write logic 0(led on)*/
  stop();               /*calls the stop function for some delay*/
  P2_0=1;               /*configure the port pin 2.0 to write logic 1(led off)*/
  stop();               /*calls the stop function for some delay*/
  }
}
void stop(){            /*stop function of the program*/
int i=0;                /*declare a variable "i" and assigning the value*/
for(i=0;i<=100;i++){    /*delay program to off and on the led*/
}
}


NOTE:
As per MCU-8051 IDE SDCC compilation,the logic 0 will turn the led on and logic 1 will turn the led off.
the logic of the program varies to different compilers.

