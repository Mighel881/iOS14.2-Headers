/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class EDPersistenceDatabase, EDGmailLabelPersistence;

@interface EDServerMessagePersistenceFactory : NSObject {

	EDPersistenceDatabase* _database;
	EDGmailLabelPersistence* _gmailLabelPersistence;

}

@property (nonatomic,readonly) EDPersistenceDatabase * database;                             //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) EDGmailLabelPersistence * gmailLabelPersistence;              //@synthesize gmailLabelPersistence=_gmailLabelPersistence - In the implementation block
-(id)init;
-(EDGmailLabelPersistence *)gmailLabelPersistence;
-(id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2 ;
-(EDPersistenceDatabase *)database;
-(id)serverMessagePersistenceForMailboxURL:(id)arg1 ;
@end
