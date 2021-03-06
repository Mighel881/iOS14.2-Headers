/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailDaemon/EDLocalActionPersistence.h>

@class MFMailMessageLibrary;

@interface MFLocalActionPersistence_iOS : EDLocalActionPersistence {

	MFMailMessageLibrary* _library;

}

@property (assign,nonatomic,__weak) MFMailMessageLibrary * library;              //@synthesize library=_library - In the implementation block
-(MFMailMessageLibrary *)library;
-(void)setLibrary:(MFMailMessageLibrary *)arg1 ;
-(BOOL)moveSupportedFromMailboxURL:(id)arg1 toURL:(id)arg2 ;
-(id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2 ;
-(id)initWithLibrary:(id)arg1 database:(id)arg2 ;
-(id)messageForDatabaseID:(long long)arg1 ;
-(id)mailboxURLForDatabaseID:(long long)arg1 ;
-(long long)mailboxDatabaseIDForURL:(id)arg1 ;
-(id)labelNameForLabelID:(long long)arg1 ;
-(void)handledFailedCopyForMessages:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
@end

