//
//  platform.h
//
//  testPlatform
//  Created by action.zhou. on 2019/7/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#ifndef platform_h
#define platform_h


/*
 操作系统集合
    PLATFORM_MAC
    PLATFORM_IOS
    PLATFORM_WINDOWS
    PLATFORM_ANDROID
 */

#include <stdio.h>


//测试版本
#define TEST_PLATOFRM_VERSION 1.0.0
//操作系统宏定义
#define PLATFORM_UNKOW 0
#define PLATFORM_ANDROID 1
#define PLATFORM_MAC 2
#define PLATFORM_IOS 3
#define PLATFORM_WIN32 4
//当前默认平台为UNKOW
#define PLATFORM PLATFORM_UNKOW
//macos
#if defined(__APPLE__)
#undef  PLATFORM
//ios
# ifdef __IPHONE_OS_VERSION_MIN_REQUIRED
#   define PLATFORM PLATFORM_IOS
//mac
# else
#   define PLATFORM PLATFORM_MAC
# endif
//Android
#elif defined(__ANDROID__)|| defined(ANDROID)
#   undef  PLATFORM
#   define PLATFORM  PLATFORM_ANDROID
//Windows
#elif (defined( __WIN32__ ) || defined( _WIN32 )) && !defined(__ANDROID__)
#   define PLATFORM  PLATFORM_WIN32

#endif

#endif /* platform_h */
