/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableSet, NSArray, NSMutableArray;

@interface SGHistorySharedData : NSObject {

	NSMutableSet* confirmedEventHashes;
	NSMutableSet* confirmedEventWithoutTimestampHashes;
	NSMutableSet* rejectedEventHashes;
	NSMutableSet* confirmedReminderHashes;
	NSMutableSet* rejectedReminderHashes;
	NSMutableSet* contactHashes;
	NSMutableSet* confirmedEventFieldHashes;
	NSMutableSet* confirmedEventWithoutTimestampFieldHashes;
	NSMutableSet* storageDetailHashes;
	NSMutableSet* dontUpdate;
	NSArray* resetInfo;
	NSMutableArray* observers;

}
@end
