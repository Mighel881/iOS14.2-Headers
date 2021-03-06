/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface PXTimeInterval : NSObject {

	long long _state;
	double _beginTime;
	double _endTime;
	NSMutableDictionary* _tokenToTransitionHandler;

}

@property (assign,nonatomic) long long state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double beginTime;                                            //@synthesize beginTime=_beginTime - In the implementation block
@property (assign,nonatomic) double endTime;                                              //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * tokenToTransitionHandler;              //@synthesize tokenToTransitionHandler=_tokenToTransitionHandler - In the implementation block
@property (nonatomic,readonly) double duration; 
-(double)endTime;
-(double)beginTime;
-(id)init;
-(void)setState:(long long)arg1 ;
-(void)setEndTime:(double)arg1 ;
-(long long)state;
-(void)setBeginTime:(double)arg1 ;
-(void)reset;
-(void)endInterval;
-(void)beginInterval;
-(id)addStateTransitionHandler:(/*^block*/id)arg1 ;
-(double)duration;
-(void)removeStateTransitionHandler:(id)arg1 ;
-(void)beginIntervalWithTimeOverride:(double)arg1 ;
-(void)endIntervalWithTimeOverride:(double)arg1 ;
-(void)_notifyStateTransitionHandlersOfTransitionFromState:(long long)arg1 ;
-(NSMutableDictionary *)tokenToTransitionHandler;
-(void)setTokenToTransitionHandler:(NSMutableDictionary *)arg1 ;
@end

