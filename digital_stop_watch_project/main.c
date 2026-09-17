#include<lpc21xx.h>
#include"header.h"
#define start ((IOPIN0>>0)&1) //start timer
#define stop ((IOPIN0>>1)&1)  //stop timer
#define reset ((IOPIN0>>2)&1) //reset timer
int main()
{
	unsigned int min,sec;
	lcd_init();
	while(1)
	{
		lcd_cmd(0x80);
		lcd_string("00.00");
		if(start == 0)
		{
		while(start == 0);
		//IODIR1=1<<24;
		//IOSET1=1<<24;
		for(min=0;min<60;min++)
		{
			for(sec=0;sec<60;sec++)
			{
				lcd_cmd(0x80);
				lcd_data(min/10+48);
				lcd_data(min%10+48);
				lcd_data(':');
				lcd_data(sec/10+48);
				lcd_data(sec%10+48);
				delay_ms(200);
				lcd_cmd(0x01);
				
				if(stop==0)
				{
				while(stop==0);
			//	IODIR1=1<<25;
			//  IOSET1=1<<25;
				lcd_cmd(0x80);
				lcd_data(min/10+48);
				lcd_data(min%10+48);
				lcd_data(':');
				lcd_data(sec/10+48);
				lcd_data(sec%10+48);
				}	
		    if(reset == 0)
		   	{
				while(reset==0);
			 // IODIR1=1<<26;
			 //	IOSET1=1<<26;
				sec=0;
				min=0;
		  	}
			}
		}
	}
}
}
