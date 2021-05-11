//
//  UITextField+FixScreenFont.m
//  FSCommonKit
//
//  Created by Forget on 2021/5/11.
//

#import "UITextField+FixScreenFont.h"
#import "FSGlobal.h"

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
