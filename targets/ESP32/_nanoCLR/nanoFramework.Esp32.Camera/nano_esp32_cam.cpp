#include "nano_esp32_cam.h"

// clang-format off

static const CLR_RT_MethodHandler method_lookup[] =
{
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    Library_nano_esp32_cam_nanoFramework_Esp32_Camera_Camera::NativeInit___VOID,
    Library_nano_esp32_cam_nanoFramework_Esp32_Camera_Camera::NativeGrabJPEG___SZARRAY_U1,
    Library_nano_esp32_cam_nanoFramework_Esp32_Camera_Camera::NativeDispose___VOID,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
    NULL,
};

const CLR_RT_NativeAssemblyData g_CLR_AssemblyNative_nanoFramework_Esp32_Camera =
{
    "nanoFramework.Esp32.Camera",
    0x60C76967,
    method_lookup,
    { 100, 0, 0, 0 }
};

// clang-format on
