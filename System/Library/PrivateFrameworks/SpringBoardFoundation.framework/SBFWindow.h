/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIWindow.h>

@class _SBFKeyWindowStack, NSNumber;

@interface SBFWindow : UIWindow {

	_SBFKeyWindowStack* _keyWindowStack;
	NSNumber* _isHiddenOverride;

}

@property (setter=_setKeyWindowStack:,nonatomic,retain) _SBFKeyWindowStack * _keyWindowStack;              //@synthesize keyWindowStack=_keyWindowStack - In the implementation block
-(BOOL)_canBecomeKeyWindow;
-(void)makeKeyWindow;
-(void)setHidden:(BOOL)arg1 ;
-(_SBFKeyWindowStack *)_keyWindowStack;
-(void)resignAsKeyWindow;
-(BOOL)_isEffectivelyHiddenForKeyWindowStack;
-(void)_makeKeyFromKeyWindowStack;
-(void)_resignKeyFromKeyWindowStack;
-(void)_setKeyWindowStack:(id)arg1 ;
-(void)dealloc;
@end

