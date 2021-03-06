/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UIKeyboardFeedbackGeneratorConfiguration;

@interface _UIKeyboardFeedbackGenerator : UIFeedbackGenerator {

	double _lastTypedKeyTimestamp;
	double _lastNonReleaseActionTimestamp;

}

@property (getter=_keyboardConfiguration,nonatomic,readonly) _UIKeyboardFeedbackGeneratorConfiguration * keyboardConfiguration; 
@property (assign,setter=_setLastTypedKeyTimestamp:,getter=_lastTypedKeyTimestamp,nonatomic) double lastTypedKeyTimestamp;                   //@synthesize lastTypedKeyTimestamp=_lastTypedKeyTimestamp - In the implementation block
@property (assign,nonatomic) double lastNonReleaseActionTimestamp;                                                                           //@synthesize lastNonReleaseActionTimestamp=_lastNonReleaseActionTimestamp - In the implementation block
+(Class)_configurationClass;
-(id)_stats_key;
-(double)_autoDeactivationTimeout;
-(void)_playFeedbackForActionType:(long long)arg1 withCustomization:(/*^block*/id)arg2 ;
-(void)setLastNonReleaseActionTimestamp:(double)arg1 ;
-(void)_setLastTypedKeyTimestamp:(double)arg1 ;
-(id)_feedbackWithUpdatedVolume:(id)arg1 ;
-(double)lastNonReleaseActionTimestamp;
-(double)_lastTypedKeyTimestamp;
-(void)actionOccurred:(long long)arg1 ;
-(id)_keyboardConfiguration;
-(void)cycleActivation;
-(id)initWithCoordinateSpace:(id)arg1 visceral:(long long)arg2 ;
-(float)scaleVolumeSlow:(float)arg1 fast:(float)arg2 timeSpan:(double)arg3 ;
@end

