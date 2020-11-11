/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CVNLP/CVNLP-Structs.h>
@class NSString, NSNumber;

@interface CVNLPTextDecodingToken : NSObject {

	BOOL _hasPrecedingSpace;
	NSString* _string;
	NSString* _terminatingCharacter;
	NSNumber* _score;
	NSNumber* _alignmentScore;
	NSRange _activationRange;

}

@property (nonatomic,copy,readonly) NSString * string;                            //@synthesize string=_string - In the implementation block
@property (nonatomic,readonly) BOOL hasPrecedingSpace;                            //@synthesize hasPrecedingSpace=_hasPrecedingSpace - In the implementation block
@property (nonatomic,copy,readonly) NSString * terminatingCharacter;              //@synthesize terminatingCharacter=_terminatingCharacter - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * score;                             //@synthesize score=_score - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * alignmentScore;                    //@synthesize alignmentScore=_alignmentScore - In the implementation block
@property (nonatomic,readonly) NSRange activationRange;                           //@synthesize activationRange=_activationRange - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullString; 
-(NSNumber *)score;
-(NSString *)fullString;
-(NSString *)string;
-(id)initWithString:(id)arg1 score:(id)arg2 alignmentScore:(id)arg3 activationRange:(NSRange)arg4 terminatingCharacter:(id)arg5 ;
-(id)initWithString:(id)arg1 score:(id)arg2 activationRange:(NSRange)arg3 terminatingCharacter:(id)arg4 ;
-(id)initWithString:(id)arg1 score:(id)arg2 activationRange:(NSRange)arg3 hasPrecedingSpace:(BOOL)arg4 ;
-(BOOL)hasPrecedingSpace;
-(NSString *)terminatingCharacter;
-(NSNumber *)alignmentScore;
-(NSRange)activationRange;
@end
