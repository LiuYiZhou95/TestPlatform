//
//  platform.h
//  testPlatform
//
//  Created by B612 on 2019/7/15.
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

//#include <iostream>
#include <stdio.h>



#define TEST_PLATOFRM_VERSION 1.0.0

#define PLATFORM_UNKOW 0
#define PLATFORM_ANDROID 1
#define PLATFORM_MAC 2
#define PLATFORM_IOS 3

#define PLATFORM PLATFORM_UNKOW


#if defined(__APPLE__)
    #undef  PLATFORM
    # ifdef __IPHONE_OS_VERSION_MIN_REQUIRED
    #   define PLATFORM PLATFORM_IOS
    # else
    #   define PLATFORM PLATFORM_MAC
    # endif
#elif defined(__ANDROID__)|| defined(ANDROID)
#   undef  PLATFORM
#   define PLATFORM  PLATFORM_ANDROID

#endif

#endif /* platform_h */
