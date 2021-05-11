//
//  UILabel+FixScreenFont.m
//  FDS
//
//  Created by forget on 2019/8/14.
//  Copyright © 2019 ZhiDou. All rights reserved.
//

#import "UILabel+FixScreenFont.h"

@implementation UILabel (FixScreenFont)
- (void)setFixWidthScreenFont:(float)fixWidthScreenFont{
    
    if (fixWidthScreenFont > 0 ) {
        self.font = [UIFont fontWithName:self.font.fontName size:AdaptW(fixWidthScreenFont)];
    }else{
        self.font = self.font;
    }
}

- (float )fixWidthScreenFont{
    return self.fixWidthScreenFont;
}

@end
