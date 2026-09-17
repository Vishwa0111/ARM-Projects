#include<lpc21xx.h>
void lcd_data(unsigned char data)
{
	unsigned int temp;
	IOCLR1=0XFE<<16;
	temp=(data&0xf0)<<16;
	IOSET1=temp;
	IOSET1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;
	
	IOCLR1=0XFE<<16;
	temp=(data&0x0F)<<20;
	IOSET1=temp;
	IOSET1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;
}
void lcd_cmd(unsigned char cmd)
{
	unsigned int temp;
	IOCLR1=0XFE<<16;
	temp=(cmd&0xf0)<<16;
	IOSET1=temp;
	IOCLR1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;
	
	IOCLR1=0XFE<<16;
	temp=(cmd&0x0F)<<20;
	IOSET1=temp;
	IOCLR1=1<<17;
	IOCLR1=1<<18;
	IOSET1=1<<19;
	delay_ms(2);
	IOCLR1=1<<19;
}
void lcd_init(void)
{
	IODIR1=0XFE<<16;
	PINSEL2|=0X0;
	lcd_cmd(0x02);
	lcd_cmd(0x28);
	lcd_cmd(0x0e);
	lcd_cmd(0x01);
}

void lcd_string(unsigned char *p)
{
	while(*p!=0)
	{
		lcd_data(*p);
		p++;	
	}
}
