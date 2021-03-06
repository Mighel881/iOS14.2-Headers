/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class _UITapticEngine, NSMutableSet, NSObject;

@interface SBFTapticEngine : NSObject {

	_UITapticEngine* _tapticEngine;
	NSMutableSet* _previewReasons;
	NSMutableSet* _commitReasons;
	NSMutableSet* _cancelledReasons;
	NSObject*<OS_dispatch_queue> _previewReasonsQueue;
	NSObject*<OS_dispatch_queue> _commitReasonsQueue;
	NSObject*<OS_dispatch_queue> _cancelledReasonsQueue;
	BOOL _supportsFeedbackActuation;

}

@property (nonatomic,readonly) BOOL supportsFeedbackActuation;              //@synthesize supportsFeedbackActuation=_supportsFeedbackActuation - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)supportsFeedbackActuation;
-(void)warmUpForFeedback:(unsigned long long)arg1 withReason:(id)arg2 ;
-(void)coolDownForFeedback:(unsigned long long)arg1 withReason:(id)arg2 ;
-(void)actuateFeedback:(long long)arg1 ;
@end

