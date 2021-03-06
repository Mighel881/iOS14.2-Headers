/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CVNLP/CVNLP-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CVNLPLexiconCursor : NSObject <NSCopying> {

	const LXCursorRef _cursor;
	unsigned long long _priority;

}

@property (nonatomic,readonly) const LXCursorRef cursor;                 //@synthesize cursor=_cursor - In the implementation block
@property (nonatomic,readonly) unsigned long long priority;              //@synthesize priority=_priority - In the implementation block
-(const LXCursorRef)cursor;
-(unsigned long long)priority;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initByAdvancingCursor:(id)arg1 withString:(id)arg2 ;
-(id)initWithCursor:(LXCursorRef)arg1 priority:(unsigned long long)arg2 ;
-(id)newCursorByAdvancingWithString:(id)arg1 ;
-(double)cursorConditionalLogProbability;
@end

