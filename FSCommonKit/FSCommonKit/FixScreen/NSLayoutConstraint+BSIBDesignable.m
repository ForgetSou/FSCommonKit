//
//  NSLayoutConstraint+BSIBDesignable.m
//  FSCommonKit
//
//  Created by Forget on 2021/5/11.
//
//

#import "NSLayoutConstraint+BSIBDesignable.h"
#import <objc/runtime.h>
#import "FSGlobal.h"

@implementation NSLayoutConstraint (BSIBDesignable)

- (BOOL)adapterScreen {
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
