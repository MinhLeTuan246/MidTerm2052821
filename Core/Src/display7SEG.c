/*
 * display7SEG.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ASUS
 */
#include "display7SEG.h"

void display7SEG(int num){
	switch (num){
	case 0:
		          HAL_GPIO_WritePin(GPIOB, a_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, b_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, c_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, d_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, e_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, f_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, g_Pin, 1);
		          break;
	case 1:
		          HAL_GPIO_WritePin(GPIOB, a_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, b_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, c_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, d_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, e_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, f_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, g_Pin, 1);
		          break;
	case 2:
		          HAL_GPIO_WritePin(GPIOB, a_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, b_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, c_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, d_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, e_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, f_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, g_Pin, 0);
		          break;
	case 3:
		          HAL_GPIO_WritePin(GPIOB, a_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, b_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, c_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, d_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, e_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, f_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, g_Pin, 0);
		          break;
	case 4:
		          HAL_GPIO_WritePin(GPIOB, a_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, b_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, c_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, d_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, e_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, f_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, g_Pin, 0);
		          break;
	case 5:
		          HAL_GPIO_WritePin(GPIOB, a_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, b_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, c_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, d_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, e_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, f_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, g_Pin, 0);
		          break;
	case 6:
		          HAL_GPIO_WritePin(GPIOB, a_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, b_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, c_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, d_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, e_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, f_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, g_Pin, 0);
		          break;
	case 7:
		          HAL_GPIO_WritePin(GPIOB, a_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, b_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, c_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, d_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, e_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, f_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, g_Pin, 1);
		          break;
	case 8:
		          HAL_GPIO_WritePin(GPIOB, a_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, b_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, c_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, d_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, e_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, f_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, g_Pin, 0);
		          break;
	case 9:
		          HAL_GPIO_WritePin(GPIOB, a_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, b_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, c_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, d_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, e_Pin, 1);
			  	  HAL_GPIO_WritePin(GPIOB, f_Pin, 0);
			  	  HAL_GPIO_WritePin(GPIOB, g_Pin, 0);
		          break;
	default:
		          HAL_GPIO_WritePin(GPIOB, a_Pin, 1);
				  HAL_GPIO_WritePin(GPIOB, b_Pin, 1);
				  HAL_GPIO_WritePin(GPIOB, c_Pin, 1);
				  HAL_GPIO_WritePin(GPIOB, d_Pin, 1);
				  HAL_GPIO_WritePin(GPIOB, e_Pin, 1);
				  HAL_GPIO_WritePin(GPIOB, f_Pin, 1);
				  HAL_GPIO_WritePin(GPIOB, g_Pin, 1);
		          break;
	}
}

