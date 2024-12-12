/*
 * Registers.h
 * For Genaral & Student Use only
 * Created: 12/11/2024 10:20:14 PM
 *  Author: Omar Basem Abdulsalam
 */


#ifndef REGISTERS_H_
#define REGISTERS_H_
#include "StdTypes.h"

/************************************************************************/
/*                               Port A                                 */
/************************************************************************/
#define PINA  *(volatile u8*)0x39
#define DDRA  *(volatile u8*)0x3A
#define PORTA *(volatile u8*)0X3B

/************************************************************************/
/*                               Port B                                 */
/************************************************************************/
#define PINB  *(volatile u8*)0X36
#define DDRB  *(volatile u8*)0X37
#define PORTB *(volatile u8*)0X38

/************************************************************************/
/*                               Port C                                 */
/************************************************************************/
#define PINC  *(volatile u8*)0X33
#define DDRC  *(volatile u8*)0X34
#define PORTC *(volatile u8*)0X35

/************************************************************************/
/*                               Port D                                 */
/************************************************************************/
#define PIND  *(volatile u8*)0X30
#define DDRD  *(volatile u8*)0X31
#define PORTD *(volatile u8*)0X32

#endif /* REGISTERS_H_ */