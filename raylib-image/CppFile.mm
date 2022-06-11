//
//  CppFile.cpp
//  raylib-cpp-mm
//
//  Created by Zhifeng Chen on 2022/6/10.
//
#import <Foundation/Foundation.h>
#include "CppFile.h"

std::string CppFile::print_cpp_Msg(){
    std::cout << "this is cpp file msg " << std::endl;
    return "hello,world";
}

std::string  CppFile::getDirectory(char *file){
    NSBundle * bundle = [NSBundle mainBundle];
    NSString * bundlePath = [bundle resourcePath];
    NSLog(@"bundlepaht=%@",bundlePath);
    
//    NSString *imagePath = [bundle pathForResource:@"raylib_32x32" ofType:@"png"];
    std::string ss = [bundlePath UTF8String];
    std::string ff = file;
    ss=ss+ff;
    return ss;
}
