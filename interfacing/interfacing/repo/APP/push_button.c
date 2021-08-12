/*
 * CFile1.c
 *
 * Created: 8/11/2021 4:02:13 PM
 *  Author: Speed
 */ 
#include "../MCAL/DIO/DIO_types.h"
#include "../MCAL/DIO/DIO.h"
void PUSH_BUTTON()
{
	DIO_SetPinDirection(PORTA_,PIN0,INPUT); //FOR THE PUSH BUTTON
	DIO_SetPinDirection(PORTA_,PIN1,OUTPUT); //FOR THE LED
	if(DIO_GetPinValue(PORTA_,PIN0)==LOW)
	DIO_SetPinValue(PORTA_,PIN1,LOW); //FOR THE PUSH BUTTON
	else if(DIO_GetPinValue(PORTA_,PIN0)==HIGH)
	DIO_SetPinValue(PORTA_,PIN1,HIGH); //FOR THE LED
}
