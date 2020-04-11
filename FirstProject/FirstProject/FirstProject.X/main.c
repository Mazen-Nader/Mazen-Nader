/*
 * File:   main.c
 * Author: Hossam Eldeen Altokhy
 *
 * Created on April 4, 2020, 6:24 PM
 */

#include <avr/io.h>
#include "DIO.h"
#define  button0   0 //portb
#define button1    4 //portb
#define button2    2 //portd
#define  led0      2 //portc
#define  led1      7 //port c
#define  led2      3 //port d

int main(void) {
    
    DDRB = 0x00;
    DDRD = 0X08;
    DDRC= 0b10000100;
    while(1){
        if(isPressedB(button0)==1)
                setPINC(led0);
        else 
            resPINC(led0);
                
        if(isPressedB(button1)==1)
                setPINC(led1);
        else 
            resPINC(led1);
        
        if(isPressedD(button2)==1)
                setPIND(led2);
        else 
            resPIND(led2);
        
    }

}
   

