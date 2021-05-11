//
//  UITextView+FixScreenFont.m
//  FSCommonKit
//
//  Created by Forget on 2021/5/11.
//

#import "UITextView+FixScreenFont.h"
#import "FSGlobal.h"

@implementation UITextView (FixScreenFont)

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
