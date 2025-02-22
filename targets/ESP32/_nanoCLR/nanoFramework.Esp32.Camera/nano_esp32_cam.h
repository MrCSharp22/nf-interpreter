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

#ifndef NANO_ESP32_CAM_H
#define NANO_ESP32_CAM_H

#include <nanoCLR_Interop.h>
#include <nanoCLR_Runtime.h>
#include <nanoPackStruct.h>
#include <corlib_native.h>
#include <esp_camera.h>

struct Library_nano_esp32_cam_nanoFramework_Esp32_Camera_Camera
{
    static const int FIELD___syncLock = 1;
    static const int FIELD___cameraConnectionSettings = 2;
    static const int FIELD___disposed = 3;

    NANOCLR_NATIVE_DECLARE(NativeInit___VOID);
    NANOCLR_NATIVE_DECLARE(NativeGrabJPEG___SZARRAY_U1);
    NANOCLR_NATIVE_DECLARE(NativeDispose___VOID);

    //--//
};

struct Library_nano_esp32_cam_nanoFramework_Esp32_Camera_CameraConnectionSettings
{
    // auto-property backing field renamed to 'CAM_PIN_PWDN_k__BackingField'
    static const int FIELD__CAM_PIN_PWDN_k__BackingField = 1;
    // auto-property backing field renamed to 'CAM_PIN_RESET_k__BackingField'
    static const int FIELD__CAM_PIN_RESET_k__BackingField = 2;
    // auto-property backing field renamed to 'CAM_PIN_XCLK_k__BackingField'
    static const int FIELD__CAM_PIN_XCLK_k__BackingField = 3;
    // auto-property backing field renamed to 'CAM_PIN_SIOD_k__BackingField'
    static const int FIELD__CAM_PIN_SIOD_k__BackingField = 4;
    // auto-property backing field renamed to 'CAM_PIN_SIOC_k__BackingField'
    static const int FIELD__CAM_PIN_SIOC_k__BackingField = 5;
    // auto-property backing field renamed to 'CAM_PIN_D7_k__BackingField'
    static const int FIELD__CAM_PIN_D7_k__BackingField = 6;
    // auto-property backing field renamed to 'CAM_PIN_D6_k__BackingField'
    static const int FIELD__CAM_PIN_D6_k__BackingField = 7;
    // auto-property backing field renamed to 'CAM_PIN_D5_k__BackingField'
    static const int FIELD__CAM_PIN_D5_k__BackingField = 8;
    // auto-property backing field renamed to 'CAM_PIN_D4_k__BackingField'
    static const int FIELD__CAM_PIN_D4_k__BackingField = 9;
    // auto-property backing field renamed to 'CAM_PIN_D3_k__BackingField'
    static const int FIELD__CAM_PIN_D3_k__BackingField = 10;
    // auto-property backing field renamed to 'CAM_PIN_D2_k__BackingField'
    static const int FIELD__CAM_PIN_D2_k__BackingField = 11;
    // auto-property backing field renamed to 'CAM_PIN_D1_k__BackingField'
    static const int FIELD__CAM_PIN_D1_k__BackingField = 12;
    // auto-property backing field renamed to 'CAM_PIN_D0_k__BackingField'
    static const int FIELD__CAM_PIN_D0_k__BackingField = 13;
    // auto-property backing field renamed to 'CAM_PIN_VSYNC_k__BackingField'
    static const int FIELD__CAM_PIN_VSYNC_k__BackingField = 14;
    // auto-property backing field renamed to 'CAM_PIN_HREF_k__BackingField'
    static const int FIELD__CAM_PIN_HREF_k__BackingField = 15;
    // auto-property backing field renamed to 'CAM_PIN_PCLK_k__BackingField'
    static const int FIELD__CAM_PIN_PCLK_k__BackingField = 16;

    //--//
};

extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_nanoFramework_Esp32_Camera;

#endif // NANO_ESP32_CAM_H
