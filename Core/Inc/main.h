/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
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
#include "stm32f0xx_hal.h"

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
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define B1_EXTI_IRQn EXTI4_15_IRQn
#define C1_5_Pin GPIO_PIN_14
#define C1_5_GPIO_Port GPIOC
#define C1_4_Pin GPIO_PIN_15
#define C1_4_GPIO_Port GPIOC
#define C1_3_Pin GPIO_PIN_0
#define C1_3_GPIO_Port GPIOF
#define C1_2_Pin GPIO_PIN_1
#define C1_2_GPIO_Port GPIOF
#define C1_1_Pin GPIO_PIN_2
#define C1_1_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define LD2_Pin GPIO_PIN_5
#define LD2_GPIO_Port GPIOA
#define C2_05_Pin GPIO_PIN_11
#define C2_05_GPIO_Port GPIOB
#define C2_05_EXTI_IRQn EXTI4_15_IRQn
#define C2_08_Pin GPIO_PIN_7
#define C2_08_GPIO_Port GPIOC
#define C2_08_EXTI_IRQn EXTI4_15_IRQn
#define C2_06_Pin GPIO_PIN_8
#define C2_06_GPIO_Port GPIOA
#define C2_06_EXTI_IRQn EXTI4_15_IRQn
#define C2_07_Pin GPIO_PIN_9
#define C2_07_GPIO_Port GPIOA
#define C2_07_EXTI_IRQn EXTI4_15_IRQn
#define C2_01_Pin GPIO_PIN_10
#define C2_01_GPIO_Port GPIOA
#define C2_01_EXTI_IRQn EXTI4_15_IRQn
#define C2_10_Pin GPIO_PIN_12
#define C2_10_GPIO_Port GPIOA
#define C2_10_EXTI_IRQn EXTI4_15_IRQn
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define C1_7_Pin GPIO_PIN_15
#define C1_7_GPIO_Port GPIOA
#define C2_02_Pin GPIO_PIN_3
#define C2_02_GPIO_Port GPIOB
#define C2_02_EXTI_IRQn EXTI2_3_IRQn
#define C2_04_Pin GPIO_PIN_4
#define C2_04_GPIO_Port GPIOB
#define C2_04_EXTI_IRQn EXTI4_15_IRQn
#define C2_03_Pin GPIO_PIN_5
#define C2_03_GPIO_Port GPIOB
#define C2_03_EXTI_IRQn EXTI4_15_IRQn
#define C2_09_Pin GPIO_PIN_6
#define C2_09_GPIO_Port GPIOB
#define C2_09_EXTI_IRQn EXTI4_15_IRQn
#define C1_6_Pin GPIO_PIN_7
#define C1_6_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
