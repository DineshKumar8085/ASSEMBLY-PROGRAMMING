#include <AT89S52.h>            /*include header file for AT89S52*/
#define LED P2_0                /*LED connected at port pin 2.0*/
#define ON 0                    /*logic 0 = activate the led*/
#define OFF 1                   /*logic 1 = deactivate the led*/
#define SW P3.3                 /*switch connected to port pin 3.3*/
#define INPUT 1                 /*logic 1 = switch open*/    


void main()                     /*main function*/
{              
__bit status;                   /*initialize a bit variable*/ 
LED = OFF;                      /*turn off the LED*/
SW = INPUT;                     /*configure port pin connected to switch as input*/
while(1){                       /*Execute below lines in super loop*/
status = SW;                    /*Read the switch and store the logic to a variable*/
LED = status;                   /*write the logic to the LED*/
}
}


