//
//  platform.h
//
//  testPlatform
//  Created by action.zhou. on 2019/7/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

//测试demo
#include "platform.h"

#define OGRE_VERSION_MAJOR 1
#define OGRE_VERSION_MINOR 11
#define OGRE_VERSION_PATCH 2
#define OGRE_VERSION_SUFFIX ""
#define OGRE_VERSION_NAME "Rhagorthua"



#include <iostream>
int main(int argc, const char * argv[]) {
  
    if (PLATFORM==PLATFORM_MAC) {
        std::cout << "Current platform is mac!\n";

    } else if(PLATFORM==PLATFORM_IOS) {
        std::cout << "Current platform is ios!\n";
        
    }else if(PLATFORM==PLATFORM_ANDROID) {
        std::cout << "Current platform is android!\n";

    }else{
        std::cout << "Current platform is none!\n";

    }
    
    return 0;
}

