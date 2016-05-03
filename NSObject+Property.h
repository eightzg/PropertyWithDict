//
//  NSObject+Property.h
//
//  Created by eightzg on 15/10/22.
//  Copyright © 2015年 yyy. All rights reserved.
//  通过解析字典自动生成属性代码

#import <Foundation/Foundation.h>

@interface NSObject (Property)
/**
 *  将传入的字典转换成属性
 *
 *  @param dict 字典对象
 */
+ (void)createPropertyCodeWithDict:(NSDictionary *)dict;


@end
