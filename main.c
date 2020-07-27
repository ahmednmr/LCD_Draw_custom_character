/*
 * main.c
 turning on and off LEDS on KIT
 */
#include<avr/io.h>
#include<util/delay.h>

#include "LCD.h"


int main()
{

	LCD_VidInit();

	LCD_vid_Save_in_CGRAM();

	LCD_vidGoTo(0,0);
	LCD_vidsendword("ahmed");

	LCD_vidGoTo(0,8);
	LCD_vidsendData(0);

	LCD_vidGoTo(0,12);
	LCD_vidsendData(4);
	LCD_vidsendData(5);
	LCD_vidsendData(6);
	LCD_vidsendData(7);


	LCD_vidGoTo(1,6);
	LCD_vidsendData(1);

	LCD_vidGoTo(1,8);
	LCD_vidsendData(2);

	LCD_vidGoTo(1,10);
	LCD_vidsendData(3);




while(1)
{


}


return 0;
}
