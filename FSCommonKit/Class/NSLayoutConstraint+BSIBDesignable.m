//
//  NSLayoutConstraint+BSIBDesignable.m
//  ZD
//
//  Created by forget on 2019/8/14.
//  Copyright © 2019 ZhiDou. All rights reserved.
//

#import "NSLayoutConstraint+BSIBDesignable.h"
#import <objc/runtime.h>

@implementation NSLayoutConstraint (BSIBDesignable)

- (BOOL)adapterScreen{
    NSNumber *number = objc_getAssociatedObject(self, AdapterScreenKey);
    return number.boolValue;
}

- (void)setAdapterScreen:(BOOL)adapterScreen {
    
    NSNumber *number = @(adapterScreen);
    objc_setAssociatedObject(self, AdapterScreenKey, number, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    
    if (adapterScreen){
        self.constant = AdaptW(self.constant);
    }
}

@end
