/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSArray;

@interface SGDataDetectorMatchesWithSignatureRange : NSObject {

	NSArray* _matches;
	NSRange _signatureRange;

}

@property (nonatomic,retain) NSArray * matches;                   //@synthesize matches=_matches - In the implementation block
@property (assign,nonatomic) NSRange signatureRange;              //@synthesize signatureRange=_signatureRange - In the implementation block
-(NSArray *)matches;
-(void)setMatches:(NSArray *)arg1 ;
-(NSRange)signatureRange;
-(void)setSignatureRange:(NSRange)arg1 ;
@end

