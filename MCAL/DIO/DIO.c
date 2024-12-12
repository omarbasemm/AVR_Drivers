/*
 * DIO.c
 * For Genaral & Student Use only
 * Created: 12/11/2024 10:20:14 PM
 *  Author: Omar Basem Abdulsalam
 */
#include "DIO.h"
//Pin In / Out
void M_Dio_PinMode(u8 Local_u8_Num,u8 Local_u8_Mode)
{
	u8 Local_u8_Pin  = Local_u8_Num % 10;
	u8 Local_u8_Port = Local_u8_Num / 10;
	switch(Local_u8_Mode)
	{
		case OUTPUT:
		switch(Local_u8_Port)
		{
			case 1: SetBit(DDRA,Local_u8_Pin); break;
			case 2: SetBit(DDRB,Local_u8_Pin); break;
			case 3: SetBit(DDRC,Local_u8_Pin); break;
			case 4: SetBit(DDRD,Local_u8_Pin); break;
			default:                           break;
		}
		break;
		case INPUT:
		switch(Local_u8_Port)
		{
			case 1: ClrBit(DDRA,Local_u8_Pin); break;
			case 2: ClrBit(DDRB,Local_u8_Pin); break;
			case 3: ClrBit(DDRC,Local_u8_Pin); break;
			case 4: ClrBit(DDRD,Local_u8_Pin); break;
			default:                           break;
		}
		break;
		default:
		break;
	}
}
//Pin High / Low
void M_Dio_PinWrite(u8 Local_u8_Num,u8 Local_u8_Mode)
{
	u8 Local_u8_Pin  = Local_u8_Num % 10;
	u8 Local_u8_Port = Local_u8_Num / 10;
	switch(Local_u8_Mode)
	{
		case HIGH:
		switch(Local_u8_Port)
		{
			case 1: SetBit(PORTA,Local_u8_Pin); break;
			case 2: SetBit(PORTB,Local_u8_Pin); break;
			case 3: SetBit(PORTC,Local_u8_Pin); break;
			case 4: SetBit(PORTD,Local_u8_Pin); break;
			default:                           break;
		}
		break;
		case LOW:
		switch(Local_u8_Port)
		{
			case 1: ClrBit(PORTA,Local_u8_Pin); break;
			case 2: ClrBit(PORTB,Local_u8_Pin); break;
			case 3: ClrBit(PORTC,Local_u8_Pin); break;
			case 4: ClrBit(PORTD,Local_u8_Pin); break;
			default:                           break;
		}
		break;
		default:
		break;
	}
}
//Pin Enable / Disable
void M_Dio_PinPullUpRes(u8 Local_u8_Num,u8 Local_u8_Mode)
{
	u8 Local_u8_Pin  = Local_u8_Num % 10;
	u8 Local_u8_Port = Local_u8_Num / 10;
	switch(Local_u8_Mode)
	{
		case ENABLE:
		switch(Local_u8_Port)
		{
			case 1: SetBit(PORTA,Local_u8_Pin); break;
			case 2: SetBit(PORTB,Local_u8_Pin); break;
			case 3: SetBit(PORTC,Local_u8_Pin); break;
			case 4: SetBit(PORTD,Local_u8_Pin); break;
			default:                            break;
		}
		break;
		case DISABLE:
		switch(Local_u8_Port)
		{
			case 1: ClrBit(PORTA,Local_u8_Pin); break;
			case 2: ClrBit(PORTB,Local_u8_Pin); break;
			case 3: ClrBit(PORTC,Local_u8_Pin); break;
			case 4: ClrBit(PORTD,Local_u8_Pin); break;
			default:                            break;
		}
		break;
		default:
		break;
	}
}
//Pin Read
u8   M_Dio_PinRead(u8 Local_u8_Num)
{
	u8 Local_u8_Pin  = Local_u8_Num % 10;
	u8 Local_u8_Port = Local_u8_Num / 10;
	u8 Local_u8_PinReading = 0;
	switch(Local_u8_Port)
	{
		case 1: Local_u8_PinReading = GetBit(PINA,Local_u8_Pin); break;
		case 2: Local_u8_PinReading = GetBit(PINB,Local_u8_Pin); break;
		case 3: Local_u8_PinReading = GetBit(PINC,Local_u8_Pin); break;
		case 4: Local_u8_PinReading = GetBit(PIND,Local_u8_Pin); break;
		default:                                                 break;
		
	}
	return Local_u8_PinReading;
}
