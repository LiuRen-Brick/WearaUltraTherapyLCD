/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define CT_INT_Pin GPIO_PIN_3
#define CT_INT_GPIO_Port GPIOE
#define CT_RST_Pin GPIO_PIN_4
#define CT_RST_GPIO_Port GPIOE
#define Beep_Pin GPIO_PIN_6
#define Beep_GPIO_Port GPIOE
#define WAVE_A_EN_Pin GPIO_PIN_7
#define WAVE_A_EN_GPIO_Port GPIOF
#define LCD_RESET_Pin GPIO_PIN_9
#define LCD_RESET_GPIO_Port GPIOF
#define PWM_MOTOR_A_Pin GPIO_PIN_1
#define PWM_MOTOR_A_GPIO_Port GPIOA
#define PWM_MOTOR_B_Pin GPIO_PIN_2
#define PWM_MOTOR_B_GPIO_Port GPIOA
#define MOTOR_GATE_Pin GPIO_PIN_7
#define MOTOR_GATE_GPIO_Port GPIOA
#define VBAT_ADC_Pin GPIO_PIN_5
#define VBAT_ADC_GPIO_Port GPIOC
#define BOOT1_Pin GPIO_PIN_2
#define BOOT1_GPIO_Port GPIOB
#define LCD_SPI_CS_Pin GPIO_PIN_12
#define LCD_SPI_CS_GPIO_Port GPIOB
#define LCD_SPI_SCL_Pin GPIO_PIN_13
#define LCD_SPI_SCL_GPIO_Port GPIOB
#define LCD_SPI_SDA_Pin GPIO_PIN_15
#define LCD_SPI_SDA_GPIO_Port GPIOB
#define KEY_CONTROL_Pin GPIO_PIN_12
#define KEY_CONTROL_GPIO_Port GPIOD
#define CHARGE_STATE_Pin GPIO_PIN_13
#define CHARGE_STATE_GPIO_Port GPIOD
#define CHARGE_STATE_EXTI_IRQn EXTI15_10_IRQn
#define CONTROL_CLOSE_Pin GPIO_PIN_9
#define CONTROL_CLOSE_GPIO_Port GPIOC
#define MPDCDC_EN_Pin GPIO_PIN_8
#define MPDCDC_EN_GPIO_Port GPIOA
#define WAVE_B_EN_Pin GPIO_PIN_15
#define WAVE_B_EN_GPIO_Port GPIOA
#define A_SCLK_Pin GPIO_PIN_10
#define A_SCLK_GPIO_Port GPIOC
#define A_SDATA_Pin GPIO_PIN_11
#define A_SDATA_GPIO_Port GPIOC
#define A_FSYNC_Pin GPIO_PIN_12
#define A_FSYNC_GPIO_Port GPIOC
#define B_SCLK_Pin GPIO_PIN_6
#define B_SCLK_GPIO_Port GPIOD
#define B_SDATA_Pin GPIO_PIN_7
#define B_SDATA_GPIO_Port GPIOD
#define B_FSYNC_Pin GPIO_PIN_9
#define B_FSYNC_GPIO_Port GPIOG
#define LTDCDC_EN_Pin GPIO_PIN_3
#define LTDCDC_EN_GPIO_Port GPIOB
#define PWM_WAVE_B_EN_Pin GPIO_PIN_4
#define PWM_WAVE_B_EN_GPIO_Port GPIOB
#define PWM_WAVE_A_EN_Pin GPIO_PIN_5
#define PWM_WAVE_A_EN_GPIO_Port GPIOB
#define CT_SCK_Pin GPIO_PIN_6
#define CT_SCK_GPIO_Port GPIOB
#define CT_SDA_Pin GPIO_PIN_7
#define CT_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
