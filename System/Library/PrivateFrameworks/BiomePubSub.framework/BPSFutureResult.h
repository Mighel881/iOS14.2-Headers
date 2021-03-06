/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError;

@interface BPSFutureResult : NSObject {

	long long _state;
	NSError* _error;
	id _value;

}

@property (nonatomic,readonly) long long state;              //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSError * error;              //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) id value;                     //@synthesize value=_value - In the implementation block
+(id)failureWithError:(id)arg1 ;
+(id)successWithValue:(id)arg1 ;
-(NSError *)error;
-(long long)state;
-(id)value;
-(id)initWithState:(long long)arg1 value:(id)arg2 error:(id)arg3 ;
@end

