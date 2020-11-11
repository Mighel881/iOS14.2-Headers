/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/EFPubliclyDescribable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol EMMessageListItemChangeSubject, EMMessageListItemChangeSummary, EMMessageListItemChangeFlagColors, EMCollectionItemID;
@class NSArray, NSDate, ECMessageFlags, NSNumber, NSString;

@interface EMMessageListItemChange : NSObject <EFPubliclyDescribable, NSSecureCoding> {

	NSArray* _mailboxObjectIDs;
	NSArray* _mailboxes;
	BOOL _isToMe;
	BOOL _isCCMe;
	NSDate* _date;
	id<EMMessageListItemChangeSubject> _subject;
	id<EMMessageListItemChangeSummary> _summary;
	NSArray* _senderList;
	NSArray* _toList;
	NSArray* _ccList;
	ECMessageFlags* _flags;
	NSNumber* _hasUnflagged;
	id<EMMessageListItemChangeFlagColors> _flagColors;
	NSNumber* _isVIP;
	NSNumber* _isBlocked;
	NSNumber* _hasAttachments;
	NSNumber* _conversationNotificationLevel;
	NSNumber* _count;
	NSNumber* _conversationID;
	id<EMCollectionItemID> _displayMessageItemID;

}

@property (nonatomic,retain) NSDate * date;                                               //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) id<EMMessageListItemChangeSubject> subject;                  //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) id<EMMessageListItemChangeSummary> summary;                    //@synthesize summary=_summary - In the implementation block
@property (nonatomic,copy) NSArray * senderList;                                          //@synthesize senderList=_senderList - In the implementation block
@property (nonatomic,copy) NSArray * toList;                                              //@synthesize toList=_toList - In the implementation block
@property (nonatomic,copy) NSArray * ccList;                                              //@synthesize ccList=_ccList - In the implementation block
@property (assign) BOOL isToMe;                                                           //@synthesize isToMe=_isToMe - In the implementation block
@property (assign) BOOL isCCMe;                                                           //@synthesize isCCMe=_isCCMe - In the implementation block
@property (nonatomic,retain) ECMessageFlags * flags;                                      //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSNumber * hasUnflagged;                                     //@synthesize hasUnflagged=_hasUnflagged - In the implementation block
@property (nonatomic,copy) id<EMMessageListItemChangeFlagColors> flagColors;              //@synthesize flagColors=_flagColors - In the implementation block
@property (nonatomic,retain) NSNumber * isVIP;                                            //@synthesize isVIP=_isVIP - In the implementation block
@property (nonatomic,retain) NSNumber * isBlocked;                                        //@synthesize isBlocked=_isBlocked - In the implementation block
@property (nonatomic,retain) NSNumber * hasAttachments;                                   //@synthesize hasAttachments=_hasAttachments - In the implementation block
@property (nonatomic,retain) NSNumber * conversationNotificationLevel;                    //@synthesize conversationNotificationLevel=_conversationNotificationLevel - In the implementation block
@property (nonatomic,retain) NSNumber * count;                                            //@synthesize count=_count - In the implementation block
@property (nonatomic,retain) NSNumber * conversationID;                                   //@synthesize conversationID=_conversationID - In the implementation block
@property (nonatomic,copy) NSArray * mailboxObjectIDs; 
@property (nonatomic,copy) NSArray * mailboxes; 
@property (nonatomic,retain) id<EMCollectionItemID> displayMessageItemID;                 //@synthesize displayMessageItemID=_displayMessageItemID - In the implementation block
@property (nonatomic,copy,readonly) NSString * ef_publicDescription; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)changeForKeyPaths:(id)arg1 ofItem:(id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)changesForKeyPaths:(id)arg1 ofItems:(id)arg2 ;
+(id)changeFrom:(id)arg1 to:(id)arg2 ;
-(id<EMMessageListItemChangeSummary>)summary;
-(void)setCount:(NSNumber *)arg1 ;
-(id<EMMessageListItemChangeSubject>)subject;
-(NSNumber *)isVIP;
-(NSNumber *)isBlocked;
-(NSString *)ef_publicDescription;
-(void)setSubject:(id<EMMessageListItemChangeSubject>)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSArray *)mailboxObjectIDs;
-(unsigned long long)hash;
-(NSArray *)toList;
-(NSArray *)ccList;
-(ECMessageFlags *)flags;
-(BOOL)isToMe;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(NSNumber *)conversationID;
-(BOOL)isCCMe;
-(NSNumber *)count;
-(NSDate *)date;
-(NSNumber *)conversationNotificationLevel;
-(void)setMailboxObjectIDs:(NSArray *)arg1 ;
-(NSNumber *)hasUnflagged;
-(id<EMMessageListItemChangeFlagColors>)flagColors;
-(id<EMCollectionItemID>)displayMessageItemID;
-(void)setHasUnflagged:(NSNumber *)arg1 ;
-(void)setFlagColors:(id<EMMessageListItemChangeFlagColors>)arg1 ;
-(void)setDisplayMessageItemID:(id<EMCollectionItemID>)arg1 ;
-(void)setFlags:(ECMessageFlags *)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)hasAttachments;
-(void)setMailboxes:(NSArray *)arg1 ;
-(void)addChange:(id)arg1 ;
-(id)_descriptionForInternal:(BOOL)arg1 useDebugDescriptions:(BOOL)arg2 ;
-(void)setConversationID:(NSNumber *)arg1 ;
-(id)_changeDescriptionsForInternal:(BOOL)arg1 useDebugDescriptions:(BOOL)arg2 ;
-(BOOL)applyToMessageListItem:(id)arg1 ;
-(NSArray *)senderList;
-(void)setSummary:(id<EMMessageListItemChangeSummary>)arg1 ;
-(void)setHasAttachments:(NSNumber *)arg1 ;
-(void)setConversationNotificationLevel:(NSNumber *)arg1 ;
-(void)setIsToMe:(BOOL)arg1 ;
-(void)setIsCCMe:(BOOL)arg1 ;
-(NSArray *)mailboxes;
-(void)setIsVIP:(NSNumber *)arg1 ;
-(void)setIsBlocked:(NSNumber *)arg1 ;
-(void)setSenderList:(NSArray *)arg1 ;
-(void)setToList:(NSArray *)arg1 ;
-(void)setCcList:(NSArray *)arg1 ;
@end
