/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIView;


@protocol PKPaletteViewHosting <NSObject>
@property (nonatomic,readonly) UIView * hostingView; 
@property (getter=isPaletteDragging,nonatomic,readonly) BOOL paletteDragging; 
@property (assign,getter=isPaletteVisible,nonatomic) BOOL paletteVisible; 
@property (getter=isPaletteVisualStateMinimized,nonatomic,readonly) BOOL paletteVisualStateMinimized; 
@required
-(UIView *)hostingView;
-(BOOL)isPaletteDragging;
-(BOOL)isPaletteVisible;
-(BOOL)isPaletteVisualStateMinimized;
-(void)setPaletteVisible:(BOOL)arg1;

@end

