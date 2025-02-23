//-----------------------------------------------------------------------------
//
//                   ** WARNING! ** 
//    This file was generated automatically by a tool.
//    Re-running the tool will overwrite this file.
//    You should copy this file to a custom location
//    before adding any customization in the copy to
//    prevent loss of your changes when the tool is
//    re-run.
//
//-----------------------------------------------------------------------------

#include "nano_esp32_cam.h"

typedef Library_nano_esp32_cam_nanoFramework_Esp32_Camera_ConnectionSettings ManagedConnectionSettings;

static const char *TAG = "ESP-CAM";

HRESULT Library_nano_esp32_cam_nanoFramework_Esp32_Camera_Camera::NativeInit___VOID( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();

    esp_err_t err = NULL;
    CLR_RT_HeapBlock *conn_settings = NULL;
    camera_config_t *esp_cam_conf = NULL;

    CLR_RT_HeapBlock *pThis = stack.This();
    FAULT_ON_NULL(pThis);

    conn_settings = pThis[FIELD__ConnectionSettings_k__BackingField].Dereference();
    FAULT_ON_NULL(conn_settings);

    esp_cam_conf = &MapToEspCameraConfig(conn_settings);

    // if the power down pin is defined, use it to power up the camera
    if (esp_cam_conf->pin_pwdn != -1) {
        CPU_GPIO_SetDriveMode(esp_cam_conf->pin_pwdn, PinMode_Output);
        CPU_GPIO_SetPinState(esp_cam_conf->pin_pwdn, GpioPinValue_Low);
    }

    err = esp_camera_init(esp_cam_conf);
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "Error initializing the camera");
        NANOCLR_SET_AND_LEAVE(CLR_E_DRIVER_NOT_REGISTERED);
    }

    NANOCLR_SET_AND_LEAVE(S_OK);
    NANOCLR_NOCLEANUP();
}

HRESULT Library_nano_esp32_cam_nanoFramework_Esp32_Camera_Camera::NativeGrabFrame___SZARRAY_U1( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();

    // create a pointer to the return object
    CLR_RT_HeapBlock &img_buff = stack.PushValueAndClear();
    CLR_UINT8 *return_img_buff;

    camera_fb_t *camera_buffer = esp_camera_fb_get();
    if (!camera_buffer) {
        ESP_LOGE(TAG, "Camera Capture Failed");
        NANOCLR_SET_AND_LEAVE(CLR_E_FILE_IO);
    }

    // dereference the byte array
    NANOCLR_CHECK_HRESULT(
        CLR_RT_HeapBlock_Array::CreateInstance(img_buff, camera_buffer->len, g_CLR_RT_WellKnownTypes.m_UInt8)
    );

    return_img_buff = stack.TopValue().DereferenceArray()->GetFirstElement();

    memcpy(return_img_buff, camera_buffer, camera_buffer->len);

    esp_camera_fb_return(camera_buffer);

    NANOCLR_NOCLEANUP();
}

HRESULT Library_nano_esp32_cam_nanoFramework_Esp32_Camera_Camera::NativeDispose___VOID( CLR_RT_StackFrame &stack )
{
    NANOCLR_HEADER();

    esp_err_t err = esp_camera_deinit();
    if (err != ESP_OK) {
        ESP_LOGE(TAG, "Error deinitializing the camera");
        NANOCLR_SET_AND_LEAVE(CLR_E_INVALID_PARAMETER);
    }

    NANOCLR_SET_AND_LEAVE(S_OK);
    NANOCLR_NOCLEANUP();
}

camera_config_t MapToEspCameraConfig(CLR_RT_HeapBlock *connectionSettings) {
    camera_config_t config = {
        .pin_pwdn = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_PWDN_k__BackingField].NumericByRef().s4,
        .pin_reset = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_RESET_k__BackingField].NumericByRef().s4,
        .pin_xclk = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_XCLK_k__BackingField].NumericByRef().s4,
        .pin_sccb_sda = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_SIOD_k__BackingField].NumericByRef().s4,
        .pin_sccb_scl = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_SIOC_k__BackingField].NumericByRef().s4,

        .pin_d7 = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_D7_k__BackingField].NumericByRef().s4,
        .pin_d6 = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_D6_k__BackingField].NumericByRef().s4,
        .pin_d5 = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_D5_k__BackingField].NumericByRef().s4,
        .pin_d4 = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_D4_k__BackingField].NumericByRef().s4,
        .pin_d3 = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_D3_k__BackingField].NumericByRef().s4,
        .pin_d2 = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_D2_k__BackingField].NumericByRef().s4,
        .pin_d1 = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_D1_k__BackingField].NumericByRef().s4,
        .pin_d0 = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_D0_k__BackingField].NumericByRef().s4,
        .pin_vsync = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_VSYNC_k__BackingField].NumericByRef().s4,
        .pin_href = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_HREF_k__BackingField].NumericByRef().s4,
        .pin_pclk = connectionSettings[ManagedConnectionSettings::FIELD__CAM_PIN_PCLK_k__BackingField].NumericByRef().s4,

        .xclk_freq_hz = 20000000,
        .ledc_timer = LEDC_TIMER_0,
        .ledc_channel = LEDC_CHANNEL_0,
    
        .pixel_format = static_cast<pixformat_t>(connectionSettings[ManagedConnectionSettings::FIELD__PixelFormat_k__BackingField].NumericByRef().s4),
        .frame_size = static_cast<framesize_t>(connectionSettings[ManagedConnectionSettings::FIELD__FrameSize_k__BackingField].NumericByRef().s4),

        .jpeg_quality = connectionSettings[ManagedConnectionSettings::FIELD___jpegQuality].NumericByRef().s4,

        .fb_count = 1,
        .grab_mode = CAMERA_GRAB_WHEN_EMPTY
    
    };

    return config;
}
