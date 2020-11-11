/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Email/EMMessageChangeAction.h>

@interface EMMessageConversationFlagChangeAction : EMMessageChangeAction {

	long long _conversationNotificationLevel;
	long long _originalConversationNotificationLevel;
	long long _conversationID;

}

@property (nonatomic,readonly) long long conversationNotificationLevel;                      //@synthesize conversationNotificationLevel=_conversationNotificationLevel - In the implementation block
@property (nonatomic,readonly) long long originalConversationNotificationLevel;              //@synthesize originalConversationNotificationLevel=_originalConversationNotificationLevel - In the implementation block
@property (assign) long long conversationID;                                                 //@synthesize conversationID=_conversationID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(long long)conversationID;
-(long long)conversationNotificationLevel;
-(id)initWithConversationID:(long long)arg1 conversationNotificationLevel:(long long)arg2 originalConversationNotificationLevel:(long long)arg3 ;
-(id)initWithMessage:(id)arg1 conversationNotificationLevel:(long long)arg2 ;
-(long long)originalConversationNotificationLevel;
-(id)initWithCoder:(id)arg1 ;
-(void)setConversationID:(long long)arg1 ;
-(long long)signpostType;
@end
