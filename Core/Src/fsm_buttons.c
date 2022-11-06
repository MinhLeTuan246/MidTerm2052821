/*
 * fsm_buttons.c
 *
 *  Created on: Nov 5, 2022
 *      Author: ASUS
 */
#include "fsm_buttons.h"
#include "software_timer.h"
#define DEFAULT 5
int i = DEFAULT;

void fsm_buttons_run(){
	switch(status){
	case INIT:
		display7SEG(DEFAULT);
		if(timer1_flag==1){
			status = SIMPLE;
			setTimer1(1000);
		}
		break;
	case SIMPLE:
		if(button1_flag==1){
			button1_flag=0;
			//TODO
			i=0;
			display7SEG(0);
			clearTimer1();
			setTimer1(10000);
			status = SIMPLE;
		}
		else if(button2_flag==1){
			button2_flag=0;
			//TODO
			i++;
			if(i>9){
				i=0;
			}

			display7SEG(i);
			clearTimer1();
			setTimer1(10000);
			status = SIMPLE;
		}
		else if(button3_flag==1){
			button3_flag=0;
			//TODO
			i--;
			if(i<0){
				i=9;
			}
			display7SEG(i);
			clearTimer1();
			setTimer1(10000);
			status = SIMPLE;
			}
		if(timer1_flag==1){
			status=TIMEOUT;
		}

		break;
	case LONG:

		break;
	case TIMEOUT:

		while(i>=0){
			if(timer1_flag==1){
				display7SEG(--i);
				setTimer1(1000);
			}
			if(button2_flag==1){
				i++;
				if(i>9){
				  i=0;
				}
				display7SEG(i);
				clearTimer1();
				setTimer1(10000);
				status = SIMPLE;
			}
			else if(button3_flag==1){
				i--;
				if(i<0){
				  i=9;
				}
				display7SEG(i);
				clearTimer1();
				setTimer1(10000);
				status = SIMPLE;
			}
			if(i<=1)break;
		}
		display7SEG(0);
		status = SIMPLE;

		break;
	default:
		break;
	}
}
