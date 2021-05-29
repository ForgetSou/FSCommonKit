//
//  UIButton+FixScreenFont.m
//  FSCommonKit
//
//  Created by Forget on 2021/5/11.
//

#import "UIButton+FixScreenFont.h"
#import "FSGlobal.h"

@implementation UIButton (FixScreenFont)

- (void)setFixWidthScreenFont:(float)fixWidthScreenFont {
    if (fixWidthScreenFont > 0 ) {
        self.titleLabel.font = [UIFont systemFontOfSize:AdaptW(fixWidthScreenFont)];
    }
}

- (float)fixWidthScreenFont {
    return self.fixWidthScreenFont;
}

@end
