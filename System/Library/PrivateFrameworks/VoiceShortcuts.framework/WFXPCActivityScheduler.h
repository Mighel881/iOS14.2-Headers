/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WFXPCActivityScheduler : NSObject {

	NSString* _activityIdentifier;

}

@property (nonatomic,readonly) NSString * activityIdentifier;              //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
+(id)activatedSchedulerWithActivityIdentifier:(id)arg1 checkInHandler:(/*^block*/id)arg2 runHandler:(/*^block*/id)arg3 ;
+(id)activatedSchedulerWithActivityIdentifier:(id)arg1 runHandler:(/*^block*/id)arg2 ;
-(NSString *)activityIdentifier;
-(void)invalidate;
-(id)initWithActivityIdentifier:(id)arg1 ;
-(void)scheduleWithCheckInHandler:(/*^block*/id)arg1 runHandler:(/*^block*/id)arg2 ;
-(void)scheduleWithRunHandler:(/*^block*/id)arg1 ;
@end

