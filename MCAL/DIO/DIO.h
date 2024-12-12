/*
 * DIO.h
 * For Genaral & Student Use only
 * Created: 12/11/2024 10:15:22 PM
 *  Author: Omar Basem Abdulsalam
 */ 


#ifndef DIO_H_
#define DIO_H_
#include "Application Layer/BitMath.h"
#include "MCAL/StdTypes.h"
#include "Application Layer/Registers.h"

/************************************************************************/
/*                                Macros                                */
/************************************************************************/
/********************************I/O*************************************/
#define Output 1
#define Input 2 
/********************************High / LOw******************************/
#define High 1
#define Low 2
/********************************Enable / Disable************************/
#define Enable 1
#define Disable 2
/********************************Ports***********************************/
#define A 1
#define B 2 
#define C 3
#define D 4
/*********************************Pins***********************************/
//Port A
#define PA0 10
#define PA1 11
#define PA2 12
#define PA3 13
#define PA4 14 
#define PA5 15 
#define PA6 16
#define PA7 17
//Port B
#define PB0 20
#define PB1 21
#define PB2 22
#define PB3 23
#define PB4 24
#define PB5 25
#define PB6 26
#define PB7 27
//Port C
#define PC0 30
#define PC1 31
#define PC2 32
#define PC3 33
#define PC4 34
#define PC5 35
#define PC6 36
#define PC7 37
//Port D 
#define PD0 40
#define PD1 41
#define PD2 42
#define PD3 43
#define PD4 44
#define PD5 45
#define PD6 46
#define PD7 47
/************************************************************************/
/*                               Prototypes                             */
/************************************************************************/
void M_DIO_PinMode (u8 pin,u8 mode);
void M_DIO_PinWrite (u8 pin,u8 write);
u8   M_DIO_PinPullRead (u8 pin);
void M_DIO_PinPullRes (u8 pin,u8 state);
#endif /* DIO_H_ */