/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _UIFeedback;

@interface _UIFeedbackParameters : NSObject <NSCopying> {

	float _volume;
	float _rate;
	float _transposition;
	float _attackTime;
	float _decayTime;
	float _releaseTime;
	_UIFeedback* _feedback;
	_UIFeedbackParameters* _parentParameters;

}

@property (assign,nonatomic,__weak) _UIFeedback * feedback;                                //@synthesize feedback=_feedback - In the implementation block
@property (assign,nonatomic,__weak) _UIFeedbackParameters * parentParameters;              //@synthesize parentParameters=_parentParameters - In the implementation block
@property (getter=_isAudio,nonatomic,readonly) BOOL audio; 
@property (getter=_effectiveVolume,nonatomic,readonly) float effectiveVolume; 
@property (assign,nonatomic) float volume;                                                 //@synthesize volume=_volume - In the implementation block
@property (assign,nonatomic) float rate;                                                   //@synthesize rate=_rate - In the implementation block
@property (assign,nonatomic) float transposition;                                          //@synthesize transposition=_transposition - In the implementation block
@property (assign,nonatomic) float attackTime;                                             //@synthesize attackTime=_attackTime - In the implementation block
@property (assign,nonatomic) float decayTime;                                              //@synthesize decayTime=_decayTime - In the implementation block
@property (assign,nonatomic) float releaseTime;                                            //@synthesize releaseTime=_releaseTime - In the implementation block
+(id)parameters;
-(void)setFeedback:(_UIFeedback *)arg1 ;
-(void)setReleaseTime:(float)arg1 ;
-(_UIFeedback *)feedback;
-(void)_updateParameterWithKey:(id)arg1 ;
-(void)setVolume:(float)arg1 ;
-(float)volume;
-(float)decayTime;
-(void)setTransposition:(float)arg1 ;
-(id)dictionaryRepresentation;
-(float)transposition;
-(void)setRate:(float)arg1 ;
-(_UIFeedbackParameters *)parentParameters;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAttackTime:(float)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 feedback:(id)arg2 ;
-(void)setParentParameters:(_UIFeedbackParameters *)arg1 ;
-(float)releaseTime;
-(float)_effectiveValueForParameterWithKey:(id)arg1 ;
-(float)rate;
-(id)initWithFeedback:(id)arg1 ;
-(float)_effectiveVolume;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDecayTime:(float)arg1 ;
-(float)attackTime;
-(BOOL)_isAudio;
@end
