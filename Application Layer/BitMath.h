/*
 * BitMath.h
 * For Genaral & Student Use only
 * Created: 12/11/2024 10:20:14 PM
 *  Author: Omar Basem Abdulsalam
 */


#ifndef BITMATH_H_
#define BITMATH_H_
/****************************************************************************_Macros_*************************************************************************/

#define SetBit(reg,bit) Reg |= (1 << Bit)
#define ClrBit(reg,bit) Reg &=~(1 << Bit)
#define TogBit(reg,bit) Reg ^= (1 << Bit)
#define GetBit(reg,bit)  1  & (Reg >> Bit)


#endif 