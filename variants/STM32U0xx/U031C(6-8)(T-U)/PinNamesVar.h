/* Alternate pin name */
PA_1_ALT1  = PA_1  | ALT1,
PA_2_ALT1  = PA_2  | ALT1,
PA_3_ALT1  = PA_3  | ALT1,
PA_6_ALT1  = PA_6  | ALT1,
PA_7_ALT1  = PA_7  | ALT1,
PA_9_ALT1  = PA_9  | ALT1,
PA_10_ALT1 = PA_10 | ALT1,
PA_11_ALT1 = PA_11 | ALT1,
PA_12_ALT1 = PA_12 | ALT1,
PA_15_ALT1 = PA_15 | ALT1,
PB_0_ALT1  = PB_0  | ALT1,
PB_1_ALT1  = PB_1  | ALT1,
PB_1_ALT2  = PB_1  | ALT2,
PB_3_ALT1  = PB_3  | ALT1,
PB_4_ALT1  = PB_4  | ALT1,
PB_6_ALT1  = PB_6  | ALT1,
PB_7_ALT1  = PB_7  | ALT1,
PB_8_ALT1  = PB_8  | ALT1,
PB_9_ALT1  = PB_9  | ALT1,
PB_10_ALT1 = PB_10 | ALT1,
PB_11_ALT1 = PB_11 | ALT1,
PB_13_ALT1 = PB_13 | ALT1,
PB_14_ALT1 = PB_14 | ALT1,
PB_15_ALT1 = PB_15 | ALT1,

/* SYS_WKUP */
#ifdef PWR_WAKEUP_PIN1
  SYS_WKUP1 = PA_0,
#endif
#ifdef PWR_WAKEUP_PIN2
  SYS_WKUP2 = PC_13,
#endif
#ifdef PWR_WAKEUP_PIN3
  SYS_WKUP3 = PA_1,
#endif
#ifdef PWR_WAKEUP_PIN4
  SYS_WKUP4 = PA_2,
#endif
#ifdef PWR_WAKEUP_PIN5
  SYS_WKUP5 = NC,
#endif
#ifdef PWR_WAKEUP_PIN6
  SYS_WKUP6 = NC,
#endif
#ifdef PWR_WAKEUP_PIN7
  SYS_WKUP7 = PB_15,
#endif

/* No USB */
