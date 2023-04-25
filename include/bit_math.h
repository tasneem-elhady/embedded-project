#ifndef BIT_MATH_H
#define BIT_MATH_H
//*****************************************************************************
//
// set, clear, toggle, get bit
//
//*****************************************************************************
#define Set_Bit(Var,BitNo) Var |= (1 << BitNo)
#define Clr_Bit(Var,BitNo) Var &= (~(1 << BitNo))
#define Get_Bit(Var,BitNo) (Var >> BitNo) & 1
#define Toggle_Bit(Var,BitNo) Var ^= (1 << BitNo)

//*****************************************************************************
//
// pins
//
//*****************************************************************************

enum PORTA
{
	PA0 
	PA1
	PA2 
	PA3
	PA4 
	PA5
	PA6 
	PA7
}
enum PORTB
{
	PB0 
	PB1
	PB2 
	PB3
	PB4 
	PB5
	PB6 
	PB7
}
enum PORTC
{
	PC0 
	PC1
	PC2 
	PC3
	PC4 
	PC5
	PC6 
	PC7
}
enum PORTD
{
	PD0 
	PD1
	PD2 
	PD3
	PD4 
	PD5
	PD6 
	PD7
}
enum PORTE
{
	PE0 
	PE1
	PE2 
	PE3
	PE4 
}
enum PORTF
{
	SW1 
	RED_LED
	BLUE_LED
	GREEN_LED
	SW2 
}

#endif