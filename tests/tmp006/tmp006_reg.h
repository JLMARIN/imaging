/***************************************************************************//**
 * @file    tmp006_reg.h
 * @brief   Register definitions for the tmp006.
 ******************************************************************************/


#ifndef __TMP006_REG_H__
#define __TMP006_REG_H__

/* tmp006 register map */
#define TMP006_VOBJ                  0x00    // V_object register (read-only)
#define TMP006_TAMB                  0x01    // T_ambient register (read-only)
#define TMP006_CONFIG                0x02    // configuration register (write/read)
#define TMP006_MFRID                 0xFE    // manufacturer ID register (read-only)
#define TMP006_DEVID                 0xFF    // device ID register (read-only)

/* tmp006 register bits writing masks */
#define TMP006_CFG_RESET           0x8000    // software reset (the bit self clears)
#define TMP006_CFG_MODE_OFF        0x0000    // mode of operation: Power-down
#define TMP006_CFG_MODE_ON         0x7000    // mode of operation: Sensor and ambient continuous conversion (MOD)
#define TMP006_CFG_1SAMPLE         0x0000    // 1 sample (no average) / 4 conv./sec
#define TMP006_CFG_2SAMPLE         0x0200    // 2 averaged samples / 2 conv./sec
#define TMP006_CFG_4SAMPLE         0x0400    // 4 averaged samples / 1 conv./sec
#define TMP006_CFG_8SAMPLE         0x0600    // 8 averaged samples / 0.5 conv./sec
#define TMP006_CFG_16SAMPLE        0x0800    // 16 averaged samples / 0.25 conv./sec
#define TMP006_CFG_DRDY_DIS        0x0000    // DRDY pin disabled
#define TMP006_CFG_DRDY_EN         0x0100    // DRDY pin enabled

/* default content for manufacturer id and device id registers */
#define TMP006_MAN_ID_VAL          0x5449    // manufacturer id
#define TMP006_DEV_ID_VAL          0x0067    // device id

#endif  /* __TMP006_REG_H__ */
