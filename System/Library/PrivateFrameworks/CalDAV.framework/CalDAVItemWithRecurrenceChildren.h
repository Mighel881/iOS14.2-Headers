/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVItem.h>

@class NSMutableSet;

@interface CalDAVItemWithRecurrenceChildren : CoreDAVItem {

	NSMutableSet* _recurrences;

}

@property (nonatomic,retain) NSMutableSet * recurrences;              //@synthesize recurrences=_recurrences - In the implementation block
-(void)setRecurrences:(NSMutableSet *)arg1 ;
-(NSMutableSet *)recurrences;
-(id)copyParseRules;
-(void)addRecurrence:(id)arg1 ;
@end
