//
//  SKSingleton.h
//  SimpleKit
//
//  Created by SimpleKit on 13-1-21.
//  Copyright (c) 2013年 SimpleKit. All rights reserved.
//

#import <Foundation/Foundation.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-variable"
static void * volatile sharedInstance = nil;
#pragma GCC diagnostic pop

#define DEFINE_SHARED_INSTANCE + (id)sharedInstance {  return [self _sharedInstance:&sharedInstance]; } \
+ (id)allocWithZone:(NSZone *)zone { return [self _allocWithZone:zone forInstance:&sharedInstance]; }

@interface SKSingleton : NSObject

+ (id)sharedInstance;
+ (id)_sharedInstance:(void * volatile *)instance;
+ (id)_allocWithZone:(NSZone *)zone forInstance:(void * volatile *)instance;

@end
