/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNChangeHistoryEvent.h>

@class CNContact, CNGroup;

@interface CNChangeHistoryAddMemberToGroupEvent : CNChangeHistoryEvent {

	CNContact* _member;
	CNGroup* _group;

}

@property (nonatomic,readonly) CNContact * member;              //@synthesize member=_member - In the implementation block
@property (nonatomic,readonly) CNGroup * group;                 //@synthesize group=_group - In the implementation block
+(BOOL)supportsSecureCoding;
+(unsigned long long)instanceSortOrder;
-(CNContact *)member;
-(id)init;
-(unsigned long long)hash;
-(long long)comparisonResultWithinSameClass:(id)arg1 ;
-(void)acceptEventVisitor:(id)arg1 ;
-(id)initWithMember:(id)arg1 group:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(CNGroup *)group;
-(id)initWithCoder:(id)arg1 ;
@end

