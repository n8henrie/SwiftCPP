//
//  HelloWorldWrapper.h
//  SwiftCPP
//
//  Created by Anurag Ajwani on 14/09/2020.
//

#ifndef wrapper_h
#define wrapper_h

#ifdef __cplusplus
extern "C" {
#endif

const void *HelloWorld_initialize();
const char *HelloWorld_sayHello(const void *);

#ifdef __cplusplus
}
#endif

#endif /* wrapper_h */
