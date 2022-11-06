/*
 * button.h
 *
 *  Created on: Nov 5, 2022
 *      Author: ASUS
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int button1_flag;
extern int button2_flag;
extern int button3_flag;

void getKeyInput();



#endif /* INC_BUTTON_H_ */
