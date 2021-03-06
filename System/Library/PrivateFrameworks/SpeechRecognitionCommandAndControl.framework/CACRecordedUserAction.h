/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpeechRecognitionCommandAndControl/SpeechRecognitionCommandAndControl-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, CACRecordedUserActionFlow;

@interface CACRecordedUserAction : NSObject <NSSecureCoding> {

	long long _type;
	NSString* _identifier;
	NSDictionary* _targetAttributes;
	BOOL _canIgnoreFailure;
	id _object;
	CACRecordedUserActionFlow* _ownerFlow;

}

@property (readonly) BOOL isSpokenCommand; 
@property (readonly) BOOL isReplayableGesture; 
@property (readonly) BOOL canIgnoreFailure; 
@property (__weak) CACRecordedUserActionFlow * ownerFlow;              //@synthesize ownerFlow=_ownerFlow - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(id)plistDescription;
-(id)initWithSpokenCommand:(id)arg1 ;
-(void)beginExecutingWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)_derivedTargetAttributesFromSpokenCommand:(id)arg1 ;
-(BOOL)isSpokenCommand;
-(id)_dictionaryFromRect:(CGRect)arg1 ;
-(CGRect)_rectFromDictionary:(id)arg1 ;
-(id)_labeledElementsFromMatchingCriteria:(id)arg1 ;
-(id)spokenCommand;
-(BOOL)isReplayableGesture;
-(BOOL)canIgnoreFailure;
-(CACRecordedUserActionFlow *)ownerFlow;
-(void)setOwnerFlow:(CACRecordedUserActionFlow *)arg1 ;
@end

