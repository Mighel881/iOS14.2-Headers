/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/REMFetchMetadata.h>

@class NSDictionary;

@interface REMListFetchMetadata : REMFetchMetadata {

	NSDictionary* _incompleteReminderCounts;
	long long _scheduledCount;

}

@property (nonatomic,readonly) NSDictionary * incompleteReminderCounts;              //@synthesize incompleteReminderCounts=_incompleteReminderCounts - In the implementation block
@property (nonatomic,readonly) long long scheduledCount;                             //@synthesize scheduledCount=_scheduledCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)incompleteReminderCounts;
-(long long)scheduledCount;
-(id)initWithIncompleteReminderCounts:(id)arg1 scheduledCount:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
@end
