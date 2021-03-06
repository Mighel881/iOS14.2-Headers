/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CHTextInputTarget, CHTokenizedTextResult, NSError;

@interface CHTextCorrectionResult : NSObject <NSSecureCoding> {

	BOOL _characterLevel;
	CHTextInputTarget* _inputTarget;
	CHTokenizedTextResult* _textResult;
	long long _resultType;
	NSError* _error;
	NSRange _affectedRange;

}

@property (nonatomic,readonly) CHTextInputTarget * inputTarget;                          //@synthesize inputTarget=_inputTarget - In the implementation block
@property (nonatomic,readonly) NSRange affectedRange;                                    //@synthesize affectedRange=_affectedRange - In the implementation block
@property (nonatomic,readonly) CHTokenizedTextResult * textResult;                       //@synthesize textResult=_textResult - In the implementation block
@property (nonatomic,readonly) long long resultType;                                     //@synthesize resultType=_resultType - In the implementation block
@property (getter=isCharacterLevel,nonatomic,readonly) BOOL characterLevel;              //@synthesize characterLevel=_characterLevel - In the implementation block
@property (nonatomic,readonly) NSError * error;                                          //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)resultType;
-(NSError *)error;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSRange)affectedRange;
-(void)dealloc;
-(CHTextInputTarget *)inputTarget;
-(CHTokenizedTextResult *)textResult;
-(BOOL)isCharacterLevel;
-(id)initWithInputTarget:(id)arg1 affectedRange:(NSRange)arg2 textResult:(id)arg3 resultType:(long long)arg4 isCharacterLevel:(BOOL)arg5 error:(id)arg6 ;
-(BOOL)isEqualToTextCorrectionResult:(id)arg1 ;
@end

