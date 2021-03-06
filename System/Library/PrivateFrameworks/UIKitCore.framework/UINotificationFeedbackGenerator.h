/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIFeedbackGenerator.h>

@class _UINotificationFeedbackGeneratorConfiguration;

@interface UINotificationFeedbackGenerator : UIFeedbackGenerator

@property (getter=_eventConfiguration,nonatomic,readonly) _UINotificationFeedbackGeneratorConfiguration * eventConfiguration; 
+(Class)_configurationClass;
-(id)_stats_key;
-(void)_playEventType:(long long)arg1 ;
-(void)_privateNotificationOccurred:(long long)arg1 ;
-(void)notificationOccurred:(long long)arg1 ;
-(double)_preparationTimeoutForStyle:(long long)arg1 ;
-(id)_categoryForType:(long long)arg1 ;
-(void)_stopEventType:(long long)arg1 ;
-(id)_eventConfiguration;
-(void)_privateNotificationInterrupted:(long long)arg1 ;
@end

