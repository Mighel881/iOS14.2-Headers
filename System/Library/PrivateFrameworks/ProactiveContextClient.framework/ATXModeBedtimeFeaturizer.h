/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ATXModeFeaturizer.h>

@protocol ATXModeFeaturizerDelegate;
@class MTAlarmManager, MTAlarm, NSTimer, NSString;

@interface ATXModeBedtimeFeaturizer : NSObject <ATXModeFeaturizer> {

	MTAlarmManager* _alarmManager;
	MTAlarm* _sleepAlarm;
	NSTimer* _timer;
	int _significantTimeToken;
	id<ATXModeFeaturizerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ATXModeFeaturizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopListening;
-(id<ATXModeFeaturizerDelegate>)delegate;
-(void)setDelegate:(id<ATXModeFeaturizerDelegate>)arg1 ;
-(void)beginListening;
-(id)provideFeatures;
-(void)_fetchSleepAlarmIfNecessary;
-(void)_updateFeatures;
-(void)_scheduleTimerForAlarm:(id)arg1 ;
-(void)_alarmsDidChange:(id)arg1 ;
@end
