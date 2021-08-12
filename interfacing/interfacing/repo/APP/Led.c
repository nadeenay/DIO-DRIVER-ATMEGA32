
/*
 * Led.c
 *
 * Created: 8/11/2021 1:24:52 PM
 *  Author: Speed
 */ 
#include "../MCAL/DIO/DIO_types.h"
#include "../MCAL/DIO/DIO.h"
void LED()
{
	DIO_SetPortDiraction(PORTC_,OUTPUT);
	DIO_SetPortValue(PORTC_,0xFF);
}
