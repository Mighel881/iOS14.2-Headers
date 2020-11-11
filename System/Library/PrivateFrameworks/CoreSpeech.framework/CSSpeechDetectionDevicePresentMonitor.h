/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreSpeech/CSEventMonitor.h>

@interface CSSpeechDetectionDevicePresentMonitor : CSEventMonitor
+(id)sharedInstance;
-(void)_startMonitoringWithQueue:(id)arg1 ;
-(void)_stopMonitoring;
-(id)init;
-(void)handleSpeechDetectionVADPresentChange:(id)arg1 ;
-(BOOL)isPresent;
-(void)_startObservingSystemControllerLifecycle;
-(void)_systemControllerDied:(id)arg1 ;
-(void)_startObservingSpeechDetectionVADPresence;
@end
