#ifndef HW3__VISIBILITY_CONTROL_H_
#define HW3__VISIBILITY_CONTROL_H_
#if defined _WIN32 || defined __CYGWIN__
  #ifdef __GNUC__
    #define HW3_EXPORT __attribute__ ((dllexport))
    #define HW3_IMPORT __attribute__ ((dllimport))
  #else
    #define HW3_EXPORT __declspec(dllexport)
    #define HW3_IMPORT __declspec(dllimport)
  #endif
  #ifdef HW3_BUILDING_LIBRARY
    #define HW3_PUBLIC HW3_EXPORT
  #else
    #define HW3_PUBLIC HW3_IMPORT
  #endif
  #define HW3_PUBLIC_TYPE HW3_PUBLIC
  #define HW3_LOCAL
#else
  #define HW3_EXPORT __attribute__ ((visibility("default")))
  #define HW3_IMPORT
  #if __GNUC__ >= 4
    #define HW3_PUBLIC __attribute__ ((visibility("default")))
    #define HW3_LOCAL  __attribute__ ((visibility("hidden")))
  #else
    #define HW3_PUBLIC
    #define HW3_LOCAL
  #endif
  #define HW3_PUBLIC_TYPE
#endif
#endif  // HW3__VISIBILITY_CONTROL_H_
// Generated 31-Oct-2024 09:59:06
// Copyright 2019-2020 The MathWorks, Inc.
