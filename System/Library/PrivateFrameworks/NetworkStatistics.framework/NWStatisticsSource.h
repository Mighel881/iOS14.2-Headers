/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NWStatisticsSourceDelegate;
#import <NetworkStatistics/NetworkStatistics-Structs.h>
@class NWStatisticsManager;

@interface NWStatisticsSource : NSObject {

	unsigned _filter;
	nstat_counts _last_counts;
	BOOL _removing;
	unsigned _provider;
	id<NWStatisticsSourceDelegate> _delegate;
	NWStatisticsManager* _manager;
	unsigned long long _reference;
	unsigned long long _countsSeqno;
	unsigned long long _descriptorSeqno;

}

@property (retain) id<NWStatisticsSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) NWStatisticsManager * manager;                      //@synthesize manager=_manager - In the implementation block
@property (assign) unsigned long long reference;                         //@synthesize reference=_reference - In the implementation block
@property (assign) BOOL removing;                                        //@synthesize removing=_removing - In the implementation block
@property (assign) unsigned long long countsSeqno;                       //@synthesize countsSeqno=_countsSeqno - In the implementation block
@property (assign) unsigned long long descriptorSeqno;                   //@synthesize descriptorSeqno=_descriptorSeqno - In the implementation block
@property (readonly) unsigned provider;                                  //@synthesize provider=_provider - In the implementation block
@property (readonly) const nstat_counts* _nstat_counts; 
@property (readonly) unsigned long long sourceIdentifier; 
@property (readonly) unsigned long long snapshotRevision; 
+(id)createSourceForProvider:(unsigned)arg1 srcRef:(unsigned long long)arg2 manager:(id)arg3 ;
-(unsigned long long)reference;
-(id)currentSnapshot;
-(void)setCountsSeqno:(unsigned long long)arg1 ;
-(int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
-(id)init;
-(void)queryCounts;
-(id<NWStatisticsSourceDelegate>)delegate;
-(void)queryDescription;
-(id)initWithManager:(id)arg1 source:(unsigned long long)arg2 provider:(unsigned)arg3 ;
-(void)queryUpdate;
-(void)setReference:(unsigned long long)arg1 ;
-(BOOL)handleCounts:(const nstat_counts*)arg1 ;
-(id)_currentSnapshot;
-(void)setDelegate:(id<NWStatisticsSourceDelegate>)arg1 ;
-(BOOL)handleMessage:(nstat_msg_hdr*)arg1 length:(long long)arg2 ;
-(unsigned long long)countsSeqno;
-(unsigned long long)sourceIdentifier;
-(void)setRemoving:(BOOL)arg1 ;
-(NWStatisticsManager *)manager;
-(void)setDescriptorSeqno:(unsigned long long)arg1 ;
-(BOOL)removing;
-(unsigned)provider;
-(BOOL)_handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 events:(unsigned long long)arg3 ;
-(unsigned long long)descriptorSeqno;
-(unsigned long long)snapshotRevision;
-(const nstat_counts*)_nstat_counts;
@end

