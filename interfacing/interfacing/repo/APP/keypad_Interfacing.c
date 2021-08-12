/*
 * keypad_Interfacing.c
 *
 * Created: 8/11/2021 6:44:53 PM
 *  Author: Speed
 */ 
#include "../MCAL/DIO/DIO_types.h"
#include "../MCAL/DIO/DIO.h"

const UC keypad[4][3]={'1','2','3'},
	            {'4','5','6'},
		        {'7','8','9'},
	 	     	{'A','B','C'}; // * 0 #
			
		
void keypad()
{
	
	
}
void GetKeyPressed()
{
	UC col;
	DIO_SetPortDiraction(PORTC_,OUTPUT); //FOR THE PUSH BUTTON
	//GET THE KEY PRESSED
	DIO_SetPortValue(PORTC_,0xF0) //the first half should be grounded the second one should be F
	do
	{
		col=DIO_GetPortValue(PORTC_)&0xF0;
		
	}while(col==0x0f)
	//then there is a key pressed
	UC i,R_N=4=4;
	for( i=0;i<R_N;i++)
	{
		DIO_SetPinValue(PORTC_,PIN0,HIGH);
		if(col&0x)
		
	}
	
	
}
