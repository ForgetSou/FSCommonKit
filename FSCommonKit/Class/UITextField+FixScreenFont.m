//
//  UITextField+FixScreenFont.m
//  ZD
//
//  Created by forget on 2019/9/29.
//  Copyright © 2019 ZhiDou. All rights reserved.
//

#import "UITextField+FixScreenFont.h"

@implementation UITextField (FixScreenFont)

- (void)setFixWidthScreenFont:(float)fixWidthScreenFont {
    if (fixWidthScreenFont > 0 ) {
        self.font = [UIFont fontWithName:self.font.fontName size:AdaptW(fixWidthScreenFont)];
    }else{
        self.font = self.font;
    }
}

- (float)fixWidthScreenFont {
    return self.fixWidthScreenFont;
}

@end
