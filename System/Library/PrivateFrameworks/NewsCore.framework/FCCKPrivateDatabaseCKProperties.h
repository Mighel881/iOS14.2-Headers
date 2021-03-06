/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CKDatabase, NSArray;

@interface FCCKPrivateDatabaseCKProperties : NSObject {

	CKDatabase* _database;
	CKDatabase* _databaseWithZoneWidePCS;
	CKDatabase* _secureDatabase;
	NSArray* _containers;

}

@property (nonatomic,readonly) CKDatabase * database;                             //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) CKDatabase * databaseWithZoneWidePCS;              //@synthesize databaseWithZoneWidePCS=_databaseWithZoneWidePCS - In the implementation block
@property (nonatomic,readonly) CKDatabase * secureDatabase;                       //@synthesize secureDatabase=_secureDatabase - In the implementation block
@property (nonatomic,retain) NSArray * containers;                                //@synthesize containers=_containers - In the implementation block
-(NSArray *)containers;
-(CKDatabase *)databaseWithZoneWidePCS;
-(CKDatabase *)secureDatabase;
-(id)initWithContainers:(id)arg1 database:(id)arg2 databaseWithZoneWidePCS:(id)arg3 secureDatabase:(id)arg4 ;
-(void)setContainers:(NSArray *)arg1 ;
-(CKDatabase *)database;
@end

