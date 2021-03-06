/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class MFMailboxProvider, NSMutableSet, NSMutableArray;

@interface _MFMailMessageDuplicateInfo : NSObject {

	MFMailboxProvider* _mailboxProvider;
	NSMutableSet* _mailboxes;
	NSMutableArray* _flags;
	NSMutableArray* _dates;

}

@property (nonatomic,retain) MFMailboxProvider * mailboxProvider;              //@synthesize mailboxProvider=_mailboxProvider - In the implementation block
@property (nonatomic,retain) NSMutableSet * mailboxes;                         //@synthesize mailboxes=_mailboxes - In the implementation block
@property (nonatomic,retain) NSMutableArray * flags;                           //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) NSMutableArray * dates;                           //@synthesize dates=_dates - In the implementation block
-(NSMutableArray *)dates;
-(NSMutableArray *)flags;
-(void)setDates:(NSMutableArray *)arg1 ;
-(void)setFlags:(NSMutableArray *)arg1 ;
-(void)addMessage:(id)arg1 ;
-(id)initWithMailboxProvider:(id)arg1 ;
-(MFMailboxProvider *)mailboxProvider;
-(void)setMailboxes:(NSMutableSet *)arg1 ;
-(id)combinedMailboxes;
-(id)combinedMessageFlags;
-(id)combinedDate;
-(void)setMailboxProvider:(MFMailboxProvider *)arg1 ;
-(NSMutableSet *)mailboxes;
@end

