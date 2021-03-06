/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEODBReader.h>

@interface GEONavdCacheDBReader : GEODBReader {

	sqlite3_stmtRef _sqlReadAllEntries;
	sqlite3_stmtRef _sqlReadEntriesForHash;
	sqlite3_stmtRef _sqlReadKeysForHash;
	sqlite3_stmtRef _sqlReadNextTimerTimeStamp;
	sqlite3_stmtRef _sqlReadEntriesBeforeTimeStamp;
	sqlite3_stmtRef _sqlReadRowIdsOfEntriesBeforeTimeStamp;
	sqlite3_stmtRef _sqlReadEntryWithRowId;
	sqlite3_stmtRef _sqlCountEntries;

}
-(void)_cacheEntriesForHash:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_cacheEntryForNextRefreshWithHandler:(/*^block*/id)arg1 ;
-(void)_cacheRowIdsOfEntriesBeforeTimeStamp:(double)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_cacheEntriesBeforeTimeStamp:(double)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_cacheKeysForHash:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_openDB;
-(void)_openDBIfNotAlreadyOpen;
-(void)_cacheEntryWithRowId:(long long)arg1 handler:(/*^block*/id)arg2 ;
-(void)_allCacheEntriesWithHandler:(/*^block*/id)arg1 ;
-(long long)_numberOfEntries;
-(void)dealloc;
@end

