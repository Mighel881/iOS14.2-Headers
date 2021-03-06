/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class FBSDisplayMode;

@interface UIScreenMode : NSObject {

	FBSDisplayMode* _mode;
	BOOL _mainScreen;

}

@property (setter=_setMainScreen:,getter=_isMainScreen) BOOL _mainScreen;              //@synthesize mainScreen=_mainScreen - In the implementation block
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double pixelAspectRatio; 
+(id)_screenModeForDisplayMode:(id)arg1 mainScreen:(BOOL)arg2 ;
-(double)pixelAspectRatio;
-(id)_displayMode;
-(CGSize)size;
-(CGSize)_sizeWithLevel:(unsigned long long)arg1 ;
-(id)description;
-(id)initWithDisplayMode:(id)arg1 mainScreen:(BOOL)arg2 ;
-(void)_setMainScreen:(BOOL)arg1 ;
-(BOOL)_isMainScreen;
@end

