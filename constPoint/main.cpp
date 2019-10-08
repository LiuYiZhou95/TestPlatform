//
//  main.cpp
//  constPoint
//
//  Created by B612 on 2019/7/19.
//  Copyright © 2019年 action.zhou. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    //定义变量
    int num=1;
    //定义常量
    int const num2=2;
    
    //定义常量指针
    //可以改变指向，不能修改指向的对象
    int const *a=&num;
    //定义指针常量，必须初始化
    //指针本身是一个常量，即初始化之后，指向的地址不能改变，但是可以改变内存的值
    int *const b=&num;
    a=&num2;
    *b=2;
    
    return 0;
}
