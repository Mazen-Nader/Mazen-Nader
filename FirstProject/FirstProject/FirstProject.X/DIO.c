/*
 * File:   DIO.c
 * Author: Safaa
 *
 * Created on April 10, 2020, 5:50 PM
 */


#include <xc.h>

/*void _setPIN(int pinNum) {
    //PORTA |= (1 << pinNum);
  }*/

/*void _resetPIN(int pinNum) {
    PORTA &= ~(1 << pinNum);
}*/
int isPressedA(int pinNum) {
    if (PINA & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
int isPressedB(int pinNum) {
    if (PINB & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
int isPressedC(int pinNum) {
    if (PINC & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
int isPressedD(int pinNum) {
    if (PIND & (1 << pinNum)) {
        return 1;
    } else {
        return 0;
    }
}
//setPIN(LED, portA);

/*void setPIN(int pinNum, char port) {

    switch (port) {

        case 1:
            PORTA |= (1 << pinNum);
            break;
        case 2:
            PORTB |= (1 << pinNum);
            break;
        case 3:
            PORTC |= (1 << pinNum);
            break;
        case 4:
            PORTD |= (1 << pinNum);
            break;
    }

}*/

/*void resetPIN(int pinNum, char port) {

    switch (port) {

        case 1:
            PORTA &= ~(1 << pinNum);
            break;
        case 2:
            PORTB &= ~(1 << pinNum);
            break;
        case 3:
            PORTC &= ~(1 << pinNum);
            break;
        case 4:
            PORTD &= ~(1 << pinNum);
            break;
    }

}*/

void setPINA(int pinNum) {
    PORTA |= (1 << pinNum);
}

void setPINB(int pinNum) {
    PORTB |= (1 << pinNum);
}

void setPINC(int pinNum) {
    PORTC |= (1 << pinNum);
}

void setPIND(int pinNum) {
    PORTD |= (1 << pinNum);
}

void resPINA(int pinNum) {
    PORTA &=~ (1 << pinNum);
}
void resPINB(int pinNum) {
    PORTB &=~ (1 << pinNum);
}
void resPINC(int pinNum) {
    PORTC &=~ (1 << pinNum);
}
void resPIND(int pinNum) {
    PORTD &=~ (1 << pinNum);
}
void setPORTA() {
    PORTA = 0xFF;
}
void setPORTB() {
    PORTB = 0xFF;
}
void setPORTC() {
    PORTC = 0xFF;
}
void setPORTD() {
    PORTD = 0xFF;
}
void resPORTA() {
    PORTA = 0x00;
}
void resPORTB() {
    PORTB = 0x00;
}
void resPORTC() {
    PORTC = 0x00;
}
void resPORTD() {
    PORTD = 0x00;
}