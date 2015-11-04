//
//  HJDefaultsCache.h
//  HJDefaultsCache
//
//  Created by luo.h on 15-4-17.
//  Copyright (c) 2015年 sibu.cn. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HJDefaultsCache : NSObject


+ (id)objectForKey:(NSString *)key defaultObject:(id)defaultObject;
+ (BOOL)setObject:(id)value forKey:(NSString *)key;

+ (NSString *)stringForKey:(NSString *)key defaultString:(NSString *)defaultString;
+ (BOOL)setString:(NSString *)value forKey:(NSString *)key;

+ (BOOL)boolForKey:(NSString *)key defaultBool:(BOOL)defaultBool;
+ (BOOL)setBool:(BOOL)value forKey:(NSString *)key;

+ (NSInteger)integerForKey:(NSString *)key defaultInteger:(NSInteger)defaultInteger;
+ (BOOL)setInteger:(NSInteger)value forKey:(NSString *)key;

+ (float)floatForKey:(NSString *)key defaultFloat:(float)defaultFloat;
+ (BOOL)setFloat:(float)value forKey:(NSString *)key;

+ (BOOL)removeObjectForKey:(NSString *)key;

@end
