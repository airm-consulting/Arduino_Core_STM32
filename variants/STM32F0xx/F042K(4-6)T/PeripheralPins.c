/*
 *******************************************************************************
 * Copyright (c) 2020, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
/*
 * Automatically generated from STM32F042K(4-6)Tx.xml
 * CubeMX DB release 6.0.120
 */
#if !defined(CUSTOM_PERIPHERAL_PINS)
#include "Arduino.h"
#include "PeripheralPins.h"

/* =====
 * Notes:
 * - The pins mentioned Px_y_ALTz are alternative possibilities which use other
 *   HW peripheral instances. You can use them the same way as any other "normal"
 *   pin (i.e. analogWrite(PA7_ALT1, 128);).
 *
 * - Commented lines are alternative possibilities which are not used per default.
 *   If you change them, you will have to know what you do
 * =====
 */

//*** ADC ***

#ifdef HAL_ADC_MODULE_ENABLED
WEAK const PinMap PinMap_ADC[] = {
  {PA_0, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 0, 0)}, // ADC_IN0
  {PA_1, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC_IN1
  {PA_2, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC_IN2
  {PA_3, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC_IN3
  {PA_4, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC_IN4
  {PA_5, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC_IN5
  {PA_6, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC_IN6
  {PA_7, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC_IN7
  {PB_0, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC_IN8
  {PB_1, ADC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC_IN9
  {NC,   NP,   0}
};
#endif

//*** No DAC ***

//*** I2C ***

#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SDA[] = {
  {PA_10, I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PA_12, I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF5_I2C1)},
  {PB_7,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
  {PF_0,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
  {NC,    NP,   0}
};
#endif

#ifdef HAL_I2C_MODULE_ENABLED
WEAK const PinMap PinMap_I2C_SCL[] = {
  {PA_9,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
  {PA_11, I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF5_I2C1)},
  {PB_6,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
  {PB_8,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
  {PF_1,  I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
  {NC,    NP,   0}
};
#endif

//*** No I3C ***

//*** TIM ***

#ifdef HAL_TIM_MODULE_ENABLED
WEAK const PinMap PinMap_TIM[] = {
  {PA_0,      TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 1, 0)}, // TIM2_CH1
  {PA_1,      TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 2, 0)}, // TIM2_CH2
  {PA_2,      TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 3, 0)}, // TIM2_CH3
  {PA_3,      TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 4, 0)}, // TIM2_CH4
  {PA_4,      TIM14, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM14, 1, 0)}, // TIM14_CH1
  {PA_5,      TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 1, 0)}, // TIM2_CH1
  {PA_6,      TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3, 1, 0)}, // TIM3_CH1
  {PA_6_ALT1, TIM16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM16, 1, 0)}, // TIM16_CH1
  {PA_7,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 1, 1)}, // TIM1_CH1N
  {PA_7_ALT1, TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3, 2, 0)}, // TIM3_CH2
  {PA_7_ALT2, TIM14, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM14, 1, 0)}, // TIM14_CH1
  {PA_7_ALT3, TIM17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM17, 1, 0)}, // TIM17_CH1
  {PA_8,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 1, 0)}, // TIM1_CH1
  {PA_9,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 2, 0)}, // TIM1_CH2
  {PA_10,     TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 3, 0)}, // TIM1_CH3
  {PA_11,     TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 4, 0)}, // TIM1_CH4
  {PA_15,     TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 1, 0)}, // TIM2_CH1
  {PB_0,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 2, 1)}, // TIM1_CH2N
  {PB_0_ALT1, TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3, 3, 0)}, // TIM3_CH3
  {PB_1,      TIM1,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM1, 3, 1)}, // TIM1_CH3N
  {PB_1_ALT1, TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3, 4, 0)}, // TIM3_CH4
  {PB_1_ALT2, TIM14, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM14, 1, 0)}, // TIM14_CH1
  {PB_3,      TIM2,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 2, 0)}, // TIM2_CH2
  {PB_4,      TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3, 1, 0)}, // TIM3_CH1
  {PB_5,      TIM3,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_TIM3, 2, 0)}, // TIM3_CH2
  {PB_6,      TIM16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM16, 1, 1)}, // TIM16_CH1N
  {PB_7,      TIM17, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM17, 1, 1)}, // TIM17_CH1N
  {PB_8,      TIM16, STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM16, 1, 0)}, // TIM16_CH1
  {NC,        NP,    0}
};
#endif

//*** UART ***

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_TX[] = {
  {PA_2,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
  {PA_9,  USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART1)},
  {PA_14, USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
  {PB_6,  USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_USART1)},
  {NC,    NP,     0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RX[] = {
  {PA_3,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
  {PA_10, USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART1)},
  {PA_15, USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
  {PB_7,  USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_USART1)},
  {NC,    NP,     0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_RTS[] = {
  {PA_1,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
  {PA_12, USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART1)},
  {NC,    NP,     0}
};
#endif

#ifdef HAL_UART_MODULE_ENABLED
WEAK const PinMap PinMap_UART_CTS[] = {
  {PA_0,  USART2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART2)},
  {PA_11, USART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF1_USART1)},
  {NC,    NP,     0}
};
#endif

//*** SPI ***

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MOSI[] = {
  {PA_7, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {PB_5, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {NC,   NP,   0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_MISO[] = {
  {PA_6, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {PB_4, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {NC,   NP,   0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SCLK[] = {
  {PA_5, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {PB_3, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {NC,   NP,   0}
};
#endif

#ifdef HAL_SPI_MODULE_ENABLED
WEAK const PinMap PinMap_SPI_SSEL[] = {
  {PA_4,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {PA_15, SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
  {NC,    NP,   0}
};
#endif

//*** CAN ***

#if defined(HAL_CAN_MODULE_ENABLED) || defined(HAL_CAN_LEGACY_MODULE_ENABLED)
WEAK const PinMap PinMap_CAN_RD[] = {
  {PA_11, CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF4_CAN)},
  {PB_8,  CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF4_CAN)},
  {NC,    NP,   0}
};
#endif

#if defined(HAL_CAN_MODULE_ENABLED) || defined(HAL_CAN_LEGACY_MODULE_ENABLED)
WEAK const PinMap PinMap_CAN_TD[] = {
  {PA_12, CAN1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_NOPULL, GPIO_AF4_CAN)},
  {NC,    NP,   0}
};
#endif

//*** No ETHERNET ***

//*** No QUADSPI ***

//*** USB ***

#if defined(HAL_PCD_MODULE_ENABLED) || defined(HAL_HCD_MODULE_ENABLED)
WEAK const PinMap PinMap_USB[] = {
  {PA_4,  USB, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_USB)}, // USB_NOE
  {PA_11, USB, STM_PIN_DATA(STM_MODE_INPUT, GPIO_NOPULL, GPIO_AF_NONE)}, // USB_DM
  {PA_12, USB, STM_PIN_DATA(STM_MODE_INPUT, GPIO_NOPULL, GPIO_AF_NONE)}, // USB_DP
  {PA_13, USB, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_USB)}, // USB_NOE
  {PA_15, USB, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_USB)}, // USB_NOE
  {NC,    NP,  0}
};
#endif

//*** No SD ***

#endif /* !CUSTOM_PERIPHERAL_PINS */
