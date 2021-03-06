/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableArray, UITouch, NSNumber, NSArray;

@interface _UIEstimatedTouchRecord : NSObject {

	NSMutableArray* _touchables;
	UITouch* _liveTouch;
	UITouch* _frozenTouch;
	NSNumber* _contextID;

}

@property (nonatomic,readonly) UITouch * liveTouch;                //@synthesize liveTouch=_liveTouch - In the implementation block
@property (nonatomic,readonly) UITouch * frozenTouch;              //@synthesize frozenTouch=_frozenTouch - In the implementation block
@property (nonatomic,readonly) NSArray * touchables;               //@synthesize touchables=_touchables - In the implementation block
@property (nonatomic,readonly) NSNumber * contextID;               //@synthesize contextID=_contextID - In the implementation block
-(UITouch *)liveTouch;
-(id)initWithLiveTouch:(id)arg1 freezeTouch:(id)arg2 contextID:(id)arg3 ;
-(void)addTouchable:(id)arg1 ;
-(void)removeTouchable:(id)arg1 ;
-(void)dispatchUpdateWithPressure:(double)arg1 stillEstimated:(BOOL)arg2 ;
-(NSArray *)touchables;
-(UITouch *)frozenTouch;
-(NSNumber *)contextID;
@end

