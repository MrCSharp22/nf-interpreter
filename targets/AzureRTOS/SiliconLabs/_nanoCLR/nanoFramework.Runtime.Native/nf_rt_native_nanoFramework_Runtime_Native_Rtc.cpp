//
// Copyright (c) .NET Foundation and Contributors
// See LICENSE file in the project root for full license information.
//

#include <nf_rt_native.h>
#include <sl_sleeptimer.h>

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// these functions are the real implementation of the 'weak' ones declared at
// src\CLR\Runtime.Native\nf_rt_native_nanoFramework_Runtime_Native_Rtc_stubs.cpp // the stubs for this class are
// generated by nanoFramework.Runtime.Native //
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// for all these to work we need the RTC to be enabled
#if !defined(HAL_USE_RTC)
#error "Need the RTC to be enabled. Please set CMake option NF_FEATURE_RTC to ON."
#endif

HRESULT Library_nf_rt_native_nanoFramework_Runtime_Native_Rtc::
    Native_RTC_SetSystemTime___STATIC__BOOLEAN__I4__U1__U1__U1__U1__U1__U1(CLR_RT_StackFrame &stack)
{
    NANOCLR_HEADER();

#if (HAL_USE_RTC == TRUE)

    sl_sleeptimer_date_t newTime;

    newTime.year = stack.Arg0().NumericByRef().s4 - 1900; // Gecko SDK time base is 1900-01-01
    newTime.month = (uint8_t)stack.Arg1().NumericByRef().u1;
    newTime.month_day = stack.Arg2().NumericByRef().u1;
    newTime.day_of_week = stack.Arg3().NumericByRef().u1;
    newTime.hour = stack.Arg4().NumericByRef().u1;
    newTime.min = stack.Arg5().NumericByRef().u1;
    newTime.sec = stack.Arg6().NumericByRef().u1;
    newTime.time_zone = 0;

    // set RTC time
    sl_sleeptimer_set_datetime(&newTime);

    // Return value to the managed application
    stack.SetResult_Boolean(true);

    NANOCLR_NOCLEANUP_NOLABEL();

#else

    (void)stack;

    NANOCLR_SET_AND_LEAVE(CLR_E_NOT_SUPPORTED);

    NANOCLR_NOCLEANUP();

#endif // (HAL_USE_RTC == TRUE)
}