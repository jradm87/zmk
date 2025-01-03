#define CONFIG_ZMK_KEYBOARD_NAME ""
#define CONFIG_USB_DEVICE_PRODUCT ""
#define CONFIG_BT_DEVICE_NAME ""
#define CONFIG_USB_DEVICE_VID 0x1D50
#define CONFIG_USB_DEVICE_PID 0x615E
#define CONFIG_USB_DEVICE_MANUFACTURER "ZMK Project"
#define CONFIG_BT_DIS_PNP_VID 0x1D50
#define CONFIG_BT_DIS_PNP_PID 0x615E
#define CONFIG_BT_DIS_MODEL ""
#define CONFIG_BT_DIS_MANUF "ZMK Project"
#define CONFIG_NRF_STORE_REBOOT_TYPE_GPREGRET 1
#define CONFIG_ZMK_HID_REPORT_TYPE_HKRO 1
#define CONFIG_ZMK_HID_KEYBOARD_REPORT_SIZE 6
#define CONFIG_ZMK_HID_CONSUMER_REPORT_SIZE 6
#define CONFIG_ZMK_HID_CONSUMER_REPORT_USAGES_FULL 1
#define CONFIG_USB_NUMOF_EP_WRITE_RETRIES 3
#define CONFIG_ZMK_BLE 1
#define CONFIG_BT_CTLR_PHY_2M 1
#define CONFIG_BT_TINYCRYPT_ECC 1
#define CONFIG_SYSTEM_WORKQUEUE_STACK_SIZE 2048
#define CONFIG_ZMK_BLE_THREAD_STACK_SIZE 768
#define CONFIG_ZMK_BLE_THREAD_PRIORITY 5
#define CONFIG_ZMK_BLE_KEYBOARD_REPORT_QUEUE_SIZE 20
#define CONFIG_ZMK_BLE_CONSUMER_REPORT_QUEUE_SIZE 5
#define CONFIG_ZMK_BLE_MOUSE_REPORT_QUEUE_SIZE 20
#define CONFIG_BT_GATT_AUTO_SEC_REQ 1
#define CONFIG_BT_DEVICE_APPEARANCE 961
#define CONFIG_BT_PERIPHERAL_PREF_MIN_INT 6
#define CONFIG_BT_PERIPHERAL_PREF_MAX_INT 12
#define CONFIG_BT_PERIPHERAL_PREF_LATENCY 30
#define CONFIG_BT_PERIPHERAL_PREF_TIMEOUT 400
#define CONFIG_ZMK_SPLIT 1
#define CONFIG_ZMK_SPLIT_BLE 1
#define CONFIG_BT_L2CAP_TX_BUF_COUNT 3
#define CONFIG_ZMK_SPLIT_BLE_PERIPHERAL_STACK_SIZE 756
#define CONFIG_ZMK_SPLIT_BLE_PERIPHERAL_PRIORITY 5
#define CONFIG_ZMK_SPLIT_BLE_PERIPHERAL_POSITION_QUEUE_SIZE 10
#define CONFIG_BT_MAX_PAIRED 1
#define CONFIG_BT_MAX_CONN 1
#define CONFIG_BT_CONN_TX_MAX 3
#define CONFIG_ZMK_BATTERY_REPORTING 1
#define CONFIG_ZMK_BATTERY_REPORTING_FETCH_MODE_STATE_OF_CHARGE 1
#define CONFIG_ZMK_IDLE_TIMEOUT 30000
#define CONFIG_ZMK_EXT_POWER 1
#define CONFIG_ZMK_COMBO_MAX_PRESSED_COMBOS 4
#define CONFIG_ZMK_COMBO_MAX_COMBOS_PER_KEY 5
#define CONFIG_ZMK_COMBO_MAX_KEYS_PER_COMBO 4
#define CONFIG_ZMK_BEHAVIORS_QUEUE_SIZE 64
#define CONFIG_ZMK_BEHAVIOR_HOLD_TAP 1
#define CONFIG_ZMK_BEHAVIOR_HOLD_TAP_MAX_HELD 10
#define CONFIG_ZMK_BEHAVIOR_HOLD_TAP_MAX_CAPTURED_EVENTS 40
#define CONFIG_ZMK_BEHAVIOR_SENSOR_ROTATE_COMMON 1
#define CONFIG_ZMK_BEHAVIOR_SENSOR_ROTATE_VAR 1
#define CONFIG_ZMK_MACRO_DEFAULT_WAIT_MS 15
#define CONFIG_ZMK_MACRO_DEFAULT_TAP_MS 30
#define CONFIG_ZMK_USB_INIT_PRIORITY 94
#define CONFIG_ZMK_USB_HID_INIT_PRIORITY 95
#define CONFIG_ZMK_BLE_INIT_PRIORITY 50
#define CONFIG_ZMK_KSCAN 1
#define CONFIG_ZMK_KSCAN_EVENT_QUEUE_SIZE 4
#define CONFIG_ZMK_LOG_LEVEL 4
#define CONFIG_ZMK_SETTINGS_SAVE_DEBOUNCE 60000
#define CONFIG_ZMK_BATTERY_REPORT_INTERVAL 60
#define CONFIG_ZMK_LOW_PRIORITY_WORK_QUEUE 1
#define CONFIG_ZMK_LOW_PRIORITY_THREAD_STACK_SIZE 768
#define CONFIG_ZMK_LOW_PRIORITY_THREAD_PRIORITY 10
#define CONFIG_KERNEL_BIN_NAME "zmk"
#define CONFIG_REBOOT 1
#define CONFIG_USB_DEVICE_STACK 1
#define CONFIG_FPU 1
#define CONFIG_ZMK_KEYMAP_SENSORS 1
#define CONFIG_ZMK_KEYMAP_SENSORS_DEFAULT_TRIGGERS_PER_ROTATION 20
#define CONFIG_SHIELD_AVALANCHE 1
#define CONFIG_SHIELD_AVALANCHE_RIGHT 1
#define CONFIG_LV_DPI_DEF 130
#define CONFIG_SETTINGS 1
#define CONFIG_BOARD "nice_nano"
#define CONFIG_USB_NRFX 1
#define CONFIG_BT_CTLR 1
#define CONFIG_ADC_INIT_PRIORITY 50
#define CONFIG_BT_HCI_VS_EXT 1
#define CONFIG_NUM_IRQS 48
#define CONFIG_SOC_SERIES "nrf52"
#define CONFIG_SYS_CLOCK_HW_CYCLES_PER_SEC 32768
#define CONFIG_SOC "nRF52840_QIAA"
#define CONFIG_CLOCK_CONTROL_INIT_PRIORITY 30
#define CONFIG_FLASH_SIZE 1024
#define CONFIG_FLASH_BASE_ADDRESS 0x0
#define CONFIG_ICACHE_LINE_SIZE 32
#define CONFIG_DCACHE_LINE_SIZE 32
#define CONFIG_CLOCK_CONTROL 1
#define CONFIG_PINCTRL 1
#define CONFIG_HEAP_MEM_POOL_SIZE 0
#define CONFIG_ROM_START_OFFSET 0x0
#define CONFIG_GPIO 1
#define CONFIG_SOC_HAS_TIMING_FUNCTIONS 1
#define CONFIG_ARCH_HAS_CUSTOM_BUSY_WAIT 1
#define CONFIG_NRF_RTC_TIMER 1
#define CONFIG_SYS_CLOCK_TICKS_PER_SEC 32768
#define CONFIG_BUILD_OUTPUT_HEX 1
#define CONFIG_TINYCRYPT 1
#define CONFIG_MAIN_STACK_SIZE 1024
#define CONFIG_USE_DT_CODE_PARTITION 1
#define CONFIG_FLASH_LOAD_OFFSET 0x26000
#define CONFIG_PLATFORM_SPECIFIC_INIT 1
#define CONFIG_IDLE_STACK_SIZE 320
#define CONFIG_BT_USER_PHY_UPDATE 1
#define CONFIG_BUILD_OUTPUT_BIN 1
#define CONFIG_MP_MAX_NUM_CPUS 1
#define CONFIG_HAS_DTS 1
#define CONFIG_DT_HAS_ALPS_EC11_ENABLED 1
#define CONFIG_DT_HAS_ARM_ARMV7M_ITM_ENABLED 1
#define CONFIG_DT_HAS_ARM_CORTEX_M4F_ENABLED 1
#define CONFIG_DT_HAS_ARM_V7M_NVIC_ENABLED 1
#define CONFIG_DT_HAS_FIXED_PARTITIONS_ENABLED 1
#define CONFIG_DT_HAS_GPIO_LEDS_ENABLED 1
#define CONFIG_DT_HAS_MMIO_SRAM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_ACL_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_CCM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_CLOCK_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_ECB_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_EGU_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_FICR_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPIO_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPIOTE_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_GPREGRET_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_MWU_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_NFCT_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_PINCTRL_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_POWER_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_PPI_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_RADIO_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_RNG_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_SAADC_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_SPIM_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_SWI_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_TEMP_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_TWI_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_UICR_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_USBD_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF_WDT_ENABLED 1
#define CONFIG_DT_HAS_NORDIC_NRF52_FLASH_CONTROLLER_ENABLED 1
#define CONFIG_DT_HAS_SOC_NV_FLASH_ENABLED 1
#define CONFIG_DT_HAS_SOLOMON_SSD1306FB_ENABLED 1
#define CONFIG_DT_HAS_WORLDSEMI_WS2812_SPI_ENABLED 1
#define CONFIG_DT_HAS_ZEPHYR_BT_HCI_ENTROPY_ENABLED 1
#define CONFIG_DT_HAS_ZMK_BATTERY_NRF_VDDH_ENABLED 1
#define CONFIG_DT_HAS_ZMK_BEHAVIOR_BLUETOOTH_ENABLED 1
#define CONFIG_DT_HAS_ZMK_BEHAVIOR_EXT_POWER_ENABLED 1
#define CONFIG_DT_HAS_ZMK_BEHAVIOR_HOLD_TAP_ENABLED 1
#define CONFIG_DT_HAS_ZMK_BEHAVIOR_INPUT_TWO_AXIS_ENABLED 1
#define CONFIG_DT_HAS_ZMK_BEHAVIOR_KEY_PRESS_ENABLED 1
#define CONFIG_DT_HAS_ZMK_BEHAVIOR_MOMENTARY_LAYER_ENABLED 1
#define CONFIG_DT_HAS_ZMK_BEHAVIOR_MOUSE_KEY_PRESS_ENABLED 1
#define CONFIG_DT_HAS_ZMK_BEHAVIOR_RESET_ENABLED 1
#define CONFIG_DT_HAS_ZMK_BEHAVIOR_RGB_UNDERGLOW_ENABLED 1
#define CONFIG_DT_HAS_ZMK_BEHAVIOR_SENSOR_ROTATE_VAR_ENABLED 1
#define CONFIG_DT_HAS_ZMK_BEHAVIOR_STUDIO_UNLOCK_ENABLED 1
#define CONFIG_DT_HAS_ZMK_BEHAVIOR_TRANSPARENT_ENABLED 1
#define CONFIG_DT_HAS_ZMK_EXT_POWER_GENERIC_ENABLED 1
#define CONFIG_DT_HAS_ZMK_INPUT_LISTENER_ENABLED 1
#define CONFIG_DT_HAS_ZMK_KEYMAP_ENABLED 1
#define CONFIG_DT_HAS_ZMK_KEYMAP_SENSORS_ENABLED 1
#define CONFIG_DT_HAS_ZMK_KSCAN_GPIO_MATRIX_ENABLED 1
#define CONFIG_DT_HAS_ZMK_MACRO_CONTROL_MODE_PRESS_ENABLED 1
#define CONFIG_DT_HAS_ZMK_MACRO_CONTROL_MODE_RELEASE_ENABLED 1
#define CONFIG_DT_HAS_ZMK_MACRO_CONTROL_MODE_TAP_ENABLED 1
#define CONFIG_DT_HAS_ZMK_MACRO_CONTROL_TAP_TIME_ENABLED 1
#define CONFIG_DT_HAS_ZMK_MACRO_CONTROL_WAIT_TIME_ENABLED 1
#define CONFIG_DT_HAS_ZMK_MACRO_PARAM_1TO1_ENABLED 1
#define CONFIG_DT_HAS_ZMK_MACRO_PARAM_1TO2_ENABLED 1
#define CONFIG_DT_HAS_ZMK_MACRO_PARAM_2TO1_ENABLED 1
#define CONFIG_DT_HAS_ZMK_MACRO_PARAM_2TO2_ENABLED 1
#define CONFIG_DT_HAS_ZMK_MACRO_PAUSE_FOR_RELEASE_ENABLED 1
#define CONFIG_DT_HAS_ZMK_MATRIX_TRANSFORM_ENABLED 1
#define CONFIG_ZEPHYR_NANOPB_MODULE 1
#define CONFIG_ZEPHYR_ACPICA_MODULE 1
#define CONFIG_ZEPHYR_CANOPENNODE_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_MODULE 1
#define CONFIG_HAS_CMSIS_CORE 1
#define CONFIG_HAS_CMSIS_CORE_M 1
#define CONFIG_ZEPHYR_CMSIS_DSP_MODULE 1
#define CONFIG_ZEPHYR_CMSIS_NN_MODULE 1
#define CONFIG_ZEPHYR_FATFS_MODULE 1
#define CONFIG_ZEPHYR_HAL_AMBIQ_MODULE 1
#define CONFIG_ZEPHYR_HAL_ESPRESSIF_MODULE 1
#define CONFIG_ZEPHYR_HAL_ETHOS_U_MODULE 1
#define CONFIG_ZEPHYR_HAL_GIGADEVICE_MODULE 1
#define CONFIG_ZEPHYR_HAL_NORDIC_MODULE 1
#define CONFIG_HAS_NORDIC_DRIVERS 1
#define CONFIG_NRF_802154_SOURCE_HAL_NORDIC 1
#define CONFIG_HAS_NRFX 1
#define CONFIG_NRFX_CLOCK 1
#define CONFIG_NRFX_CLOCK_LFXO_TWO_STAGE_ENABLED 1
#define CONFIG_NRFX_GPIOTE 1
#define CONFIG_NRFX_GPIOTE_NUM_OF_EVT_HANDLERS 1
#define CONFIG_NRFX_NVMC 1
#define CONFIG_NRFX_POWER 1
#define CONFIG_NRFX_USBD 1
#define CONFIG_NRFX_USBD_ISO_IN_ZLP 1
#define CONFIG_ZEPHYR_HAL_RPI_PICO_MODULE 1
#define CONFIG_ZEPHYR_HAL_TELINK_MODULE 1
#define CONFIG_ZEPHYR_LIBLC3_MODULE 1
#define CONFIG_ZEPHYR_LITTLEFS_MODULE 1
#define CONFIG_LV_COLOR_DEPTH_16 1
#define CONFIG_LV_COLOR_DEPTH 16
#define CONFIG_LV_COLOR_MIX_ROUND_OFS 128
#define CONFIG_LV_COLOR_CHROMA_KEY_HEX 0x00FF00
#define CONFIG_LV_MEM_SIZE_KILOBYTES 32
#define CONFIG_LV_MEM_ADDR 0x0
#define CONFIG_LV_MEM_BUF_MAX_NUM 16
#define CONFIG_LV_DISP_DEF_REFR_PERIOD 30
#define CONFIG_LV_INDEV_DEF_READ_PERIOD 30
#define CONFIG_LV_DRAW_COMPLEX 1
#define CONFIG_LV_SHADOW_CACHE_SIZE 0
#define CONFIG_LV_CIRCLE_CACHE_SIZE 4
#define CONFIG_LV_LAYER_SIMPLE_BUF_SIZE 24576
#define CONFIG_LV_IMG_CACHE_DEF_SIZE 0
#define CONFIG_LV_GRADIENT_MAX_STOPS 2
#define CONFIG_LV_GRAD_CACHE_DEF_SIZE 0
#define CONFIG_LV_DISP_ROT_MAX_BUF 10240
#define CONFIG_LV_USE_ASSERT_NULL 1
#define CONFIG_LV_USE_ASSERT_MALLOC 1
#define CONFIG_LV_ASSERT_HANDLER_INCLUDE "assert.h"
#define CONFIG_LV_USE_USER_DATA 1
#define CONFIG_LV_ATTRIBUTE_MEM_ALIGN_SIZE 1
#define CONFIG_LV_FONT_MONTSERRAT_14 1
#define CONFIG_LV_FONT_DEFAULT_MONTSERRAT_14 1
#define CONFIG_LV_USE_FONT_PLACEHOLDER 1
#define CONFIG_LV_TXT_ENC_UTF8 1
#define CONFIG_LV_TXT_BREAK_CHARS " ,.;:-_"
#define CONFIG_LV_TXT_LINE_BREAK_LONG_LEN 0
#define CONFIG_LV_TXT_COLOR_CMD "#"
#define CONFIG_LV_USE_ARC 1
#define CONFIG_LV_USE_BAR 1
#define CONFIG_LV_USE_BTN 1
#define CONFIG_LV_USE_BTNMATRIX 1
#define CONFIG_LV_USE_CANVAS 1
#define CONFIG_LV_USE_CHECKBOX 1
#define CONFIG_LV_USE_DROPDOWN 1
#define CONFIG_LV_USE_IMG 1
#define CONFIG_LV_USE_LABEL 1
#define CONFIG_LV_LABEL_TEXT_SELECTION 1
#define CONFIG_LV_LABEL_LONG_TXT_HINT 1
#define CONFIG_LV_USE_LINE 1
#define CONFIG_LV_USE_ROLLER 1
#define CONFIG_LV_ROLLER_INF_PAGES 7
#define CONFIG_LV_USE_SLIDER 1
#define CONFIG_LV_USE_SWITCH 1
#define CONFIG_LV_USE_TEXTAREA 1
#define CONFIG_LV_TEXTAREA_DEF_PWD_SHOW_TIME 1500
#define CONFIG_LV_USE_TABLE 1
#define CONFIG_LV_USE_ANIMIMG 1
#define CONFIG_LV_USE_CALENDAR 1
#define CONFIG_LV_USE_CALENDAR_HEADER_ARROW 1
#define CONFIG_LV_USE_CALENDAR_HEADER_DROPDOWN 1
#define CONFIG_LV_USE_CHART 1
#define CONFIG_LV_USE_COLORWHEEL 1
#define CONFIG_LV_USE_IMGBTN 1
#define CONFIG_LV_USE_KEYBOARD 1
#define CONFIG_LV_USE_LED 1
#define CONFIG_LV_USE_LIST 1
#define CONFIG_LV_USE_MENU 1
#define CONFIG_LV_USE_METER 1
#define CONFIG_LV_USE_MSGBOX 1
#define CONFIG_LV_USE_SPAN 1
#define CONFIG_LV_SPAN_SNIPPET_STACK_SIZE 64
#define CONFIG_LV_USE_SPINBOX 1
#define CONFIG_LV_USE_SPINNER 1
#define CONFIG_LV_USE_TABVIEW 1
#define CONFIG_LV_USE_TILEVIEW 1
#define CONFIG_LV_USE_WIN 1
#define CONFIG_LV_USE_THEME_DEFAULT 1
#define CONFIG_LV_THEME_DEFAULT_GROW 1
#define CONFIG_LV_THEME_DEFAULT_TRANSITION_TIME 80
#define CONFIG_LV_USE_THEME_BASIC 1
#define CONFIG_LV_USE_FLEX 1
#define CONFIG_LV_USE_GRID 1
#define CONFIG_LV_USE_SNAPSHOT 1
#define CONFIG_LV_BUILD_EXAMPLES 1
#define CONFIG_ZEPHYR_LVGL_MODULE 1
#define CONFIG_ZEPHYR_MBEDTLS_MODULE 1
#define CONFIG_ZEPHYR_PERCEPIO_MODULE 1
#define CONFIG_ZEPHYR_PICOLIBC_MODULE 1
#define CONFIG_ZEPHYR_SEGGER_MODULE 1
#define CONFIG_HAS_SEGGER_RTT 1
#define CONFIG_ZEPHYR_TRUSTED_FIRMWARE_A_MODULE 1
#define CONFIG_ZEPHYR_UOSCORE_UEDHOC_MODULE 1
#define CONFIG_ZEPHYR_ZCBOR_MODULE 1
#define CONFIG_ZMK_KSCAN_GPIO_DRIVER 1
#define CONFIG_ZMK_KSCAN_GPIO_MATRIX 1
#define CONFIG_ZMK_KSCAN_MATRIX_WAIT_BEFORE_INPUTS 0
#define CONFIG_ZMK_KSCAN_MATRIX_WAIT_BETWEEN_OUTPUTS 0
#define CONFIG_ZMK_KSCAN_DEBOUNCE_PRESS_MS -1
#define CONFIG_ZMK_KSCAN_DEBOUNCE_RELEASE_MS -1
#define CONFIG_ZMK_BATTERY 1
#define CONFIG_ZMK_BATTERY_NRF_VDDH 1
#define CONFIG_EC11 1
#define CONFIG_EC11_TRIGGER_GLOBAL_THREAD 1
#define CONFIG_EC11_TRIGGER 1
#define CONFIG_ZMK_DEBOUNCE 1
#define CONFIG_ZEPHYR_MODULE_MODULE 1
#define CONFIG_TINYCRYPT_ECC_DH 1
#define CONFIG_TINYCRYPT_AES 1
#define CONFIG_TINYCRYPT_AES_CMAC 1
#define CONFIG_BOARD_REVISION ""
#define CONFIG_BOARD_NICE_NANO_V2 1
#define CONFIG_BOARD_ENABLE_DCDC 1
#define CONFIG_BOARD_ENABLE_DCDC_HV 1
#define CONFIG_SOC_SERIES_NRF52X 1
#define CONFIG_CPU_HAS_ARM_MPU 1
#define CONFIG_HAS_SWO 1
#define CONFIG_SOC_FAMILY "nordic_nrf"
#define CONFIG_GPIO_INIT_PRIORITY 40
#define CONFIG_SOC_FAMILY_NRF 1
#define CONFIG_HAS_HW_NRF_ACL 1
#define CONFIG_HAS_HW_NRF_CCM 1
#define CONFIG_HAS_HW_NRF_CCM_LFLEN_8BIT 1
#define CONFIG_HAS_HW_NRF_CLOCK 1
#define CONFIG_HAS_HW_NRF_ECB 1
#define CONFIG_HAS_HW_NRF_EGU0 1
#define CONFIG_HAS_HW_NRF_EGU1 1
#define CONFIG_HAS_HW_NRF_EGU2 1
#define CONFIG_HAS_HW_NRF_EGU3 1
#define CONFIG_HAS_HW_NRF_EGU4 1
#define CONFIG_HAS_HW_NRF_EGU5 1
#define CONFIG_HAS_HW_NRF_GPIO0 1
#define CONFIG_HAS_HW_NRF_GPIO1 1
#define CONFIG_HAS_HW_NRF_GPIOTE 1
#define CONFIG_HAS_HW_NRF_MWU 1
#define CONFIG_HAS_HW_NRF_NFCT 1
#define CONFIG_HAS_HW_NRF_NVMC_PE 1
#define CONFIG_HAS_HW_NRF_POWER 1
#define CONFIG_HAS_HW_NRF_PPI 1
#define CONFIG_HAS_HW_NRF_RADIO_BLE_2M 1
#define CONFIG_HAS_HW_NRF_RADIO_BLE_CODED 1
#define CONFIG_HAS_HW_NRF_RADIO_IEEE802154 1
#define CONFIG_HAS_HW_NRF_RADIO_TX_PWR_HIGH 1
#define CONFIG_HAS_HW_NRF_RNG 1
#define CONFIG_HAS_HW_NRF_SAADC 1
#define CONFIG_HAS_HW_NRF_SPIM3 1
#define CONFIG_HAS_HW_NRF_SWI0 1
#define CONFIG_HAS_HW_NRF_SWI1 1
#define CONFIG_HAS_HW_NRF_SWI2 1
#define CONFIG_HAS_HW_NRF_SWI3 1
#define CONFIG_HAS_HW_NRF_SWI4 1
#define CONFIG_HAS_HW_NRF_SWI5 1
#define CONFIG_HAS_HW_NRF_TEMP 1
#define CONFIG_HAS_HW_NRF_TWI0 1
#define CONFIG_HAS_HW_NRF_USBD 1
#define CONFIG_HAS_HW_NRF_WDT0 1
#define CONFIG_SOC_NRF52840 1
#define CONFIG_SOC_NRF52840_QIAA 1
#define CONFIG_SOC_DCDC_NRF52X 1
#define CONFIG_SOC_DCDC_NRF52X_HV 1
#define CONFIG_NRF_ENABLE_ICACHE 1
#define CONFIG_NRF_RTC_TIMER_USER_CHAN_COUNT 0
#define CONFIG_NRF_SOC_SECURE_SUPPORTED 1
#define CONFIG_NRF_ACL_FLASH_REGION_SIZE 0x0
#define CONFIG_NRF_APPROTECT_USE_UICR 1
#define CONFIG_SOC_COMPATIBLE_NRF 1
#define CONFIG_SOC_COMPATIBLE_NRF52X 1
#define CONFIG_ARCH "arm"
#define CONFIG_CPU_CORTEX 1
#define CONFIG_CPU_CORTEX_M 1
#define CONFIG_ISA_THUMB2 1
#define CONFIG_ASSEMBLER_ISA_THUMB2 1
#define CONFIG_COMPILER_ISA_THUMB2 1
#define CONFIG_STACK_ALIGN_DOUBLE_WORD 1
#define CONFIG_FAULT_DUMP 2
#define CONFIG_ARM_STORE_EXC_RETURN 1
#define CONFIG_FP_HARDABI 1
#define CONFIG_FP16 1
#define CONFIG_FP16_IEEE 1
#define CONFIG_CPU_CORTEX_M4 1
#define CONFIG_CPU_CORTEX_M_HAS_SYSTICK 1
#define CONFIG_CPU_CORTEX_M_HAS_DWT 1
#define CONFIG_CPU_CORTEX_M_HAS_BASEPRI 1
#define CONFIG_CPU_CORTEX_M_HAS_VTOR 1
#define CONFIG_CPU_CORTEX_M_HAS_PROGRAMMABLE_FAULT_PRIOS 1
#define CONFIG_ARMV7_M_ARMV8_M_MAINLINE 1
#define CONFIG_ARMV7_M_ARMV8_M_FP 1
#define CONFIG_GEN_ISR_TABLES 1
#define CONFIG_NULL_POINTER_EXCEPTION_DETECTION_NONE 1
#define CONFIG_GEN_IRQ_VECTOR_TABLE 1
#define CONFIG_ARM_MPU 1
#define CONFIG_ARM_MPU_REGION_MIN_ALIGN_AND_SIZE 32
#define CONFIG_MPU_ALLOW_FLASH_WRITE 1
#define CONFIG_CUSTOM_SECTION_MIN_ALIGN_SIZE 32
#define CONFIG_ARM 1
#define CONFIG_ARCH_IS_SET 1
#define CONFIG_LITTLE_ENDIAN 1
#define CONFIG_SRAM_SIZE 256
#define CONFIG_SRAM_BASE_ADDRESS 0x20000000
#define CONFIG_PRIVILEGED_STACK_SIZE 1024
#define CONFIG_KOBJECT_TEXT_AREA 256
#define CONFIG_KOBJECT_DATA_AREA_RESERVE_EXTRA_PERCENT 100
#define CONFIG_KOBJECT_RODATA_AREA_EXTRA_BYTES 16
#define CONFIG_GEN_PRIV_STACKS 1
#define CONFIG_ARCH_IRQ_VECTOR_TABLE_ALIGN 4
#define CONFIG_IRQ_VECTOR_TABLE_JUMP_BY_ADDRESS 1
#define CONFIG_GEN_SW_ISR_TABLE 1
#define CONFIG_ARCH_SW_ISR_TABLE_ALIGN 4
#define CONFIG_GEN_IRQ_START_VECTOR 0
#define CONFIG_ARCH_HAS_SINGLE_THREAD_SUPPORT 1
#define CONFIG_ARCH_HAS_TIMING_FUNCTIONS 1
#define CONFIG_ARCH_HAS_STACK_PROTECTION 1
#define CONFIG_ARCH_HAS_USERSPACE 1
#define CONFIG_ARCH_HAS_EXECUTABLE_PAGE_BIT 1
#define CONFIG_ARCH_HAS_RAMFUNC_SUPPORT 1
#define CONFIG_ARCH_HAS_NESTED_EXCEPTION_DETECTION 1
#define CONFIG_ARCH_SUPPORTS_COREDUMP 1
#define CONFIG_ARCH_SUPPORTS_ARCH_HW_INIT 1
#define CONFIG_ARCH_SUPPORTS_ROM_START 1
#define CONFIG_ARCH_HAS_EXTRA_EXCEPTION_INFO 1
#define CONFIG_ARCH_HAS_THREAD_LOCAL_STORAGE 1
#define CONFIG_ARCH_HAS_SUSPEND_TO_RAM 1
#define CONFIG_ARCH_HAS_THREAD_ABORT 1
#define CONFIG_ARCH_HAS_CODE_DATA_RELOCATION 1
#define CONFIG_CPU_HAS_FPU 1
#define CONFIG_CPU_HAS_MPU 1
#define CONFIG_MPU 1
#define CONFIG_MPU_REQUIRES_POWER_OF_TWO_ALIGNMENT 1
#define CONFIG_SRAM_REGION_PERMISSIONS 1
#define CONFIG_FPU_SHARING 1
#define CONFIG_TOOLCHAIN_HAS_BUILTIN_FFS 1
#define CONFIG_MULTITHREADING 1
#define CONFIG_NUM_COOP_PRIORITIES 16
#define CONFIG_NUM_PREEMPT_PRIORITIES 15
#define CONFIG_MAIN_THREAD_PRIORITY 0
#define CONFIG_COOP_ENABLED 1
#define CONFIG_PREEMPT_ENABLED 1
#define CONFIG_PRIORITY_CEILING -127
#define CONFIG_NUM_METAIRQ_PRIORITIES 0
#define CONFIG_ISR_STACK_SIZE 2048
#define CONFIG_THREAD_STACK_INFO 1
#define CONFIG_LIBC_ERRNO 1
#define CONFIG_ERRNO 1
#define CONFIG_SCHED_DUMB 1
#define CONFIG_WAITQ_DUMB 1
#define CONFIG_BOOT_BANNER 1
#define CONFIG_BOOT_BANNER_STRING "Booting Zephyr OS build"
#define CONFIG_BOOT_DELAY 0
#define CONFIG_SYSTEM_WORKQUEUE_PRIORITY -1
#define CONFIG_BARRIER_OPERATIONS_ARCH 1
#define CONFIG_ATOMIC_OPERATIONS_BUILTIN 1
#define CONFIG_TIMESLICING 1
#define CONFIG_TIMESLICE_SIZE 0
#define CONFIG_TIMESLICE_PRIORITY 0
#define CONFIG_POLL 1
#define CONFIG_NUM_MBOX_ASYNC_MSGS 10
#define CONFIG_KERNEL_MEM_POOL 1
#define CONFIG_ARCH_HAS_CUSTOM_SWAP_TO_MAIN 1
#define CONFIG_SWAP_NONATOMIC 1
#define CONFIG_SYS_CLOCK_EXISTS 1
#define CONFIG_TIMEOUT_64BIT 1
#define CONFIG_SYS_CLOCK_MAX_TIMEOUT_DAYS 365
#define CONFIG_XIP 1
#define CONFIG_KERNEL_INIT_PRIORITY_OBJECTS 30
#define CONFIG_KERNEL_INIT_PRIORITY_DEFAULT 40
#define CONFIG_KERNEL_INIT_PRIORITY_DEVICE 50
#define CONFIG_APPLICATION_INIT_PRIORITY 90
#define CONFIG_STACK_POINTER_RANDOM 0
#define CONFIG_MP_NUM_CPUS 1
#define CONFIG_TICKLESS_KERNEL 1
#define CONFIG_TOOLCHAIN_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_THREAD_LOCAL_STORAGE 1
#define CONFIG_ADC 1
#define CONFIG_ADC_CONFIGURABLE_INPUTS 1
#define CONFIG_ADC_NRFX_SAADC 1
#define CONFIG_BT_BUF_CMD_TX_SIZE 65
#define CONFIG_BT_ATT_ENFORCE_FLOW 1
#define CONFIG_CLOCK_CONTROL_NRF 1
#define CONFIG_CLOCK_CONTROL_NRF_K32SRC_XTAL 1
#define CONFIG_CLOCK_CONTROL_NRF_K32SRC_50PPM 1
#define CONFIG_CLOCK_CONTROL_NRF_ACCURACY 50
#define CONFIG_ENTROPY_GENERATOR 1
#define CONFIG_ENTROPY_INIT_PRIORITY 50
#define CONFIG_ENTROPY_NRF5_RNG 1
#define CONFIG_ENTROPY_NRF5_BIAS_CORRECTION 1
#define CONFIG_ENTROPY_NRF5_THR_POOL_SIZE 8
#define CONFIG_ENTROPY_NRF5_THR_THRESHOLD 4
#define CONFIG_ENTROPY_NRF5_ISR_POOL_SIZE 16
#define CONFIG_ENTROPY_NRF5_ISR_THRESHOLD 12
#define CONFIG_ENTROPY_BT_HCI 1
#define CONFIG_ENTROPY_HAS_DRIVER 1
#define CONFIG_FLASH_HAS_DRIVER_ENABLED 1
#define CONFIG_FLASH_HAS_PAGE_LAYOUT 1
#define CONFIG_FLASH 1
#define CONFIG_FLASH_PAGE_LAYOUT 1
#define CONFIG_FLASH_INIT_PRIORITY 50
#define CONFIG_SOC_FLASH_NRF 1
#define CONFIG_SOC_FLASH_NRF_RADIO_SYNC_TICKER 1
#define CONFIG_SOC_FLASH_NRF_TIMEOUT_MULTIPLIER 10
#define CONFIG_GPIO_NRFX 1
#define CONFIG_GPIO_NRFX_INTERRUPT 1
#define CONFIG_HWINFO 1
#define CONFIG_HWINFO_NRF 1
#define CONFIG_INTC_INIT_PRIORITY 40
#define CONFIG_1ST_LEVEL_INTERRUPT_BITS 8
#define CONFIG_2ND_LEVEL_INTERRUPT_BITS 8
#define CONFIG_3RD_LEVEL_INTERRUPT_BITS 8
#define CONFIG_KSCAN 1
#define CONFIG_KSCAN_INIT_PRIORITY 90
#define CONFIG_PINCTRL_STORE_REG 1
#define CONFIG_PINCTRL_NRF 1
#define CONFIG_SENSOR 1
#define CONFIG_SENSOR_INIT_PRIORITY 90
#define CONFIG_VCMP_IT8XXX2_INIT_PRIORITY 90
#define CONFIG_TEMP_NRF5 1
#define CONFIG_TMP112_FULL_SCALE_RUNTIME 1
#define CONFIG_TMP112_SAMPLING_FREQUENCY_RUNTIME 1
#define CONFIG_SYSTEM_CLOCK_INIT_PRIORITY 0
#define CONFIG_TICKLESS_CAPABLE 1
#define CONFIG_SYSTEM_TIMER_HAS_DISABLE_SUPPORT 1
#define CONFIG_SYSTEM_CLOCK_WAIT_FOR_STABILITY 1
#define CONFIG_USB_DEVICE_DRIVER 1
#define CONFIG_USB_DEVICE_REMOTE_WAKEUP 1
#define CONFIG_USB_NRFX_EVT_QUEUE_SIZE 32
#define CONFIG_USB_NRFX_WORK_QUEUE_STACK_SIZE 1024
#define CONFIG_USB_NRFX_ATTACHED_EVENT_DELAY 0
#define CONFIG_FULL_LIBC_SUPPORTED 1
#define CONFIG_MINIMAL_LIBC_SUPPORTED 1
#define CONFIG_NEWLIB_LIBC_SUPPORTED 1
#define CONFIG_PICOLIBC_SUPPORTED 1
#define CONFIG_PICOLIBC 1
#define CONFIG_HAS_NEWLIB_LIBC_NANO 1
#define CONFIG_COMMON_LIBC_ABORT 1
#define CONFIG_COMMON_LIBC_MALLOC 1
#define CONFIG_COMMON_LIBC_MALLOC_ARENA_SIZE -1
#define CONFIG_COMMON_LIBC_CALLOC 1
#define CONFIG_COMMON_LIBC_REALLOCARRAY 1
#define CONFIG_PICOLIBC_HEAP_SIZE -2
#define CONFIG_PICOLIBC_IO_LONG_LONG 1
#define CONFIG_NEED_LIBC_MEM_PARTITION 1
#define CONFIG_CRC 1
#define CONFIG_NOTIFY 1
#define CONFIG_ONOFF 1
#define CONFIG_HAS_POWEROFF 1
#define CONFIG_CBPRINTF_NANO 1
#define CONFIG_CBPRINTF_FULL_INTEGRAL 1
#define CONFIG_SYS_HEAP_ALLOC_LOOPS 3
#define CONFIG_SYS_HEAP_SMALL_ONLY 1
#define CONFIG_POSIX_MAX_FDS 4
#define CONFIG_SEM_VALUE_MAX 32767
#define CONFIG_MAX_TIMER_COUNT 5
#define CONFIG_TIMER_CREATE_WAIT 100
#define CONFIG_TIMER_DELAYTIMER_MAX 20
#define CONFIG_ACPI_HID_LEN_MAX 12
#define CONFIG_LIBGCC_RTLIB 1
#define CONFIG_BT 1
#define CONFIG_BT_HCI 1
#define CONFIG_BT_PERIPHERAL 1
#define CONFIG_BT_BROADCASTER 1
#define CONFIG_BT_CONN 1
#define CONFIG_BT_CONN_TX 1
#define CONFIG_BT_PHY_UPDATE 1
#define CONFIG_BT_DATA_LEN_UPDATE 1
#define CONFIG_BT_BUF_ACL_TX_SIZE 27
#define CONFIG_BT_BUF_ACL_TX_COUNT 3
#define CONFIG_BT_BUF_ACL_RX_SIZE 69
#define CONFIG_BT_BUF_ACL_RX_COUNT 3
#define CONFIG_BT_BUF_EVT_RX_SIZE 68
#define CONFIG_BT_BUF_EVT_RX_COUNT 3
#define CONFIG_BT_BUF_EVT_DISCARDABLE_SIZE 43
#define CONFIG_BT_BUF_EVT_DISCARDABLE_COUNT 3
#define CONFIG_BT_BUF_CMD_TX_COUNT 2
#define CONFIG_BT_HAS_HCI_VS 1
#define CONFIG_BT_HCI_VS 1
#define CONFIG_BT_RPA 1
#define CONFIG_BT_ASSERT 1
#define CONFIG_BT_ASSERT_VERBOSE 1
#define CONFIG_BT_DEBUG_NONE 1
#define CONFIG_BT_LONG_WQ 1
#define CONFIG_BT_LONG_WQ_STACK_SIZE 1300
#define CONFIG_BT_LONG_WQ_PRIO 10
#define CONFIG_BT_LONG_WQ_INIT_PRIO 50
#define CONFIG_BT_HCI_HOST 1
#define CONFIG_BT_HCI_TX_STACK_SIZE 768
#define CONFIG_BT_HCI_TX_PRIO 7
#define CONFIG_BT_HCI_RESERVE 0
#define CONFIG_BT_RECV_BLOCKING 1
#define CONFIG_BT_RX_STACK_SIZE 2200
#define CONFIG_BT_RX_PRIO 8
#define CONFIG_BT_DRIVER_RX_HIGH_PRIO 6
#define CONFIG_BT_SETTINGS 1
#define CONFIG_BT_SETTINGS_CCC_LAZY_LOADING 1
#define CONFIG_BT_SETTINGS_DELAYED_STORE 1
#define CONFIG_BT_SETTINGS_DELAYED_STORE_MS 1000
#define CONFIG_BT_SETTINGS_CCC_STORE_ON_WRITE 1
#define CONFIG_BT_SETTINGS_CF_STORE_ON_WRITE 1
#define CONFIG_BT_SETTINGS_USE_PRINTK 1
#define CONFIG_BT_LIM_ADV_TIMEOUT 30
#define CONFIG_BT_CONN_TX_USER_DATA_SIZE 8
#define CONFIG_BT_AUTO_PHY_UPDATE 1
#define CONFIG_BT_AUTO_DATA_LEN_UPDATE 1
#define CONFIG_BT_SMP 1
#define CONFIG_BT_SMP_APP_PAIRING_ACCEPT 1
#define CONFIG_BT_SMP_SC_PAIR_ONLY 1
#define CONFIG_BT_BONDABLE 1
#define CONFIG_BT_SMP_ENFORCE_MITM 1
#define CONFIG_BT_SMP_MIN_ENC_KEY_SIZE 7
#define CONFIG_BT_L2CAP_TX_FRAG_COUNT 2
#define CONFIG_BT_L2CAP_TX_MTU 65
#define CONFIG_BT_L2CAP_RESCHED_MS 1000
#define CONFIG_BT_ATT_PREPARE_COUNT 0
#define CONFIG_BT_ATT_RETRY_ON_SEC_ERR 1
#define CONFIG_BT_GATT_SERVICE_CHANGED 1
#define CONFIG_BT_GATT_CACHING 1
#define CONFIG_BT_GATT_ENFORCE_SUBSCRIPTION 1
#define CONFIG_BT_GATT_READ_MULTIPLE 1
#define CONFIG_BT_GATT_READ_MULT_VAR_LEN 1
#define CONFIG_BT_GAP_PERIPHERAL_PREF_PARAMS 1
#define CONFIG_BT_DEVICE_NAME_GATT_WRITABLE 1
#define CONFIG_DEVICE_NAME_GATT_WRITABLE_ENCRYPT 1
#define CONFIG_BT_DIS 1
#define CONFIG_BT_DIS_PNP 1
#define CONFIG_BT_DIS_PNP_VID_SRC 1
#define CONFIG_BT_DIS_PNP_VER 0x1
#define CONFIG_BT_BAS 1
#define CONFIG_BT_CREATE_CONN_TIMEOUT 3
#define CONFIG_BT_CONN_PARAM_UPDATE_TIMEOUT 5000
#define CONFIG_BT_CONN_PARAM_RETRY_COUNT 3
#define CONFIG_BT_CONN_PARAM_RETRY_TIMEOUT 5000
#define CONFIG_BT_DEVICE_NAME_DYNAMIC 1
#define CONFIG_BT_DEVICE_NAME_MAX 28
#define CONFIG_BT_ID_MAX 1
#define CONFIG_BT_ECC 1
#define CONFIG_BT_CTLR_LE_ENC_SUPPORT 1
#define CONFIG_BT_CTLR_CONN_PARAM_REQ_SUPPORT 1
#define CONFIG_BT_CTLR_EXT_REJ_IND_SUPPORT 1
#define CONFIG_BT_CTLR_PER_INIT_FEAT_XCHG_SUPPORT 1
#define CONFIG_BT_CTLR_DATA_LEN_UPDATE_SUPPORT 1
#define CONFIG_BT_CTLR_PRIVACY_SUPPORT 1
#define CONFIG_BT_CTLR_EXT_SCAN_FP_SUPPORT 1
#define CONFIG_BT_CTLR_PHY_UPDATE_SUPPORT 1
#define CONFIG_BT_CTLR_PHY_2M_SUPPORT 1
#define CONFIG_BT_CTLR_PHY_CODED_SUPPORT 1
#define CONFIG_BT_CTLR_ADV_EXT_SUPPORT 1
#define CONFIG_BT_CTLR_ADV_PERIODIC_SUPPORT 1
#define CONFIG_BT_CTLR_SYNC_PERIODIC_SUPPORT 1
#define CONFIG_BT_CTLR_ADV_ISO_SUPPORT 1
#define CONFIG_BT_CTLR_SYNC_ISO_SUPPORT 1
#define CONFIG_BT_CTLR_CENTRAL_ISO_SUPPORT 1
#define CONFIG_BT_CTLR_PERIPHERAL_ISO_SUPPORT 1
#define CONFIG_BT_CTLR_CHAN_SEL_2_SUPPORT 1
#define CONFIG_BT_CTLR_MIN_USED_CHAN_SUPPORT 1
#define CONFIG_BT_CTLR_SCA_UPDATE_SUPPORT 1
#define CONFIG_BT_CTLR_CONN_RSSI_SUPPORT 1
#define CONFIG_BT_LL_SW_SPLIT 1
#define CONFIG_BT_CTLR_CRYPTO 1
#define CONFIG_BT_CTLR_HCI_VS_BUILD_INFO ""
#define CONFIG_BT_CTLR_RX_BUFFERS 1
#define CONFIG_BT_CTLR_TX_PWR_0 1
#define CONFIG_BT_CTLR_TX_PWR_DBM 0
#define CONFIG_BT_CTLR_LE_ENC 1
#define CONFIG_BT_CTLR_CONN_PARAM_REQ 1
#define CONFIG_BT_CTLR_EXT_REJ_IND 1
#define CONFIG_BT_CTLR_PER_INIT_FEAT_XCHG 1
#define CONFIG_BT_CTLR_LE_PING 1
#define CONFIG_BT_CTLR_DATA_LENGTH 1
#define CONFIG_BT_CTLR_DATA_LENGTH_MAX 69
#define CONFIG_BT_CTLR_PHY 1
#define CONFIG_BT_CTLR_MIN_USED_CHAN 1
#define CONFIG_BT_CTLR_FILTER_ACCEPT_LIST 1
#define CONFIG_BT_CTLR_PRIVACY 1
#define CONFIG_BT_CTLR_FAL_SIZE 8
#define CONFIG_BT_CTLR_RL_SIZE 8
#define CONFIG_BT_CTLR_CHAN_SEL_2 1
#define CONFIG_BT_LLL_VENDOR_NORDIC 1
#define CONFIG_BT_CTLR_XTAL_ADVANCED_SUPPORT 1
#define CONFIG_BT_CTLR_SCHED_ADVANCED_SUPPORT 1
#define CONFIG_BT_CTLR_TIFS_HW_SUPPORT 1
#define CONFIG_BT_CTLR_ULL_LLL_PRIO_SUPPORT 1
#define CONFIG_BT_CTLR_RX_PRIO_STACK_SIZE 448
#define CONFIG_BT_CTLR_COMPANY_ID 0x05F1
#define CONFIG_BT_CTLR_SUBVERSION_NUMBER 0xFFFF
#define CONFIG_BT_CTLR_AD_DATA_BACKUP 1
#define CONFIG_BT_CTLR_ADV_DATA_BUF_MAX 1
#define CONFIG_BT_CTLR_OPTIMIZE_FOR_SPEED 1
#define CONFIG_BT_CTLR_XTAL_ADVANCED 1
#define CONFIG_BT_CTLR_XTAL_THRESHOLD 1500
#define CONFIG_BT_CTLR_ASSERT_OVERHEAD_START 1
#define CONFIG_BT_CTLR_EVENT_OVERHEAD_RESERVE_MAX 1
#define CONFIG_BT_CTLR_SLOT_RESERVATION_UPDATE 1
#define CONFIG_BT_CTLR_LLL_PRIO 0
#define CONFIG_BT_CTLR_ULL_HIGH_PRIO 1
#define CONFIG_BT_CTLR_ULL_LOW_PRIO 1
#define CONFIG_BT_CTLR_RADIO_ENABLE_FAST 1
#define CONFIG_BT_CTLR_LLCP_CONN 1
#define CONFIG_BT_CTLR_LLCP_TX_PER_CONN_TX_CTRL_BUF_NUM_MAX 4
#define CONFIG_BT_CTLR_LLCP_PER_CONN_TX_CTRL_BUF_NUM 4
#define CONFIG_BT_CTLR_LLCP_COMMON_TX_CTRL_BUF_NUM 0
#define CONFIG_BT_CTLR_LLCP_LOCAL_PROC_CTX_BUF_NUM 6
#define CONFIG_BT_CTLR_LLCP_REMOTE_PROC_CTX_BUF_NUM 1
#define CONFIG_BT_CTLR_FORCE_MD_COUNT 0
#define CONFIG_BT_CTLR_CONN_RANDOM_FORCE 1
#define CONFIG_BT_MAYFLY_YIELD_AFTER_CALL 1
#define CONFIG_BT_TICKER_UPDATE 1
#define CONFIG_BT_TICKER_NEXT_SLOT_GET 1
#define CONFIG_BT_TICKER_REMAINDER_GET 1
#define CONFIG_BT_TICKER_NEXT_SLOT_GET_MATCH 1
#define CONFIG_BT_TICKER_EXT 1
#define CONFIG_BT_CTLR_DTM_HCI_SUPPORT 1
#define CONFIG_BT_CRYPTO 1
#define CONFIG_BT_COMPANY_ID 0x05F1
#define CONFIG_PRINTK 1
#define CONFIG_EARLY_CONSOLE 1
#define CONFIG_ASSERT_VERBOSE 1
#define CONFIG_NVS 1
#define CONFIG_MEM_ATTR 1
#define CONFIG_NET_BUF 1
#define CONFIG_TIMER_RANDOM_INITIAL_STATE 123456789
#define CONFIG_XOSHIRO_RANDOM_GENERATOR 1
#define CONFIG_CSPRNG_ENABLED 1
#define CONFIG_HARDWARE_DEVICE_CS_GENERATOR 1
#define CONFIG_SETTINGS_DYNAMIC_HANDLERS 1
#define CONFIG_SETTINGS_NVS 1
#define CONFIG_SETTINGS_NVS_SECTOR_SIZE_MULT 1
#define CONFIG_SETTINGS_NVS_SECTOR_COUNT 8
#define CONFIG_FLASH_MAP 1
#define CONFIG_COVERAGE_GCOV_HEAP_SIZE 16384
#define CONFIG_USB_DEVICE_SN "0123456789ABCDEF"
#define CONFIG_USB_MAX_NUM_TRANSFERS 4
#define CONFIG_USB_REQUEST_BUFFER_SIZE 128
#define CONFIG_USB_MAX_ALT_SETTING 8
#define CONFIG_USB_SELF_POWERED 1
#define CONFIG_USB_MAX_POWER 50
#define CONFIG_TOOLCHAIN_ZEPHYR_0_16 1
#define CONFIG_TOOLCHAIN_ZEPHYR_SUPPORTS_THREAD_LOCAL_STORAGE 1
#define CONFIG_LINKER_ORPHAN_SECTION_WARN 1
#define CONFIG_HAS_FLASH_LOAD_OFFSET 1
#define CONFIG_FLASH_LOAD_SIZE 0xc6000
#define CONFIG_LD_LINKER_SCRIPT_SUPPORTED 1
#define CONFIG_LD_LINKER_TEMPLATE 1
#define CONFIG_KERNEL_ENTRY "__start"
#define CONFIG_LINKER_SORT_BY_ALIGNMENT 1
#define CONFIG_SRAM_OFFSET 0x0
#define CONFIG_LINKER_GENERIC_SECTIONS_PRESENT_AT_BOOT 1
#define CONFIG_LINKER_LAST_SECTION_ID 1
#define CONFIG_LINKER_LAST_SECTION_ID_PATTERN 0xE015E015
#define CONFIG_LINKER_USE_RELAX 1
#define CONFIG_SIZE_OPTIMIZATIONS 1
#define CONFIG_COMPILER_TRACK_MACRO_EXPANSION 1
#define CONFIG_COMPILER_COLOR_DIAGNOSTICS 1
#define CONFIG_FORTIFY_SOURCE_COMPILE_TIME 1
#define CONFIG_COMPILER_OPT ""
#define CONFIG_RUNTIME_ERROR_CHECKS 1
#define CONFIG_OUTPUT_STAT 1
#define CONFIG_OUTPUT_PRINT_MEMORY_USAGE 1
#define CONFIG_BUILD_OUTPUT_UF2 1
#define CONFIG_BUILD_OUTPUT_UF2_FAMILY_ID "0xada52840"
#define CONFIG_APPLICATION_DEFINED_SYSCALL 1
#define CONFIG_BUILD_OUTPUT_STRIP_PATHS 1
#define CONFIG_CHECK_INIT_PRIORITIES 1
#define CONFIG_DEPRECATED 1
#define CONFIG_WARN_DEPRECATED 1
#define CONFIG_ENFORCE_ZEPHYR_STDINT 1
#define CONFIG_COMPAT_INCLUDES 1