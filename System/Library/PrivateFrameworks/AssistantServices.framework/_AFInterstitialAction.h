/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _AFInterstitialAction : NSObject {

	long long _phase;
	NSString* _displayKey;
	NSString* _speakableKey;
	double _duration;

}

@property (nonatomic,readonly) long long phase;                           //@synthesize phase=_phase - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayKey;                //@synthesize displayKey=_displayKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * speakableKey;              //@synthesize speakableKey=_speakableKey - In the implementation block
@property (nonatomic,readonly) double duration;                           //@synthesize duration=_duration - In the implementation block
-(NSString *)displayKey;
-(NSString *)speakableKey;
-(id)initWithPhase:(long long)arg1 displayKey:(id)arg2 speakableKey:(id)arg3 ;
-(long long)phase;
-(double)duration;
-(id)initWithDuration:(double)arg1 ;
@end

