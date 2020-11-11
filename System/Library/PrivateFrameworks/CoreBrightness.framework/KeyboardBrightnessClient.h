/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class BrightnessSystemClient, NSObject;

@interface KeyboardBrightnessClient : NSObject {

	BrightnessSystemClient* bsc;
	NSObject*<OS_os_log> _logHandle;

}
-(id)init;
-(void)unregisterKeyboardNotificationBlock;
-(void)dealloc;
-(float)brightnessForKeyboard:(unsigned long long)arg1 ;
-(BOOL)isAmbientFeatureAvailableOnKeyboard:(unsigned long long)arg1 ;
-(BOOL)isBacklightSaturatedOnKeyboard:(unsigned long long)arg1 ;
-(BOOL)setBrightness:(float)arg1 forKeyboard:(unsigned long long)arg2 ;
-(void)registerNotificationForKeys:(id)arg1 keyboardID:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)suspendIdleDimming:(BOOL)arg1 forKeyboard:(unsigned long long)arg2 ;
-(id)copyKeyboardBacklightIDs;
-(BOOL)setBrightness:(float)arg1 fadeSpeed:(int)arg2 commit:(BOOL)arg3 forKeyboard:(unsigned long long)arg4 ;
-(BOOL)isBacklightSuppressedOnKeyboard:(unsigned long long)arg1 ;
-(BOOL)isBacklightDimmedOnKeyboard:(unsigned long long)arg1 ;
-(BOOL)enableAutoBrightness:(BOOL)arg1 forKeyboard:(unsigned long long)arg2 ;
-(BOOL)isKeyboardBuiltIn:(unsigned long long)arg1 ;
-(double)idleDimTimeForKeyboard:(unsigned long long)arg1 ;
-(BOOL)setIdleDimTime:(double)arg1 forKeyboard:(unsigned long long)arg2 ;
-(BOOL)isIdleDimmingSuspendedOnKeyboard:(unsigned long long)arg1 ;
-(BOOL)isAutoBrightnessEnabledForKeyboard:(unsigned long long)arg1 ;
@end
