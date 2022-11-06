/*
 * button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ASUS
 */
#include <button.h>
#include "main.h"
#include "display7SEG.h"

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int KeyReg0 = NORMAL_STATE;
int KeyReg1 = NORMAL_STATE;
int KeyReg2 = NORMAL_STATE;
int KeyReg3 = NORMAL_STATE;

int KeyReg4 = NORMAL_STATE;
int KeyReg5 = NORMAL_STATE;
int KeyReg6 = NORMAL_STATE;
int KeyReg7 = NORMAL_STATE;

int KeyReg8 = NORMAL_STATE;
int KeyReg9 = NORMAL_STATE;
int KeyReg10 = NORMAL_STATE;
int KeyReg11 = NORMAL_STATE;

//int TimerForKeyPress = 50;


void subKeyProcess(){
	//TODO
	button1_flag = 1;
}
void subKeyProcess1(){
	button2_flag = 1;
}
void subKeyProcess2(){
	button3_flag = 1;
}
void getKeyInput(){
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;

	KeyReg4 = KeyReg5;
	KeyReg5 = KeyReg6;

	KeyReg8 = KeyReg9;
	KeyReg9 = KeyReg10;

	KeyReg2 = HAL_GPIO_ReadPin(RESET_GPIO_Port, RESET_Pin);
	KeyReg6 = HAL_GPIO_ReadPin(INC_GPIO_Port, INC_Pin);
	KeyReg10 = HAL_GPIO_ReadPin(DEC_GPIO_Port, DEC_Pin);

	if(((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2))){
			if((KeyReg3 != KeyReg2)){
				KeyReg3 = KeyReg2;
				if(KeyReg2 == PRESSED_STATE){
					//TODO
					subKeyProcess();
				}
			}
		}

	if(((KeyReg4 == KeyReg5) && (KeyReg5 == KeyReg6))){
			if((KeyReg7 != KeyReg6)){
				KeyReg7 = KeyReg6;
				 if((KeyReg6 == PRESSED_STATE)){
					subKeyProcess1();
				}
			}
		}

	if(((KeyReg8 == KeyReg9) && (KeyReg9 == KeyReg10))){
			if((KeyReg11 != KeyReg10)){
				KeyReg11 = KeyReg10;
				if((KeyReg10 == PRESSED_STATE)){
					subKeyProcess2();
				}
			}
		}

}


