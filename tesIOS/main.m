//
//  main.m
//  tesIOS
//
//  Created by B612 on 2019/7/15.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "platform.h"

int main(int argc, char * argv[]) {
    if (PLATFORM==PLATFORM_MAC) {
        NSLog(@"Current platform is PLATFORM_MAC");
        
        
    } else if(PLATFORM==PLATFORM_IOS) {
        NSLog(@"Current platform is PLATFORM_IOS");
        
        
        
    }else if(PLATFORM==PLATFORM_ANDROID) {
        
        NSLog(@"Current platform is PLATFORM_ANDROID");
        
    }else{
        
        NSLog(@"Current platform is PLATFORM_UNKNOW");
        
    }
    
    @autoreleasepool {
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
    }
    

}
