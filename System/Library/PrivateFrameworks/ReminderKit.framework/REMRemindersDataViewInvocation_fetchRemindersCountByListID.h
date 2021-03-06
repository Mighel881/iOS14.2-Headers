/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/ReminderKit-Structs.h>
#import <ReminderKit/REMStoreInvocation.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class REMObjectID;

@interface REMRemindersDataViewInvocation_fetchRemindersCountByListID : REMStoreInvocation <NSSecureCoding> {

	REMObjectID* _listID;

}

@property (nonatomic,readonly) REMObjectID * listID;              //@synthesize listID=_listID - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(REMObjectID *)listID;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithListID:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

