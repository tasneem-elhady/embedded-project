void gps_init(void)
{
	Set_Bit(SYSCTL_RCGCUART_R, UART1);
	Set_Bit(SYSCTL_RCGCGPIO_R, UART1_GPIO);
	while(!Get_Bit(SYSCTL_PRGPIO_R, UART1_GPIO));
	
	UART1_CTL_R = 0;
	
	f64 I_FBRD = (16000000 / 16.0) / BR;
	
	UART1_IBRD_R = (u16)I_FBRD;
	UART1_FBRD_R = (u16)((I_FBRD - ((u16)I_FBRD))*64 +0.5);
	
	UART1_LCRH_R = 0x60;    // 8-bit, no parity, 1-stop bit, no FIFO 
	UART1_CTL_R = 0x301;    // enable UART1, TXE, RXE 
	UART1_CC_R = 0; 		    // use system clock 
	
	Set_Bit(GPIO_PORTB_DEN_R, PB0);
	Set_Bit(GPIO_PORTB_DEN_R, PB1);
	Set_Bit(GPIO_PORTB_AFSEL_R, PB0);
	Set_Bit(GPIO_PORTB_AFSEL_R, PB1);
	Set_H_Byte(GPIO_PORTB_PCTL_R, PB0, 1);
	Set_H_Byte(GPIO_PORTB_PCTL_R, PB1, 1);
}