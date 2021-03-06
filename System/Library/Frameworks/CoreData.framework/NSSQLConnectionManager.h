/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSQLCore;

@interface NSSQLConnectionManager : NSObject {

	NSSQLCore* _sqlCore;
	/*^block*/id _filter;

}

@property (nonatomic,copy) id filter;              //@synthesize filter=_filter - In the implementation block
-(id)sqlCore;
-(void)setFilter:(id)arg1 ;
-(id)initWithSQLCore:(id)arg1 seedConnection:(id)arg2 ;
-(id)filter;
-(BOOL)willHandleStoreRequest:(id)arg1 ;
-(BOOL)handleStoreRequest:(id)arg1 ;
-(id)initializationConnection;
-(void)scheduleConnectionsBarrier:(/*^block*/id)arg1 ;
-(void)disconnectAllConnections;
-(void)setExclusiveLockingMode:(BOOL)arg1 ;
-(void)scheduleBarrierBlock:(/*^block*/id)arg1 ;
-(id)initWithSQLCore:(id)arg1 priority:(unsigned long long)arg2 seedConnection:(id)arg3 ;
-(void)dealloc;
@end

