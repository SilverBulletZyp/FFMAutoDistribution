//
//  NSWindowController+Ext.h
//  FFMAutoDistribution
//
//  Created by 常润泽 on 2018/4/4.
//  Copyright © 2018年 常润泽. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface NSWindowController (Ext)

+ (instancetype)ffm_loadFromNib;

@end

@interface NSWindow (Ext)

- (NSView *)ffm_titleBar;

- (void)ffm_setSize:(NSSize)size;

@end



@interface NSViewController (Ext)

+ (instancetype)ffm_loadFromNib;

@end

