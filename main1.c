/*
 * main.c
 *
 *  Created on: Aug 11, 2018
 *      Author: moham
 */

#include "DIO_int.h"

u8 *Pu8PinValueCpy;
u8* Pu8PortValCpy;

void main (void)
{
while (1)
{
	DIO_u8SetPinDir(DIO_u8PORTA,DIO_u8PIN0,DIO_u8OUTPUT);
	DIO_u8SetPinVlaue(DIO_u8PORTA, DIO_u8PIN0 , DIO_u8PinVoltageH);
}

}



