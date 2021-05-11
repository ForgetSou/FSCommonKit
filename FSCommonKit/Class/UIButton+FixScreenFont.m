//
//  UIButton+FixScreenFont.m
//  ZD
//
//  Created by forget on 2019/9/29.
//  Copyright © 2019 ZhiDou. All rights reserved.
//

#import "UIButton+FixScreenFont.h"

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
