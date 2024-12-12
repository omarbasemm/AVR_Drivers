/*
 * BitMath.h
 * For Genaral & Student Use only
 * Created: 12/11/2024 10:20:14 PM
 *  Author: Omar Basem Abdulsalam
 */


#ifndef BITMATH_H_
#define BITMATH_H_
/****************************************************************************_Macros_*************************************************************************/

#define SetBit(Reg,Bit)      Reg |=  (1 << Bit)
#define ClrBit(Reg,Bit)      Reg &= ~(1 << Bit)
#define TogBit(Reg,Bit)      Reg ^=  (1 << Bit)
#define GetBit(Reg,Bit)      1 & (Reg >> Bit)


#endif 