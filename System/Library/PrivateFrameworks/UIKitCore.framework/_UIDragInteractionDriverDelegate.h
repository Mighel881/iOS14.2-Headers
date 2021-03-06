/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIDragInteractionDriverDelegate <NSObject>
@required
-(BOOL)dragDriver:(id)arg1 prepareToLiftWithCompletion:(/*^block*/id)arg2;
-(BOOL)dragDriver:(id)arg1 competingGestureRecognizerShouldDelayLift:(id)arg2;
-(BOOL)dragDriverBeginLift:(id)arg1;
-(BOOL)dragDriver:(id)arg1 shouldDelayCompetingGestureRecognizer:(id)arg2;
-(void)dragDriver:(id)arg1 beginDragWithTouches:(id)arg2 itemUpdater:(/*^block*/id)arg3 beginningSessionHandler:(/*^block*/id)arg4;
-(void)dragDriverCancelLift:(id)arg1;
-(BOOL)dragDriver:(id)arg1 shouldBeginAtLocation:(CGPoint)arg2;
-(BOOL)dragDriver:(id)arg1 canExcludeCompetingGestureRecognizer:(id)arg2;
-(BOOL)dragDriverWantsExclusionOverride:(id)arg1;
-(void)dragDriverCancelAddItemsGesture:(id)arg1;

@end

