/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SoundBoardServices.framework/SoundBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBSDebugInfoImplementer;
@class NSXPCConnection;

@interface SBSDebugInterface : NSObject {

	NSXPCConnection* _sbConnection;
	id<SBSDebugInfoImplementer> _sbProxy;

}
-(id)init;
-(void)setFeatureFlags:(id)arg1 ;
-(id)initWithTarget:(id)arg1 ;
-(void)getAllDebugInfo:(/*^block*/id)arg1 ;
-(void)getTuningInfo:(/*^block*/id)arg1 ;
-(void)setTuningInfoOnBox:(id)arg1 at:(id)arg2 withValue:(float)arg3 ;
-(void)playTone:(unsigned)arg1 ;
-(void)stopTone:(unsigned)arg1 ;
-(void)getUserDefaults:(/*^block*/id)arg1 ;
-(void)setUserDefaults:(id)arg1 withValue:(id)arg2 ;
-(void)resetAllUserDefaults;
-(void)resetUserDefault:(id)arg1 ;
-(void)sendLEDCommand:(id)arg1 ;
-(void)triggerWiFiCoreCapture:(id)arg1 ;
-(void)sendButtonCommand:(id)arg1 ;
-(void)injectSWUpdateToHome:(id)arg1 ;
-(void)setBootSpinner:(BOOL)arg1 ;
-(void)getFeatureFlags:(/*^block*/id)arg1 ;
-(void)setLEDContents:(id)arg1 ;
@end

