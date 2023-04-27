#ifndef TM4C123_H
#define TM4C123_H

//*****************************************************************************
//
// System Control registers 
//
//*****************************************************************************

#define SYSCTL_RCGCGPIO_R       (*((volatile unsigned long *)0x400FE608))
#define SYSCTL_RCGCUART_R       (*((volatile unsigned long *)0x400FE618))
#define SYSCTL_PRGPIO_R         (*((volatile unsigned long *)0x400FEA08))
#define SYSCTL_PRUART_R         (*((volatile unsigned long *)0x400FEA18))

//*****************************************************************************
//
// GPIO registers (PORTA)
//
//*****************************************************************************
#define GPIO_PORTA_DATA_BITS_R  ((volatile unsigned long *)0x40004000)
#define GPIO_PORTA_DATA_R       (*((volatile unsigned long *)0x400043FC))
#define GPIO_PORTA_DIR_R        (*((volatile unsigned long *)0x40004400))
#define GPIO_PORTA_IS_R         (*((volatile unsigned long *)0x40004404))
#define GPIO_PORTA_IBE_R        (*((volatile unsigned long *)0x40004408))
#define GPIO_PORTA_IEV_R        (*((volatile unsigned long *)0x4000440C))
#define GPIO_PORTA_IM_R         (*((volatile unsigned long *)0x40004410))
#define GPIO_PORTA_RIS_R        (*((volatile unsigned long *)0x40004414))
#define GPIO_PORTA_MIS_R        (*((volatile unsigned long *)0x40004418))
#define GPIO_PORTA_ICR_R        (*((volatile unsigned long *)0x4000441C))
#define GPIO_PORTA_AFSEL_R      (*((volatile unsigned long *)0x40004420))
#define GPIO_PORTA_DR2R_R       (*((volatile unsigned long *)0x40004500))
#define GPIO_PORTA_DR4R_R       (*((volatile unsigned long *)0x40004504))
#define GPIO_PORTA_DR8R_R       (*((volatile unsigned long *)0x40004508))
#define GPIO_PORTA_ODR_R        (*((volatile unsigned long *)0x4000450C))
#define GPIO_PORTA_PUR_R        (*((volatile unsigned long *)0x40004510))
#define GPIO_PORTA_PDR_R        (*((volatile unsigned long *)0x40004514))
#define GPIO_PORTA_SLR_R        (*((volatile unsigned long *)0x40004518))
#define GPIO_PORTA_DEN_R        (*((volatile unsigned long *)0x4000451C))
#define GPIO_PORTA_LOCK_R       (*((volatile unsigned long *)0x40004520))
#define GPIO_PORTA_CR_R         (*((volatile unsigned long *)0x40004524))
#define GPIO_PORTA_AMSEL_R      (*((volatile unsigned long *)0x40004528))
#define GPIO_PORTA_PCTL_R       (*((volatile unsigned long *)0x4000452C))
#define GPIO_PORTA_ADCCTL_R     (*((volatile unsigned long *)0x40004530))
#define GPIO_PORTA_DMACTL_R     (*((volatile unsigned long *)0x40004534))

//*****************************************************************************
//
// GPIO registers (PORTB)
//
//*****************************************************************************
#define GPIO_PORTB_DATA_BITS_R  ((volatile unsigned long *)0x40005000)
#define GPIO_PORTB_DATA_R       (*((volatile unsigned long *)0x400053FC))
#define GPIO_PORTB_DIR_R        (*((volatile unsigned long *)0x40005400))
#define GPIO_PORTB_IS_R         (*((volatile unsigned long *)0x40005404))
#define GPIO_PORTB_IBE_R        (*((volatile unsigned long *)0x40005408))
#define GPIO_PORTB_IEV_R        (*((volatile unsigned long *)0x4000540C))
#define GPIO_PORTB_IM_R         (*((volatile unsigned long *)0x40005410))
#define GPIO_PORTB_RIS_R        (*((volatile unsigned long *)0x40005414))
#define GPIO_PORTB_MIS_R        (*((volatile unsigned long *)0x40005418))
#define GPIO_PORTB_ICR_R        (*((volatile unsigned long *)0x4000541C))
#define GPIO_PORTB_AFSEL_R      (*((volatile unsigned long *)0x40005420))
#define GPIO_PORTB_DR2R_R       (*((volatile unsigned long *)0x40005500))
#define GPIO_PORTB_DR4R_R       (*((volatile unsigned long *)0x40005504))
#define GPIO_PORTB_DR8R_R       (*((volatile unsigned long *)0x40005508))
#define GPIO_PORTB_ODR_R        (*((volatile unsigned long *)0x4000550C))
#define GPIO_PORTB_PUR_R        (*((volatile unsigned long *)0x40005510))
#define GPIO_PORTB_PDR_R        (*((volatile unsigned long *)0x40005514))
#define GPIO_PORTB_SLR_R        (*((volatile unsigned long *)0x40005518))
#define GPIO_PORTB_DEN_R        (*((volatile unsigned long *)0x4000551C))
#define GPIO_PORTB_LOCK_R       (*((volatile unsigned long *)0x40005520))
#define GPIO_PORTB_CR_R         (*((volatile unsigned long *)0x40005524))
#define GPIO_PORTB_AMSEL_R      (*((volatile unsigned long *)0x40005528))
#define GPIO_PORTB_PCTL_R       (*((volatile unsigned long *)0x4000552C))
#define GPIO_PORTB_ADCCTL_R     (*((volatile unsigned long *)0x40005530))
#define GPIO_PORTB_DMACTL_R     (*((volatile unsigned long *)0x40005534))

//*****************************************************************************
//
// GPIO registers (PORTC)
//
//*****************************************************************************
#define GPIO_PORTC_DATA_BITS_R  ((volatile unsigned long *)0x40006000)
#define GPIO_PORTC_DATA_R       (*((volatile unsigned long *)0x400063FC))
#define GPIO_PORTC_DIR_R        (*((volatile unsigned long *)0x40006400))
#define GPIO_PORTC_IS_R         (*((volatile unsigned long *)0x40006404))
#define GPIO_PORTC_IBE_R        (*((volatile unsigned long *)0x40006408))
#define GPIO_PORTC_IEV_R        (*((volatile unsigned long *)0x4000640C))
#define GPIO_PORTC_IM_R         (*((volatile unsigned long *)0x40006410))
#define GPIO_PORTC_RIS_R        (*((volatile unsigned long *)0x40006414))
#define GPIO_PORTC_MIS_R        (*((volatile unsigned long *)0x40006418))
#define GPIO_PORTC_ICR_R        (*((volatile unsigned long *)0x4000641C))
#define GPIO_PORTC_AFSEL_R      (*((volatile unsigned long *)0x40006420))
#define GPIO_PORTC_DR2R_R       (*((volatile unsigned long *)0x40006500))
#define GPIO_PORTC_DR4R_R       (*((volatile unsigned long *)0x40006504))
#define GPIO_PORTC_DR8R_R       (*((volatile unsigned long *)0x40006508))
#define GPIO_PORTC_ODR_R        (*((volatile unsigned long *)0x4000650C))
#define GPIO_PORTC_PUR_R        (*((volatile unsigned long *)0x40006510))
#define GPIO_PORTC_PDR_R        (*((volatile unsigned long *)0x40006514))
#define GPIO_PORTC_SLR_R        (*((volatile unsigned long *)0x40006518))
#define GPIO_PORTC_DEN_R        (*((volatile unsigned long *)0x4000651C))
#define GPIO_PORTC_LOCK_R       (*((volatile unsigned long *)0x40006520))
#define GPIO_PORTC_CR_R         (*((volatile unsigned long *)0x40006524))
#define GPIO_PORTC_AMSEL_R      (*((volatile unsigned long *)0x40006528))
#define GPIO_PORTC_PCTL_R       (*((volatile unsigned long *)0x4000652C))
#define GPIO_PORTC_ADCCTL_R     (*((volatile unsigned long *)0x40006530))
#define GPIO_PORTC_DMACTL_R     (*((volatile unsigned long *)0x40006534))

//*****************************************************************************
//
// GPIO registers (PORTD)
//
//*****************************************************************************
#define GPIO_PORTD_DATA_BITS_R  ((volatile unsigned long *)0x40007000)
#define GPIO_PORTD_DATA_R       (*((volatile unsigned long *)0x400073FC))
#define GPIO_PORTD_DIR_R        (*((volatile unsigned long *)0x40007400))
#define GPIO_PORTD_IS_R         (*((volatile unsigned long *)0x40007404))
#define GPIO_PORTD_IBE_R        (*((volatile unsigned long *)0x40007408))
#define GPIO_PORTD_IEV_R        (*((volatile unsigned long *)0x4000740C))
#define GPIO_PORTD_IM_R         (*((volatile unsigned long *)0x40007410))
#define GPIO_PORTD_RIS_R        (*((volatile unsigned long *)0x40007414))
#define GPIO_PORTD_MIS_R        (*((volatile unsigned long *)0x40007418))
#define GPIO_PORTD_ICR_R        (*((volatile unsigned long *)0x4000741C))
#define GPIO_PORTD_AFSEL_R      (*((volatile unsigned long *)0x40007420))
#define GPIO_PORTD_DR2R_R       (*((volatile unsigned long *)0x40007500))
#define GPIO_PORTD_DR4R_R       (*((volatile unsigned long *)0x40007504))
#define GPIO_PORTD_DR8R_R       (*((volatile unsigned long *)0x40007508))
#define GPIO_PORTD_ODR_R        (*((volatile unsigned long *)0x4000750C))
#define GPIO_PORTD_PUR_R        (*((volatile unsigned long *)0x40007510))
#define GPIO_PORTD_PDR_R        (*((volatile unsigned long *)0x40007514))
#define GPIO_PORTD_SLR_R        (*((volatile unsigned long *)0x40007518))
#define GPIO_PORTD_DEN_R        (*((volatile unsigned long *)0x4000751C))
#define GPIO_PORTD_LOCK_R       (*((volatile unsigned long *)0x40007520))
#define GPIO_PORTD_CR_R         (*((volatile unsigned long *)0x40007524))
#define GPIO_PORTD_AMSEL_R      (*((volatile unsigned long *)0x40007528))
#define GPIO_PORTD_PCTL_R       (*((volatile unsigned long *)0x4000752C))
#define GPIO_PORTD_ADCCTL_R     (*((volatile unsigned long *)0x40007530))
#define GPIO_PORTD_DMACTL_R     (*((volatile unsigned long *)0x40007534))

//*****************************************************************************
//
// GPIO registers (PORTE)
//
//*****************************************************************************
#define GPIO_PORTE_DATA_BITS_R  ((volatile unsigned long *)0x40024000)
#define GPIO_PORTE_DATA_R       (*((volatile unsigned long *)0x400243FC))
#define GPIO_PORTE_DIR_R        (*((volatile unsigned long *)0x40024400))
#define GPIO_PORTE_IS_R         (*((volatile unsigned long *)0x40024404))
#define GPIO_PORTE_IBE_R        (*((volatile unsigned long *)0x40024408))
#define GPIO_PORTE_IEV_R        (*((volatile unsigned long *)0x4002440C))
#define GPIO_PORTE_IM_R         (*((volatile unsigned long *)0x40024410))
#define GPIO_PORTE_RIS_R        (*((volatile unsigned long *)0x40024414))
#define GPIO_PORTE_MIS_R        (*((volatile unsigned long *)0x40024418))
#define GPIO_PORTE_ICR_R        (*((volatile unsigned long *)0x4002441C))
#define GPIO_PORTE_AFSEL_R      (*((volatile unsigned long *)0x40024420))
#define GPIO_PORTE_DR2R_R       (*((volatile unsigned long *)0x40024500))
#define GPIO_PORTE_DR4R_R       (*((volatile unsigned long *)0x40024504))
#define GPIO_PORTE_DR8R_R       (*((volatile unsigned long *)0x40024508))
#define GPIO_PORTE_ODR_R        (*((volatile unsigned long *)0x4002450C))
#define GPIO_PORTE_PUR_R        (*((volatile unsigned long *)0x40024510))
#define GPIO_PORTE_PDR_R        (*((volatile unsigned long *)0x40024514))
#define GPIO_PORTE_SLR_R        (*((volatile unsigned long *)0x40024518))
#define GPIO_PORTE_DEN_R        (*((volatile unsigned long *)0x4002451C))
#define GPIO_PORTE_LOCK_R       (*((volatile unsigned long *)0x40024520))
#define GPIO_PORTE_CR_R         (*((volatile unsigned long *)0x40024524))
#define GPIO_PORTE_AMSEL_R      (*((volatile unsigned long *)0x40024528))
#define GPIO_PORTE_PCTL_R       (*((volatile unsigned long *)0x4002452C))
#define GPIO_PORTE_ADCCTL_R     (*((volatile unsigned long *)0x40024530))
#define GPIO_PORTE_DMACTL_R     (*((volatile unsigned long *)0x40024534))

//*****************************************************************************
//
// GPIO registers (PORTF)
//
//*****************************************************************************
#define GPIO_PORTF_DATA_BITS_R  ((volatile unsigned long *)0x40025000)
#define GPIO_PORTF_DATA_R       (*((volatile unsigned long *)0x400253FC))
#define GPIO_PORTF_DIR_R        (*((volatile unsigned long *)0x40025400))
#define GPIO_PORTF_IS_R         (*((volatile unsigned long *)0x40025404))
#define GPIO_PORTF_IBE_R        (*((volatile unsigned long *)0x40025408))
#define GPIO_PORTF_IEV_R        (*((volatile unsigned long *)0x4002540C))
#define GPIO_PORTF_IM_R         (*((volatile unsigned long *)0x40025410))
#define GPIO_PORTF_RIS_R        (*((volatile unsigned long *)0x40025414))
#define GPIO_PORTF_MIS_R        (*((volatile unsigned long *)0x40025418))
#define GPIO_PORTF_ICR_R        (*((volatile unsigned long *)0x4002541C))
#define GPIO_PORTF_AFSEL_R      (*((volatile unsigned long *)0x40025420))
#define GPIO_PORTF_DR2R_R       (*((volatile unsigned long *)0x40025500))
#define GPIO_PORTF_DR4R_R       (*((volatile unsigned long *)0x40025504))
#define GPIO_PORTF_DR8R_R       (*((volatile unsigned long *)0x40025508))
#define GPIO_PORTF_ODR_R        (*((volatile unsigned long *)0x4002550C))
#define GPIO_PORTF_PUR_R        (*((volatile unsigned long *)0x40025510))
#define GPIO_PORTF_PDR_R        (*((volatile unsigned long *)0x40025514))
#define GPIO_PORTF_SLR_R        (*((volatile unsigned long *)0x40025518))
#define GPIO_PORTF_DEN_R        (*((volatile unsigned long *)0x4002551C))
#define GPIO_PORTF_LOCK_R       (*((volatile unsigned long *)0x40025520))
#define GPIO_PORTF_CR_R         (*((volatile unsigned long *)0x40025524))
#define GPIO_PORTF_AMSEL_R      (*((volatile unsigned long *)0x40025528))
#define GPIO_PORTF_PCTL_R       (*((volatile unsigned long *)0x4002552C))
#define GPIO_PORTF_ADCCTL_R     (*((volatile unsigned long *)0x40025530))
#define GPIO_PORTF_DMACTL_R     (*((volatile unsigned long *)0x40025534))

//*****************************************************************************
//
// UART registers (UART0)
//
//*****************************************************************************
#define UART0_DR_R              (*((volatile unsigned long *)0x4000C000))
#define UART0_RSR_R             (*((volatile unsigned long *)0x4000C004))
#define UART0_ECR_R             (*((volatile unsigned long *)0x4000C004))
#define UART0_FR_R              (*((volatile unsigned long *)0x4000C018))
#define UART0_ILPR_R            (*((volatile unsigned long *)0x4000C020))
#define UART0_IBRD_R            (*((volatile unsigned long *)0x4000C024))
#define UART0_FBRD_R            (*((volatile unsigned long *)0x4000C028))
#define UART0_LCRH_R            (*((volatile unsigned long *)0x4000C02C))
#define UART0_CTL_R             (*((volatile unsigned long *)0x4000C030))
#define UART0_IFLS_R            (*((volatile unsigned long *)0x4000C034))
#define UART0_IM_R              (*((volatile unsigned long *)0x4000C038))
#define UART0_RIS_R             (*((volatile unsigned long *)0x4000C03C))
#define UART0_MIS_R             (*((volatile unsigned long *)0x4000C040))
#define UART0_ICR_R             (*((volatile unsigned long *)0x4000C044))
#define UART0_DMACTL_R          (*((volatile unsigned long *)0x4000C048))
#define UART0_9BITADDR_R        (*((volatile unsigned long *)0x4000C0A4))
#define UART0_9BITAMASK_R       (*((volatile unsigned long *)0x4000C0A8))
#define UART0_PP_R              (*((volatile unsigned long *)0x4000CFC0))
#define UART0_CC_R              (*((volatile unsigned long *)0x4000CFC8))

//*****************************************************************************
//
// UART registers (UART1)
//
//*****************************************************************************
#define UART1_DR_R              (*((volatile unsigned long *)0x4000D000))
#define UART1_RSR_R             (*((volatile unsigned long *)0x4000D004))
#define UART1_ECR_R             (*((volatile unsigned long *)0x4000D004))
#define UART1_FR_R              (*((volatile unsigned long *)0x4000D018))
#define UART1_ILPR_R            (*((volatile unsigned long *)0x4000D020))
#define UART1_IBRD_R            (*((volatile unsigned long *)0x4000D024))
#define UART1_FBRD_R            (*((volatile unsigned long *)0x4000D028))
#define UART1_LCRH_R            (*((volatile unsigned long *)0x4000D02C))
#define UART1_CTL_R             (*((volatile unsigned long *)0x4000D030))
#define UART1_IFLS_R            (*((volatile unsigned long *)0x4000D034))
#define UART1_IM_R              (*((volatile unsigned long *)0x4000D038))
#define UART1_RIS_R             (*((volatile unsigned long *)0x4000D03C))
#define UART1_MIS_R             (*((volatile unsigned long *)0x4000D040))
#define UART1_ICR_R             (*((volatile unsigned long *)0x4000D044))
#define UART1_DMACTL_R          (*((volatile unsigned long *)0x4000D048))
#define UART1_9BITADDR_R        (*((volatile unsigned long *)0x4000D0A4))
#define UART1_9BITAMASK_R       (*((volatile unsigned long *)0x4000D0A8))
#define UART1_PP_R              (*((volatile unsigned long *)0x4000DFC0))
#define UART1_CC_R              (*((volatile unsigned long *)0x4000DFC8))

//*****************************************************************************
//
// UART registers (UART2)
//
//*****************************************************************************
#define UART2_DR_R              (*((volatile unsigned long *)0x4000E000))
#define UART2_RSR_R             (*((volatile unsigned long *)0x4000E004))
#define UART2_ECR_R             (*((volatile unsigned long *)0x4000E004))
#define UART2_FR_R              (*((volatile unsigned long *)0x4000E018))
#define UART2_ILPR_R            (*((volatile unsigned long *)0x4000E020))
#define UART2_IBRD_R            (*((volatile unsigned long *)0x4000E024))
#define UART2_FBRD_R            (*((volatile unsigned long *)0x4000E028))
#define UART2_LCRH_R            (*((volatile unsigned long *)0x4000E02C))
#define UART2_CTL_R             (*((volatile unsigned long *)0x4000E030))
#define UART2_IFLS_R            (*((volatile unsigned long *)0x4000E034))
#define UART2_IM_R              (*((volatile unsigned long *)0x4000E038))
#define UART2_RIS_R             (*((volatile unsigned long *)0x4000E03C))
#define UART2_MIS_R             (*((volatile unsigned long *)0x4000E040))
#define UART2_ICR_R             (*((volatile unsigned long *)0x4000E044))
#define UART2_DMACTL_R          (*((volatile unsigned long *)0x4000E048))
#define UART2_9BITADDR_R        (*((volatile unsigned long *)0x4000E0A4))
#define UART2_9BITAMASK_R       (*((volatile unsigned long *)0x4000E0A8))
#define UART2_PP_R              (*((volatile unsigned long *)0x4000EFC0))
#define UART2_CC_R              (*((volatile unsigned long *)0x4000EFC8))

//*****************************************************************************
//
// UART registers (UART3)
//
//*****************************************************************************
#define UART3_DR_R              (*((volatile unsigned long *)0x4000F000))
#define UART3_RSR_R             (*((volatile unsigned long *)0x4000F004))
#define UART3_ECR_R             (*((volatile unsigned long *)0x4000F004))
#define UART3_FR_R              (*((volatile unsigned long *)0x4000F018))
#define UART3_ILPR_R            (*((volatile unsigned long *)0x4000F020))
#define UART3_IBRD_R            (*((volatile unsigned long *)0x4000F024))
#define UART3_FBRD_R            (*((volatile unsigned long *)0x4000F028))
#define UART3_LCRH_R            (*((volatile unsigned long *)0x4000F02C))
#define UART3_CTL_R             (*((volatile unsigned long *)0x4000F030))
#define UART3_IFLS_R            (*((volatile unsigned long *)0x4000F034))
#define UART3_IM_R              (*((volatile unsigned long *)0x4000F038))
#define UART3_RIS_R             (*((volatile unsigned long *)0x4000F03C))
#define UART3_MIS_R             (*((volatile unsigned long *)0x4000F040))
#define UART3_ICR_R             (*((volatile unsigned long *)0x4000F044))
#define UART3_DMACTL_R          (*((volatile unsigned long *)0x4000F048))
#define UART3_9BITADDR_R        (*((volatile unsigned long *)0x4000F0A4))
#define UART3_9BITAMASK_R       (*((volatile unsigned long *)0x4000F0A8))
#define UART3_PP_R              (*((volatile unsigned long *)0x4000FFC0))
#define UART3_CC_R              (*((volatile unsigned long *)0x4000FFC8))

//*****************************************************************************
//
// UART registers (UART4)
//
//*****************************************************************************
#define UART4_DR_R              (*((volatile unsigned long *)0x40010000))
#define UART4_RSR_R             (*((volatile unsigned long *)0x40010004))
#define UART4_ECR_R             (*((volatile unsigned long *)0x40010004))
#define UART4_FR_R              (*((volatile unsigned long *)0x40010018))
#define UART4_ILPR_R            (*((volatile unsigned long *)0x40010020))
#define UART4_IBRD_R            (*((volatile unsigned long *)0x40010024))
#define UART4_FBRD_R            (*((volatile unsigned long *)0x40010028))
#define UART4_LCRH_R            (*((volatile unsigned long *)0x4001002C))
#define UART4_CTL_R             (*((volatile unsigned long *)0x40010030))
#define UART4_IFLS_R            (*((volatile unsigned long *)0x40010034))
#define UART4_IM_R              (*((volatile unsigned long *)0x40010038))
#define UART4_RIS_R             (*((volatile unsigned long *)0x4001003C))
#define UART4_MIS_R             (*((volatile unsigned long *)0x40010040))
#define UART4_ICR_R             (*((volatile unsigned long *)0x40010044))
#define UART4_DMACTL_R          (*((volatile unsigned long *)0x40010048))
#define UART4_9BITADDR_R        (*((volatile unsigned long *)0x400100A4))
#define UART4_9BITAMASK_R       (*((volatile unsigned long *)0x400100A8))
#define UART4_PP_R              (*((volatile unsigned long *)0x40010FC0))
#define UART4_CC_R              (*((volatile unsigned long *)0x40010FC8))

//*****************************************************************************
//
// UART registers (UART5)
//
//*****************************************************************************
#define UART5_DR_R              (*((volatile unsigned long *)0x40011000))
#define UART5_RSR_R             (*((volatile unsigned long *)0x40011004))
#define UART5_ECR_R             (*((volatile unsigned long *)0x40011004))
#define UART5_FR_R              (*((volatile unsigned long *)0x40011018))
#define UART5_ILPR_R            (*((volatile unsigned long *)0x40011020))
#define UART5_IBRD_R            (*((volatile unsigned long *)0x40011024))
#define UART5_FBRD_R            (*((volatile unsigned long *)0x40011028))
#define UART5_LCRH_R            (*((volatile unsigned long *)0x4001102C))
#define UART5_CTL_R             (*((volatile unsigned long *)0x40011030))
#define UART5_IFLS_R            (*((volatile unsigned long *)0x40011034))
#define UART5_IM_R              (*((volatile unsigned long *)0x40011038))
#define UART5_RIS_R             (*((volatile unsigned long *)0x4001103C))
#define UART5_MIS_R             (*((volatile unsigned long *)0x40011040))
#define UART5_ICR_R             (*((volatile unsigned long *)0x40011044))
#define UART5_DMACTL_R          (*((volatile unsigned long *)0x40011048))
#define UART5_9BITADDR_R        (*((volatile unsigned long *)0x400110A4))
#define UART5_9BITAMASK_R       (*((volatile unsigned long *)0x400110A8))
#define UART5_PP_R              (*((volatile unsigned long *)0x40011FC0))
#define UART5_CC_R              (*((volatile unsigned long *)0x40011FC8))

//*****************************************************************************
//
// UART registers (UART6)
//
//*****************************************************************************
#define UART6_DR_R              (*((volatile unsigned long *)0x40012000))
#define UART6_RSR_R             (*((volatile unsigned long *)0x40012004))
#define UART6_ECR_R             (*((volatile unsigned long *)0x40012004))
#define UART6_FR_R              (*((volatile unsigned long *)0x40012018))
#define UART6_ILPR_R            (*((volatile unsigned long *)0x40012020))
#define UART6_IBRD_R            (*((volatile unsigned long *)0x40012024))
#define UART6_FBRD_R            (*((volatile unsigned long *)0x40012028))
#define UART6_LCRH_R            (*((volatile unsigned long *)0x4001202C))
#define UART6_CTL_R             (*((volatile unsigned long *)0x40012030))
#define UART6_IFLS_R            (*((volatile unsigned long *)0x40012034))
#define UART6_IM_R              (*((volatile unsigned long *)0x40012038))
#define UART6_RIS_R             (*((volatile unsigned long *)0x4001203C))
#define UART6_MIS_R             (*((volatile unsigned long *)0x40012040))
#define UART6_ICR_R             (*((volatile unsigned long *)0x40012044))
#define UART6_DMACTL_R          (*((volatile unsigned long *)0x40012048))
#define UART6_9BITADDR_R        (*((volatile unsigned long *)0x400120A4))
#define UART6_9BITAMASK_R       (*((volatile unsigned long *)0x400120A8))
#define UART6_PP_R              (*((volatile unsigned long *)0x40012FC0))
#define UART6_CC_R              (*((volatile unsigned long *)0x40012FC8))

//*****************************************************************************
//
// UART registers (UART7)
//
//*****************************************************************************
#define UART7_DR_R              (*((volatile unsigned long *)0x40013000))
#define UART7_RSR_R             (*((volatile unsigned long *)0x40013004))
#define UART7_ECR_R             (*((volatile unsigned long *)0x40013004))
#define UART7_FR_R              (*((volatile unsigned long *)0x40013018))
#define UART7_ILPR_R            (*((volatile unsigned long *)0x40013020))
#define UART7_IBRD_R            (*((volatile unsigned long *)0x40013024))
#define UART7_FBRD_R            (*((volatile unsigned long *)0x40013028))
#define UART7_LCRH_R            (*((volatile unsigned long *)0x4001302C))
#define UART7_CTL_R             (*((volatile unsigned long *)0x40013030))
#define UART7_IFLS_R            (*((volatile unsigned long *)0x40013034))
#define UART7_IM_R              (*((volatile unsigned long *)0x40013038))
#define UART7_RIS_R             (*((volatile unsigned long *)0x4001303C))
#define UART7_MIS_R             (*((volatile unsigned long *)0x40013040))
#define UART7_ICR_R             (*((volatile unsigned long *)0x40013044))
#define UART7_DMACTL_R          (*((volatile unsigned long *)0x40013048))
#define UART7_9BITADDR_R        (*((volatile unsigned long *)0x400130A4))
#define UART7_9BITAMASK_R       (*((volatile unsigned long *)0x400130A8))
#define UART7_PP_R              (*((volatile unsigned long *)0x40013FC0))
#define UART7_CC_R              (*((volatile unsigned long *)0x40013FC8))

//*****************************************************************************
#endif

