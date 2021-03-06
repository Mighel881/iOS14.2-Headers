/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_workloop, OS_dispatch_mach;
#import <UIKitCore/UIKitCore-Structs.h>
@class NSMutableArray, NSObject, NSMutableDictionary;

@interface UIStatusBarServerListener : NSObject {

	NSMutableArray* _clientPorts;
	NSMutableArray* _publishers;
	NSObject*<OS_dispatch_workloop> _workloop;
	NSObject*<OS_dispatch_mach> _channel;
	SCD_Struct_UI121 _statusBarData;
	SCD_Struct_UI121 _composedStatusBarData;
	SCD_Struct_UI122 _overrides;
	CFDictionaryRef _doubleHeightStatusStrings;
	CFDictionaryRef _glowAnimationStates;
	NSMutableDictionary* _glowAnimationEndTimes;
	BOOL _composedStatusBarDataValid;

}
+(id)sharedInstance;
-(void)_removePublisher:(CFMachPortRef)arg1 ;
-(void)_addStyleOverrides:(int)arg1 forPublisher:(id)arg2 ;
-(void)_postStatusBarData:(SCD_Struct_UI121*)arg1 actions:(int)arg2 animated:(BOOL)arg3 ;
-(BOOL)_permanentizeStatusBarOverrideData;
-(void)_addStatusBarItem:(int)arg1 forPublisher:(id)arg2 ;
-(void)async:(/*^block*/id)arg1 ;
-(id)init;
-(id)_doubleHeightStatusStringForStyle:(long long)arg1 ;
-(SCD_Struct_UI124*)_statusBarOverrideData;
-(void)_postDoubleHeightStatus:(char*)arg1 forStyle:(long long)arg2 ;
-(BOOL)_glowAnimationStateForStyle:(long long)arg1 ;
-(void)_removeAnimationEndTimesForOverrides:(int)arg1 ;
-(void)_broadcastStyleOverrides;
-(void)_removeClient:(CFMachPortRef)arg1 ;
-(int)_styleOverrides;
-(void)_postStatusBarOverrideData:(SCD_Struct_UI124*)arg1 ;
-(void)_setAnimationEndTimesForOverrides:(int)arg1 ;
-(id)_publisherForPort:(unsigned)arg1 ;
-(void)_removeStatusBarItem:(int)arg1 forPublisher:(id)arg2 ;
-(SCD_Struct_UI121*)_statusBarData;
-(void)_broadcastStatusBarDataWithActions:(int)arg1 animated:(BOOL)arg2 ;
-(double)_glowAnimationEndTimeForStyle:(long long)arg1 ;
-(void)_removeStyleOverrides:(int)arg1 forPublisher:(id)arg2 ;
-(void)_postGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2 ;
-(void)_addClient:(unsigned)arg1 ;
@end

