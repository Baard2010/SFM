/* File generated by C:/NordicSDK/v1.3.1/nrf/scripts/partition_manager_output.py, do not modify */
#ifndef PM_CONFIG_H__
#define PM_CONFIG_H__
#include <autoconf.h>
#define PM_SPM_ADDRESS 0x0
#define PM_SPM_SIZE 0xc000
#define PM_SPM_NAME spm
#define PM_SPM_ID 0
#define PM_spm_ID PM_SPM_ID
#define PM_0_LABEL SPM
#define PM_SPM_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_APP_ADDRESS 0xc000
#define PM_APP_SIZE 0xf4000
#define PM_APP_NAME app
#define PM_APP_ID 1
#define PM_app_ID PM_APP_ID
#define PM_1_LABEL APP
#define PM_APP_DEV_NAME "NRF_FLASH_DRV_NAME"
#define PM_OTP_ADDRESS 0xff8108
#define PM_OTP_SIZE 0x2f4
#define PM_OTP_NAME otp
#define PM_NUM 2
#define PM_ALL_BY_SIZE "otp spm app"
#define PM_ADDRESS 0xc000
#define PM_SIZE 0xf4000
#endif /* PM_CONFIG_H__ */