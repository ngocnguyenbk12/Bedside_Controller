#include "mb.h"
#include "stm32f7xx_hal.h"
#include "stdio.h"
#include "stm32f7xx_it.h"
#include "stdbool.h"


#define TIMEOUT (10000)

TIM_HandleTypeDef htim2;
UART_HandleTypeDef huart6;


uint32_t timeout_counter = 0;
bool timeout_flag = TRUE;





void
HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{

	//run timer

	if(huart->Instance== &huart6)
		{
			HAL_TIM_Base_Start_IT(&htim2);

		/*
			if((USART_RX_STA&0x8000)==0)//����δ���
			{
				if(USART_RX_STA&0x4000)//���յ���0x0d
				{
					if(aRxBuffer[0]!=0x0a)USART_RX_STA=0;//���մ���,���¿�ʼ
					else USART_RX_STA|=0x8000;	//���������
				}
				else //��û�յ�0X0D
				{
					if(aRxBuffer[0]==0x0d)USART_RX_STA|=0x4000;
					else
					{
						USART_RX_BUF[USART_RX_STA&0X3FFF]=aRxBuffer[0] ;
						USART_RX_STA++;
						if(USART_RX_STA>(USART_REC_LEN-1))USART_RX_STA=0;//�������ݴ���,���¿�ʼ����
					}
				}
			}
			*/

		}
}

void
HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{

	if(htim->Instance == htim2.Instance)
	 {
	  timeout_counter++;
	  if(timeout_counter > TIMEOUT)
	  {
		  HAL_TIM_Base_Stop(&htim2);
		  timeout_flag = FALSE ;
	  }

	 }
}
