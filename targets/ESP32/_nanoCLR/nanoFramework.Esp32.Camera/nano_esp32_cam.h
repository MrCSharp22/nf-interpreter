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

typedef enum __nfpack FrameSize
{
    FrameSize_Size96x96 = 0,
    FrameSize_Size160x120 = 1,
    FrameSize_Size128x128 = 2,
    FrameSize_Size176x144 = 3,
    FrameSize_Size240x176 = 4,
    FrameSize_Size240x240 = 5,
    FrameSize_Size320x240 = 6,
    FrameSize_Size320x320 = 7,
    FrameSize_Size400x296 = 8,
    FrameSize_Size480x320 = 9,
    FrameSize_Size640x480 = 10,
    FrameSize_Size800x600 = 11,
    FrameSize_Size1024x768 = 12,
    FrameSize_Size1280x720 = 13,
    FrameSize_Size1280x1024 = 14,
    FrameSize_Size1600x1200 = 15,
    FrameSize_Size1920x1080 = 16,
    FrameSize_Size720x1280 = 17,
    FrameSize_Size864x1536 = 18,
    FrameSize_Size2048x1536 = 19,
    FrameSize_Size2560x1440 = 20,
    FrameSize_Size2560x1600 = 21,
    FrameSize_Size1080x1920 = 22,
    FrameSize_Size2560x1920 = 23,
    FrameSize_Size2592x1944 = 24,
} FrameSize;

typedef enum __nfpack PixelFormat
{
    PixelFormat_Rgb565 = 0,
    PixelFormat_Yuv422 = 1,
    PixelFormat_Yuv420 = 2,
    PixelFormat_Grayscale = 3,
    PixelFormat_Jpeg = 4,
    PixelFormat_Rgb888 = 5,
    PixelFormat_Raw = 6,
    PixelFormat_Rgb444 = 7,
    PixelFormat_Rgb555 = 8,
} PixelFormat;

struct Library_nano_esp32_cam_nanoFramework_Esp32_Camera_Camera
{
    static const int FIELD___syncLock = 1;
    static const int FIELD___disposed = 2;
    // auto-property backing field renamed to 'ConnectionSettings_k__BackingField'
    static const int FIELD__ConnectionSettings_k__BackingField = 3;

    NANOCLR_NATIVE_DECLARE(NativeInit___VOID);
    NANOCLR_NATIVE_DECLARE(NativeGrabFrame___SZARRAY_U1);
    NANOCLR_NATIVE_DECLARE(NativeDispose___VOID);

    //--//
};

struct Library_nano_esp32_cam_nanoFramework_Esp32_Camera_ConnectionSettings
{
    static const int FIELD___jpegQuality = 1;
    // auto-property backing field renamed to 'CAM_PIN_PWDN_k__BackingField'
    static const int FIELD__CAM_PIN_PWDN_k__BackingField = 2;
    // auto-property backing field renamed to 'CAM_PIN_RESET_k__BackingField'
    static const int FIELD__CAM_PIN_RESET_k__BackingField = 3;
    // auto-property backing field renamed to 'CAM_PIN_XCLK_k__BackingField'
    static const int FIELD__CAM_PIN_XCLK_k__BackingField = 4;
    // auto-property backing field renamed to 'CAM_PIN_SIOD_k__BackingField'
    static const int FIELD__CAM_PIN_SIOD_k__BackingField = 5;
    // auto-property backing field renamed to 'CAM_PIN_SIOC_k__BackingField'
    static const int FIELD__CAM_PIN_SIOC_k__BackingField = 6;
    // auto-property backing field renamed to 'CAM_PIN_D7_k__BackingField'
    static const int FIELD__CAM_PIN_D7_k__BackingField = 7;
    // auto-property backing field renamed to 'CAM_PIN_D6_k__BackingField'
    static const int FIELD__CAM_PIN_D6_k__BackingField = 8;
    // auto-property backing field renamed to 'CAM_PIN_D5_k__BackingField'
    static const int FIELD__CAM_PIN_D5_k__BackingField = 9;
    // auto-property backing field renamed to 'CAM_PIN_D4_k__BackingField'
    static const int FIELD__CAM_PIN_D4_k__BackingField = 10;
    // auto-property backing field renamed to 'CAM_PIN_D3_k__BackingField'
    static const int FIELD__CAM_PIN_D3_k__BackingField = 11;
    // auto-property backing field renamed to 'CAM_PIN_D2_k__BackingField'
    static const int FIELD__CAM_PIN_D2_k__BackingField = 12;
    // auto-property backing field renamed to 'CAM_PIN_D1_k__BackingField'
    static const int FIELD__CAM_PIN_D1_k__BackingField = 13;
    // auto-property backing field renamed to 'CAM_PIN_D0_k__BackingField'
    static const int FIELD__CAM_PIN_D0_k__BackingField = 14;
    // auto-property backing field renamed to 'CAM_PIN_VSYNC_k__BackingField'
    static const int FIELD__CAM_PIN_VSYNC_k__BackingField = 15;
    // auto-property backing field renamed to 'CAM_PIN_HREF_k__BackingField'
    static const int FIELD__CAM_PIN_HREF_k__BackingField = 16;
    // auto-property backing field renamed to 'CAM_PIN_PCLK_k__BackingField'
    static const int FIELD__CAM_PIN_PCLK_k__BackingField = 17;
    // auto-property backing field renamed to 'PixelFormat_k__BackingField'
    static const int FIELD__PixelFormat_k__BackingField = 18;
    // auto-property backing field renamed to 'FrameSize_k__BackingField'
    static const int FIELD__FrameSize_k__BackingField = 19;

    //--//
};

extern const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_nanoFramework_Esp32_Camera;

#endif // NANO_ESP32_CAM_H
