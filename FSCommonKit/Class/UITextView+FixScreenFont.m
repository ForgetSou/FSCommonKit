//
//  UITextView+FixScreenFont.m
//  ZDVoiceInput
//
//  Created by forget on 2020/9/25.
//  Copyright © 2020 forget. All rights reserved.
//

#import "UITextView+FixScreenFont.h"

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
