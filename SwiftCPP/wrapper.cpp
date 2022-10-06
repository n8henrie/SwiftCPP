//
//  HelloWorldWrapper.m
//  SwiftCPP
//
//  Created by Anurag Ajwani on 14/09/2020.
//

#include "HelloWorld.hpp"
#include "wrapper.h"

const void * HelloWorld_initialize() {
    HelloWorld *hw = new HelloWorld();
    return (void *)hw;
}

const char *HelloWorld_sayHello(const void *object) {
    HelloWorld *hw;
    hw = (HelloWorld *)object;

    static char retval[2048];
    std::strcpy(retval, (hw -> sayHello()).c_str());
    return retval;
}
