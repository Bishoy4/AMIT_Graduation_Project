/*
 * UART_Driver_05.c
 *
 * Created: 27/11/2020 06:21:11 م
 * Author : Ali
 */ 


#include "SPI.h"
#include "UART.h"



int main(void)
{
   UART_Init();
   SPI_Master_Init();
   SPI_Master_Init_Trans();
  while (1)
  {
	  if (UART_Rx()=='1')
	  {
		  SPI_Write('1');
	  }
	  if (UART_Rx()=='2')
	  {
		  SPI_Write('2');
	  }
	  if (UART_Rx()=='3')
	  {
		  SPI_Write('3');
	  }
	  if (UART_Rx()=='+')
	  {
		  SPI_Write('+');
	  }
	  if (UART_Rx()=='-')
	  {
		  SPI_Write('-');
	  }
  }
}

