/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSLocale, NSString;

@interface TITypingSessionAligned : NSObject <NSSecureCoding> {

	BOOL _success;
	BOOL _containsCPEntries;
	NSArray* _layouts;
	NSLocale* _locale;
	NSArray* _alignedEntries;
	NSString* _alignedText;
	NSString* _highConfAlignedSubSegment;
	unsigned long long _firstCPEntryIndex;

}

@property (nonatomic,retain) NSArray * alignedEntries;                          //@synthesize alignedEntries=_alignedEntries - In the implementation block
@property (nonatomic,retain) NSString * alignedText;                            //@synthesize alignedText=_alignedText - In the implementation block
@property (nonatomic,retain) NSString * highConfAlignedSubSegment;              //@synthesize highConfAlignedSubSegment=_highConfAlignedSubSegment - In the implementation block
@property (assign,nonatomic) BOOL success;                                      //@synthesize success=_success - In the implementation block
@property (assign,nonatomic) BOOL containsCPEntries;                            //@synthesize containsCPEntries=_containsCPEntries - In the implementation block
@property (assign,nonatomic) unsigned long long firstCPEntryIndex;              //@synthesize firstCPEntryIndex=_firstCPEntryIndex - In the implementation block
@property (nonatomic,readonly) NSArray * layouts;                               //@synthesize layouts=_layouts - In the implementation block
@property (nonatomic,readonly) NSLocale * locale;                               //@synthesize locale=_locale - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)alignedEntryForWord:(id)arg1 ;
+(id)alignedPathTouchesForWord:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(NSLocale *)locale;
-(void)setHighConfAlignedSubSegment:(NSString *)arg1 ;
-(NSArray *)layouts;
-(void)setSuccess:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)success;
-(BOOL)containsCPEntries;
-(void)setAlignedEntries:(NSArray *)arg1 ;
-(NSArray *)alignedEntries;
-(NSString *)highConfAlignedSubSegment;
-(unsigned long long)firstCPEntryIndex;
-(id)initWithCoder:(id)arg1 ;
-(id)alignedWordsFromSession:(id)arg1 ;
-(void)getAlignedTextAndConfidence;
-(void)setFirstCPEntryIndex:(unsigned long long)arg1 ;
-(void)setAlignedText:(NSString *)arg1 ;
-(id)textToAppendForEntry:(id)arg1 sessionIndx:(unsigned long long)arg2 ;
-(BOOL)compareForConfidenceContextA:(id)arg1 contextB:(id)arg2 ;
-(id)restrictedAlignedSessionWithWordLimit:(unsigned long long)arg1 ;
-(NSString *)alignedText;
-(void)setContainsCPEntries:(BOOL)arg1 ;
@end

