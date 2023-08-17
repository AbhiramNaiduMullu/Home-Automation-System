/*
 *  ======== ti_drivers_config.c ========
 *  Configured TI-Drivers module definitions
 *
 *  DO NOT EDIT - This file is generated for the CC3235SF_LAUNCHXL
 *  by the SysConfig tool.
 */

#include <stddef.h>
#include <stdint.h>

#ifndef DeviceFamily_CC3220
#define DeviceFamily_CC3220
#endif

#include <ti/devices/DeviceFamily.h>

#include "ti_drivers_config.h"

/*
 *  ============================= Display =============================
 */

#include <ti/display/Display.h>
#include <ti/display/DisplayUart2.h>

#define CONFIG_Display_COUNT 1

#define Display_UART2BUFFERSIZE 1024
static char displayUART2Buffer[Display_UART2BUFFERSIZE];

DisplayUart2_Object displayUart2Object;

const DisplayUart2_HWAttrs displayUart2HWAttrs = {
    .uartIdx      = CONFIG_UART2_0,
    .baudRate     = 115200,
    .mutexTimeout = (unsigned int)(-1),
    .strBuf       = displayUART2Buffer,
    .strBufLen    = Display_UART2BUFFERSIZE
};

const Display_Config Display_config[CONFIG_Display_COUNT] = {
    /* CONFIG_Display_0 */
    /* XDS110 UART */
    {
        .fxnTablePtr = &DisplayUart2Min_fxnTable,
        .object      = &displayUart2Object,
        .hwAttrs     = &displayUart2HWAttrs
    },
};

const uint_least8_t Display_count = CONFIG_Display_COUNT;

/*
 *  =============================== ADC ===============================
 */

#include <ti/drivers/ADC.h>
#include <ti/drivers/adc/ADCCC32XX.h>

#include <ti/devices/cc32xx/driverlib/adc.h>

#define CONFIG_ADC_COUNT 2

/*
 *  ======== adcCCC32XXObjects ========
 */
ADCCC32XX_Object adcCC32XXObjects[CONFIG_ADC_COUNT];

/*
 *  ======== adcCC3220SHWAttrs ========
 */
const ADCCC32XX_HWAttrsV1 adcCC32XXHWAttrs[CONFIG_ADC_COUNT] = {
    /* CONFIG_ADC_0 */
    /* Analog Input 3 */
    {
        .adcPin = ADCCC32XX_PIN_59_CH_2,
    },
    /* CONFIG_ADC_1 */
    /* Analog Input 2 */
    {
        .adcPin = ADCCC32XX_PIN_58_CH_1,
    },
};

/*
 *  ======== ADC_config ========
 */
const ADC_Config ADC_config[CONFIG_ADC_COUNT] = {
    /* CONFIG_ADC_0 */
    /* Analog Input 3 */
    {
        .fxnTablePtr = &ADCCC32XX_fxnTable,
        .object = &adcCC32XXObjects[CONFIG_ADC_0],
        .hwAttrs = &adcCC32XXHWAttrs[CONFIG_ADC_0]
    },
    /* CONFIG_ADC_1 */
    /* Analog Input 2 */
    {
        .fxnTablePtr = &ADCCC32XX_fxnTable,
        .object = &adcCC32XXObjects[CONFIG_ADC_1],
        .hwAttrs = &adcCC32XXHWAttrs[CONFIG_ADC_1]
    },
};

const uint_least8_t CONFIG_ADC_0_CONST = CONFIG_ADC_0;
const uint_least8_t CONFIG_ADC_1_CONST = CONFIG_ADC_1;
const uint_least8_t ADC_count = CONFIG_ADC_COUNT;

/*
 *  =============================== DMA ===============================
 */

#include <ti/drivers/dma/UDMACC32XX.h>
#include <ti/devices/cc32xx/inc/hw_ints.h>
#include <ti/devices/cc32xx/inc/hw_types.h>
#include <ti/devices/cc32xx/driverlib/rom_map.h>
#include <ti/devices/cc32xx/driverlib/udma.h>

/* Ensure DMA control table is aligned as required by the uDMA Hardware */
static tDMAControlTable dmaControlTable[64] __attribute__ ((aligned (1024)));

/* This is the handler for the uDMA error interrupt. */
static void dmaErrorFxn(uintptr_t arg)
{
    int status = MAP_uDMAErrorStatusGet();
    MAP_uDMAErrorStatusClear();

    /* Suppress unused variable warning */
    (void)status;

    while (1);
}

UDMACC32XX_Object udmaCC3220SObject;

const UDMACC32XX_HWAttrs udmaCC3220SHWAttrs = {
    .controlBaseAddr = (void *)dmaControlTable,
    .dmaErrorFxn     = (UDMACC32XX_ErrorFxn)dmaErrorFxn,
    .intNum          = INT_UDMAERR,
    .intPriority     = (~0)
};

const UDMACC32XX_Config UDMACC32XX_config = {
    .object  = &udmaCC3220SObject,
    .hwAttrs = &udmaCC3220SHWAttrs
};

/*
 *  =============================== GPIO ===============================
 */

#include <ti/drivers/GPIO.h>
#include <ti/drivers/gpio/GPIOCC32XX.h>

/* The range of pins available on this device */
const uint_least8_t GPIO_pinLowerBound = 0;
const uint_least8_t GPIO_pinUpperBound = 32;

/*
 *  ======== gpioPinConfigs ========
 *  Array of Pin configurations
 */
GPIO_PinConfig gpioPinConfigs[33] = {
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    /* Owned by CONFIG_ADC_1 as ADC Pin */
    GPIO_CFG_INPUT_INTERNAL | GPIO_CFG_IN_INT_NONE | GPIO_CFG_PULL_NONE_INTERNAL, /* CONFIG_GPIO_ADC_1_AIN */
    /* Owned by CONFIG_ADC_0 as ADC Pin */
    GPIO_CFG_INPUT_INTERNAL | GPIO_CFG_IN_INT_NONE | GPIO_CFG_PULL_NONE_INTERNAL, /* CONFIG_GPIO_ADC_0_AIN */
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIOCC32XX_DO_NOT_CONFIG, /* Pin not available */
    GPIOCC32XX_DO_NOT_CONFIG, /* Pin not available */
    GPIOCC32XX_DO_NOT_CONFIG, /* Pin not available */
    GPIOCC32XX_DO_NOT_CONFIG, /* Pin not available */
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
    GPIO_CFG_INPUT | GPIOCC32XX_DO_NOT_CONFIG,
};

/*
 *  ======== gpioCallbackFunctions ========
 *  Array of callback function pointers
 *  Change at runtime with GPIO_setCallback()
 */
GPIO_CallbackFxn gpioCallbackFunctions[33];

/*
 *  ======== gpioUserArgs ========
 *  Array of user argument pointers
 *  Change at runtime with GPIO_setUserArg()
 *  Get values with GPIO_getUserArg()
 */
void* gpioUserArgs[33];

const uint_least8_t CONFIG_GPIO_ADC_0_AIN_CONST = CONFIG_GPIO_ADC_0_AIN;
const uint_least8_t CONFIG_GPIO_ADC_1_AIN_CONST = CONFIG_GPIO_ADC_1_AIN;

/*
 *  ======== GPIO_config ========
 */
const GPIO_Config GPIO_config = {
    .configs = (GPIO_PinConfig *)gpioPinConfigs,
    .callbacks = (GPIO_CallbackFxn *)gpioCallbackFunctions,
    .userArgs = gpioUserArgs,
    .intPriority = (~0)
};

/*
 *  =============================== Power ===============================
 */
#include <ti/drivers/Power.h>
#include <ti/drivers/power/PowerCC32XX.h>
#include <ti/devices/cc32xx/driverlib/prcm.h>

extern void PowerCC32XX_initPolicy(void);
extern void PowerCC32XX_sleepPolicy(void);
PowerCC32XX_ParkInfo parkInfo[];
/*
 *  This structure defines the configuration for the Power Manager.
 */
const PowerCC32XX_ConfigV1 PowerCC32XX_config = {
    .policyInitFxn             = PowerCC32XX_initPolicy,
    .policyFxn                 = PowerCC32XX_sleepPolicy,
    .enterLPDSHookFxn          = NULL,
    .resumeLPDSHookFxn         = NULL,
    .enablePolicy              = false,
    .enableGPIOWakeupLPDS      = true,
    .enableGPIOWakeupShutdown  = true,
    .enableNetworkWakeupLPDS   = true,
    .wakeupGPIOSourceLPDS      = PRCM_LPDS_GPIO13,
    .wakeupGPIOTypeLPDS        = PRCM_LPDS_FALL_EDGE,
    .wakeupGPIOFxnLPDS         = NULL,
    .wakeupGPIOFxnLPDSArg      = 0,
    .wakeupGPIOSourceShutdown  = PRCM_HIB_GPIO13,
    .wakeupGPIOTypeShutdown    = PRCM_HIB_RISE_EDGE,
    .ramRetentionMaskLPDS      = PRCM_SRAM_COL_1|PRCM_SRAM_COL_2|PRCM_SRAM_COL_3|PRCM_SRAM_COL_4,
    .latencyForLPDS            = 20000,
    .keepDebugActiveDuringLPDS = false,
    .ioRetentionShutdown       = PRCM_IO_RET_GRP_0|PRCM_IO_RET_GRP_1|PRCM_IO_RET_GRP_2|PRCM_IO_RET_GRP_3,
    .pinParkDefs               = parkInfo,
    .numPins                   = 31
};

/*
 *  =============================== UART2 ===============================
 */

#include <ti/drivers/UART2.h>
#include <ti/devices/cc32xx/inc/hw_ints.h>
#include <ti/devices/cc32xx/inc/hw_memmap.h>
#include <ti/drivers/uart2/UART2CC32XX.h>

#define CONFIG_UART2_COUNT 1

#define UART0_BASE UARTA0_BASE
#define UART1_BASE UARTA1_BASE
#define INT_UART0  INT_UARTA0
#define INT_UART1  INT_UARTA1

static unsigned char uart2RxRingBuffer0[32];
static unsigned char uart2TxRingBuffer0[32];


UART2CC32XX_Object uart2CC32XXObjects0;

static const UART2CC32XX_HWAttrs uart2CC32XXHWAttrs0 = {
    .baseAddr           = UART0_BASE,
    .intNum             = INT_UART0,
    .intPriority        = (~0),
    .flowControl        = UART2_FLOWCTRL_NONE,
    .rxDmaChannel       = UDMA_CH8_UARTA0_RX,
    .txDmaChannel       = UDMA_CH9_UARTA0_TX,
    .rxPin              = UART2CC32XX_PIN_57_UART0_RX,
    .txPin              = UART2CC32XX_PIN_55_UART0_TX,
    .ctsPin             = UART2CC32XX_PIN_UNASSIGNED,
    .rtsPin             = UART2CC32XX_PIN_UNASSIGNED,
    .rxBufPtr           = uart2RxRingBuffer0,
    .rxBufSize          = sizeof(uart2RxRingBuffer0),
    .txBufPtr           = uart2TxRingBuffer0,
    .txBufSize          = sizeof(uart2TxRingBuffer0)
  };

const UART2_Config UART2_config[CONFIG_UART2_COUNT] = {
    {   /* CONFIG_UART2_0 */
        .object      = &uart2CC32XXObjects0,
        .hwAttrs     = &uart2CC32XXHWAttrs0
    },
};

const uint_least8_t CONFIG_UART2_0_CONST = CONFIG_UART2_0;
const uint_least8_t UART2_count = CONFIG_UART2_COUNT;

#include <ti/drivers/power/PowerCC32XX.h>

/*
 * This table defines the parking state to be set for each parkable pin
 * during LPDS. (Device resources must be parked during LPDS to achieve maximum
 * power savings.)  If the pin should be left unparked, specify the state
 * PowerCC32XX_DONT_PARK.  For example, for a UART TX pin, the device
 * will automatically park the pin in a high state during transition to LPDS,
 * so the Power Manager does not need to explictly park the pin.  So the
 * corresponding entries in this table should indicate PowerCC32XX_DONT_PARK.
 */
PowerCC32XX_ParkInfo parkInfo[] = {
/*        PIN                    PARK STATE              Pin Alias
   -----------------  ------------------------------     ---------------*/

  {PowerCC32XX_PIN01, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP10 */
  {PowerCC32XX_PIN02, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP11 */
  {PowerCC32XX_PIN03, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP12 */
  {PowerCC32XX_PIN04, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP13 */
  {PowerCC32XX_PIN05, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP14 */
  {PowerCC32XX_PIN06, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP15 */
  {PowerCC32XX_PIN07, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP16 */
  {PowerCC32XX_PIN08, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP17 */
  {PowerCC32XX_PIN13, PowerCC32XX_WEAK_PULL_DOWN_STD},
  {PowerCC32XX_PIN15, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP22 */
  {PowerCC32XX_PIN16, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* TDI */
  {PowerCC32XX_PIN17, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* TDO */
  {PowerCC32XX_PIN18, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP28 */
  {PowerCC32XX_PIN19, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* TCK */
  {PowerCC32XX_PIN20, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* TMS */
  {PowerCC32XX_PIN21, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* SOP2 */
  {PowerCC32XX_PIN29, PowerCC32XX_WEAK_PULL_DOWN_STD},
  {PowerCC32XX_PIN30, PowerCC32XX_WEAK_PULL_DOWN_STD},
  {PowerCC32XX_PIN45, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP31 */
  {PowerCC32XX_PIN50, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP00 */
  {PowerCC32XX_PIN52, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP32 */
  {PowerCC32XX_PIN53, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP30 */
  {PowerCC32XX_PIN55, PowerCC32XX_WEAK_PULL_UP_STD},   /* GP01 */
  {PowerCC32XX_PIN57, PowerCC32XX_WEAK_PULL_UP_STD},   /* GP02 */
  {PowerCC32XX_PIN58, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP03 */
  {PowerCC32XX_PIN59, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP04 */
  {PowerCC32XX_PIN60, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP05 */
  {PowerCC32XX_PIN61, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP06 */
  {PowerCC32XX_PIN62, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP07 */
  {PowerCC32XX_PIN63, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP08 */
  {PowerCC32XX_PIN64, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP09 */
};

#include <ti/drivers/Board.h>

/*
 *  ======== Board_initHook ========
 *  Perform any board-specific initialization needed at startup.  This
 *  function is declared weak to allow applications to override it if needed.
 */
void __attribute__((weak)) Board_initHook(void)
{
}

/*
 *  ======== Board_init ========
 *  Perform any initialization needed before using any board APIs
 */
void Board_init(void)
{
    /* ==== /ti/drivers/Power initialization ==== */
    PRCMCC3200MCUInit();
    Power_init();

    /* ==== /ti/drivers/GPIO initialization ==== */
    /* Setup GPIO module and default-initialise pins */
    GPIO_init();

    Board_initHook();
}

/*
 *  ======== Board_debugHeader ========
 *  This structure prevents the CC32XXSF bootloader from overwriting the
 *  internal FLASH; this allows us to flash a program that will not be
 *  overwritten by the bootloader with the encrypted program saved in
 *  "secure/serial flash".
 *
 *  This structure must be placed at the beginning of internal FLASH (so
 *  the bootloader is able to recognize that it should not overwrite
 *  internal FLASH).
 */
#if defined (__SF_DEBUG__) || defined(__SF_NODEBUG__)
#if defined(__TI_COMPILER_VERSION__)
#pragma DATA_SECTION(Board_debugHeader, ".dbghdr")
#pragma RETAIN(Board_debugHeader)
#elif defined(__IAR_SYSTEMS_ICC__)
#pragma location=".dbghdr"
#elif defined(__GNUC__)
__attribute__ ((section (".dbghdr")))
#endif
#if defined(__SF_DEBUG__)
const uint32_t Board_debugHeader[] = {
    0x5AA5A55A,
    0x000FF800,
    0xEFA3247D
};
#elif defined (__SF_NODEBUG__)
const uint32_t Board_debugHeader[] = {
    0xFFFFFFFF,
    0xFFFFFFFF,
    0xFFFFFFFF
};
#endif
#endif

