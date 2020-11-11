/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAWDSupportFramework.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDWifiAwdlD2dMigrationStats, NSMutableArray;

@interface AWDWiFiMetricsManagerAwdlUsage : PBCodable <NSCopying> {

	unsigned long long _noServiceIdleTime;
	unsigned long long _syncChangesCount;
	unsigned long long _timestamp;
	unsigned _advertiseAddFilteredCount;
	unsigned _advertiseAddTotalCount;
	unsigned _advertiseDeleteFilteredCount;
	unsigned _advertiseDeleteTotalCount;
	unsigned _appRxBytes;
	unsigned _appTxBytes;
	unsigned _browseAddFilteredCount;
	unsigned _browseAddTotalCount;
	unsigned _browseDeleteFilteredCount;
	unsigned _browseDeleteTotalCount;
	unsigned _cachedPeersDifferentInfra;
	unsigned _cachedPeersNotAssociated;
	unsigned _cachedPeersOn24G;
	unsigned _cachedPeersOn5G;
	unsigned _cachedPeersOnDFS;
	unsigned _cachedPeersSameInfra;
	AWDWifiAwdlD2dMigrationStats* _d2dMigrationStats;
	unsigned _dfspAirplayConnected;
	unsigned _dfspAirplayFailed;
	unsigned _dfspCSAReceivedFromAP;
	unsigned _dfspCSAReceivedFromPeer;
	unsigned _dfspResume;
	unsigned _dfspSuspect;
	unsigned _flags;
	NSMutableArray* _hopCountHistograms;
	unsigned _ifPacketFailures;
	unsigned _ifRxBytes;
	unsigned _ifTxBytes;
	unsigned _numAirplaySessions;
	unsigned _numDynSdbAirplayAllowed;
	unsigned _numDynSdbEntrySuccess;
	unsigned _numDynSdbExitDueToRate;
	unsigned _numDynSdbReEntrySuccess;
	unsigned _numOfCachedPeers;
	unsigned _numOfPeers;
	NSMutableArray* _parentRssiHistograms;
	unsigned _peerInfraChannel;
	unsigned _periodInMinutes;
	unsigned _selfInfraChannel;
	NSMutableArray* _services;
	NSMutableArray* _states;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasSelfInfraChannel; 
@property (assign,nonatomic) unsigned selfInfraChannel;                                     //@synthesize selfInfraChannel=_selfInfraChannel - In the implementation block
@property (assign,nonatomic) BOOL hasPeerInfraChannel; 
@property (assign,nonatomic) unsigned peerInfraChannel;                                     //@synthesize peerInfraChannel=_peerInfraChannel - In the implementation block
@property (assign,nonatomic) BOOL hasNumOfPeers; 
@property (assign,nonatomic) unsigned numOfPeers;                                           //@synthesize numOfPeers=_numOfPeers - In the implementation block
@property (assign,nonatomic) BOOL hasNumOfCachedPeers; 
@property (assign,nonatomic) unsigned numOfCachedPeers;                                     //@synthesize numOfCachedPeers=_numOfCachedPeers - In the implementation block
@property (assign,nonatomic) BOOL hasCachedPeersOn24G; 
@property (assign,nonatomic) unsigned cachedPeersOn24G;                                     //@synthesize cachedPeersOn24G=_cachedPeersOn24G - In the implementation block
@property (assign,nonatomic) BOOL hasCachedPeersOn5G; 
@property (assign,nonatomic) unsigned cachedPeersOn5G;                                      //@synthesize cachedPeersOn5G=_cachedPeersOn5G - In the implementation block
@property (assign,nonatomic) BOOL hasCachedPeersOnDFS; 
@property (assign,nonatomic) unsigned cachedPeersOnDFS;                                     //@synthesize cachedPeersOnDFS=_cachedPeersOnDFS - In the implementation block
@property (assign,nonatomic) BOOL hasCachedPeersNotAssociated; 
@property (assign,nonatomic) unsigned cachedPeersNotAssociated;                             //@synthesize cachedPeersNotAssociated=_cachedPeersNotAssociated - In the implementation block
@property (assign,nonatomic) BOOL hasFlags; 
@property (assign,nonatomic) unsigned flags;                                                //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) BOOL hasIfPacketFailures; 
@property (assign,nonatomic) unsigned ifPacketFailures;                                     //@synthesize ifPacketFailures=_ifPacketFailures - In the implementation block
@property (assign,nonatomic) BOOL hasIfRxBytes; 
@property (assign,nonatomic) unsigned ifRxBytes;                                            //@synthesize ifRxBytes=_ifRxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasIfTxBytes; 
@property (assign,nonatomic) unsigned ifTxBytes;                                            //@synthesize ifTxBytes=_ifTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasAppRxBytes; 
@property (assign,nonatomic) unsigned appRxBytes;                                           //@synthesize appRxBytes=_appRxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasAppTxBytes; 
@property (assign,nonatomic) unsigned appTxBytes;                                           //@synthesize appTxBytes=_appTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasPeriodInMinutes; 
@property (assign,nonatomic) unsigned periodInMinutes;                                      //@synthesize periodInMinutes=_periodInMinutes - In the implementation block
@property (nonatomic,retain) NSMutableArray * states;                                       //@synthesize states=_states - In the implementation block
@property (assign,nonatomic) BOOL hasNoServiceIdleTime; 
@property (assign,nonatomic) unsigned long long noServiceIdleTime;                          //@synthesize noServiceIdleTime=_noServiceIdleTime - In the implementation block
@property (assign,nonatomic) BOOL hasBrowseAddTotalCount; 
@property (assign,nonatomic) unsigned browseAddTotalCount;                                  //@synthesize browseAddTotalCount=_browseAddTotalCount - In the implementation block
@property (assign,nonatomic) BOOL hasBrowseAddFilteredCount; 
@property (assign,nonatomic) unsigned browseAddFilteredCount;                               //@synthesize browseAddFilteredCount=_browseAddFilteredCount - In the implementation block
@property (assign,nonatomic) BOOL hasBrowseDeleteTotalCount; 
@property (assign,nonatomic) unsigned browseDeleteTotalCount;                               //@synthesize browseDeleteTotalCount=_browseDeleteTotalCount - In the implementation block
@property (assign,nonatomic) BOOL hasBrowseDeleteFilteredCount; 
@property (assign,nonatomic) unsigned browseDeleteFilteredCount;                            //@synthesize browseDeleteFilteredCount=_browseDeleteFilteredCount - In the implementation block
@property (assign,nonatomic) BOOL hasAdvertiseAddTotalCount; 
@property (assign,nonatomic) unsigned advertiseAddTotalCount;                               //@synthesize advertiseAddTotalCount=_advertiseAddTotalCount - In the implementation block
@property (assign,nonatomic) BOOL hasAdvertiseAddFilteredCount; 
@property (assign,nonatomic) unsigned advertiseAddFilteredCount;                            //@synthesize advertiseAddFilteredCount=_advertiseAddFilteredCount - In the implementation block
@property (assign,nonatomic) BOOL hasAdvertiseDeleteTotalCount; 
@property (assign,nonatomic) unsigned advertiseDeleteTotalCount;                            //@synthesize advertiseDeleteTotalCount=_advertiseDeleteTotalCount - In the implementation block
@property (assign,nonatomic) BOOL hasAdvertiseDeleteFilteredCount; 
@property (assign,nonatomic) unsigned advertiseDeleteFilteredCount;                         //@synthesize advertiseDeleteFilteredCount=_advertiseDeleteFilteredCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * services;                                     //@synthesize services=_services - In the implementation block
@property (assign,nonatomic) BOOL hasCachedPeersSameInfra; 
@property (assign,nonatomic) unsigned cachedPeersSameInfra;                                 //@synthesize cachedPeersSameInfra=_cachedPeersSameInfra - In the implementation block
@property (assign,nonatomic) BOOL hasCachedPeersDifferentInfra; 
@property (assign,nonatomic) unsigned cachedPeersDifferentInfra;                            //@synthesize cachedPeersDifferentInfra=_cachedPeersDifferentInfra - In the implementation block
@property (assign,nonatomic) BOOL hasDfspCSAReceivedFromPeer; 
@property (assign,nonatomic) unsigned dfspCSAReceivedFromPeer;                              //@synthesize dfspCSAReceivedFromPeer=_dfspCSAReceivedFromPeer - In the implementation block
@property (assign,nonatomic) BOOL hasDfspCSAReceivedFromAP; 
@property (assign,nonatomic) unsigned dfspCSAReceivedFromAP;                                //@synthesize dfspCSAReceivedFromAP=_dfspCSAReceivedFromAP - In the implementation block
@property (assign,nonatomic) BOOL hasDfspSuspect; 
@property (assign,nonatomic) unsigned dfspSuspect;                                          //@synthesize dfspSuspect=_dfspSuspect - In the implementation block
@property (assign,nonatomic) BOOL hasDfspResume; 
@property (assign,nonatomic) unsigned dfspResume;                                           //@synthesize dfspResume=_dfspResume - In the implementation block
@property (assign,nonatomic) BOOL hasDfspAirplayConnected; 
@property (assign,nonatomic) unsigned dfspAirplayConnected;                                 //@synthesize dfspAirplayConnected=_dfspAirplayConnected - In the implementation block
@property (assign,nonatomic) BOOL hasDfspAirplayFailed; 
@property (assign,nonatomic) unsigned dfspAirplayFailed;                                    //@synthesize dfspAirplayFailed=_dfspAirplayFailed - In the implementation block
@property (nonatomic,retain) NSMutableArray * hopCountHistograms;                           //@synthesize hopCountHistograms=_hopCountHistograms - In the implementation block
@property (nonatomic,retain) NSMutableArray * parentRssiHistograms;                         //@synthesize parentRssiHistograms=_parentRssiHistograms - In the implementation block
@property (assign,nonatomic) BOOL hasSyncChangesCount; 
@property (assign,nonatomic) unsigned long long syncChangesCount;                           //@synthesize syncChangesCount=_syncChangesCount - In the implementation block
@property (assign,nonatomic) BOOL hasNumAirplaySessions; 
@property (assign,nonatomic) unsigned numAirplaySessions;                                   //@synthesize numAirplaySessions=_numAirplaySessions - In the implementation block
@property (assign,nonatomic) BOOL hasNumDynSdbAirplayAllowed; 
@property (assign,nonatomic) unsigned numDynSdbAirplayAllowed;                              //@synthesize numDynSdbAirplayAllowed=_numDynSdbAirplayAllowed - In the implementation block
@property (assign,nonatomic) BOOL hasNumDynSdbEntrySuccess; 
@property (assign,nonatomic) unsigned numDynSdbEntrySuccess;                                //@synthesize numDynSdbEntrySuccess=_numDynSdbEntrySuccess - In the implementation block
@property (assign,nonatomic) BOOL hasNumDynSdbExitDueToRate; 
@property (assign,nonatomic) unsigned numDynSdbExitDueToRate;                               //@synthesize numDynSdbExitDueToRate=_numDynSdbExitDueToRate - In the implementation block
@property (assign,nonatomic) BOOL hasNumDynSdbReEntrySuccess; 
@property (assign,nonatomic) unsigned numDynSdbReEntrySuccess;                              //@synthesize numDynSdbReEntrySuccess=_numDynSdbReEntrySuccess - In the implementation block
@property (nonatomic,readonly) BOOL hasD2dMigrationStats; 
@property (nonatomic,retain) AWDWifiAwdlD2dMigrationStats * d2dMigrationStats;              //@synthesize d2dMigrationStats=_d2dMigrationStats - In the implementation block
+(Class)hopCountHistogramType;
+(Class)parentRssiHistogramType;
+(Class)statesType;
+(Class)servicesType;
-(NSMutableArray *)services;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)browseAddTotalCount;
-(BOOL)hasSelfInfraChannel;
-(void)setAdvertiseDeleteTotalCount:(unsigned)arg1 ;
-(void)setHasBrowseAddFilteredCount:(BOOL)arg1 ;
-(BOOL)hasFlags;
-(unsigned)numDynSdbReEntrySuccess;
-(void)setAdvertiseAddFilteredCount:(unsigned)arg1 ;
-(void)setAppTxBytes:(unsigned)arg1 ;
-(void)setNumDynSdbAirplayAllowed:(unsigned)arg1 ;
-(BOOL)hasIfPacketFailures;
-(void)setHasFlags:(BOOL)arg1 ;
-(void)setHasNumAirplaySessions:(BOOL)arg1 ;
-(BOOL)hasNumDynSdbReEntrySuccess;
-(BOOL)hasD2dMigrationStats;
-(unsigned)ifRxBytes;
-(void)setAdvertiseAddTotalCount:(unsigned)arg1 ;
-(void)setStates:(NSMutableArray *)arg1 ;
-(void)setHasNumOfCachedPeers:(BOOL)arg1 ;
-(void)setSyncChangesCount:(unsigned long long)arg1 ;
-(unsigned)cachedPeersOn5G;
-(NSMutableArray *)states;
-(void)setBrowseDeleteTotalCount:(unsigned)arg1 ;
-(void)setSelfInfraChannel:(unsigned)arg1 ;
-(void)setCachedPeersNotAssociated:(unsigned)arg1 ;
-(void)setHasDfspCSAReceivedFromAP:(BOOL)arg1 ;
-(void)setNumOfPeers:(unsigned)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setNumAirplaySessions:(unsigned)arg1 ;
-(unsigned long long)hash;
-(unsigned)numOfPeers;
-(BOOL)hasBrowseDeleteTotalCount;
-(BOOL)hasCachedPeersOn5G;
-(unsigned)numDynSdbEntrySuccess;
-(unsigned)flags;
-(void)setBrowseAddFilteredCount:(unsigned)arg1 ;
-(void)setHasNumOfPeers:(BOOL)arg1 ;
-(id)hopCountHistogramAtIndex:(unsigned long long)arg1 ;
-(void)setHasCachedPeersOn5G:(BOOL)arg1 ;
-(BOOL)hasDfspAirplayConnected;
-(BOOL)hasTimestamp;
-(unsigned)advertiseDeleteTotalCount;
-(unsigned)dfspAirplayConnected;
-(unsigned)browseDeleteTotalCount;
-(void)setHasSyncChangesCount:(BOOL)arg1 ;
-(BOOL)hasBrowseDeleteFilteredCount;
-(void)setHasIfTxBytes:(BOOL)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBrowseAddTotalCount:(unsigned)arg1 ;
-(void)setCachedPeersSameInfra:(unsigned)arg1 ;
-(void)setCachedPeersOn24G:(unsigned)arg1 ;
-(unsigned)numDynSdbExitDueToRate;
-(unsigned)ifPacketFailures;
-(unsigned long long)servicesCount;
-(void)clearStates;
-(void)setPeerInfraChannel:(unsigned)arg1 ;
-(NSMutableArray *)hopCountHistograms;
-(unsigned)numOfCachedPeers;
-(void)setBrowseDeleteFilteredCount:(unsigned)arg1 ;
-(BOOL)hasDfspSuspect;
-(void)setHasDfspAirplayConnected:(BOOL)arg1 ;
-(void)setHasAdvertiseDeleteFilteredCount:(BOOL)arg1 ;
-(void)setFlags:(unsigned)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setNumDynSdbEntrySuccess:(unsigned)arg1 ;
-(void)clearServices;
-(void)setHasAdvertiseAddFilteredCount:(BOOL)arg1 ;
-(BOOL)hasAppRxBytes;
-(unsigned)advertiseDeleteFilteredCount;
-(void)setParentRssiHistograms:(NSMutableArray *)arg1 ;
-(BOOL)hasDfspCSAReceivedFromAP;
-(BOOL)hasNumDynSdbExitDueToRate;
-(void)setHasDfspCSAReceivedFromPeer:(BOOL)arg1 ;
-(unsigned long long)parentRssiHistogramsCount;
-(void)addStates:(id)arg1 ;
-(void)setAdvertiseDeleteFilteredCount:(unsigned)arg1 ;
-(unsigned)advertiseAddFilteredCount;
-(BOOL)hasIfRxBytes;
-(void)setHasNumDynSdbReEntrySuccess:(BOOL)arg1 ;
-(BOOL)hasAppTxBytes;
-(unsigned long long)syncChangesCount;
-(id)description;
-(unsigned)peerInfraChannel;
-(unsigned)dfspResume;
-(BOOL)hasNumDynSdbAirplayAllowed;
-(void)setHopCountHistograms:(NSMutableArray *)arg1 ;
-(unsigned long long)statesCount;
-(void)addServices:(id)arg1 ;
-(BOOL)hasDfspResume;
-(BOOL)isEqual:(id)arg1 ;
-(void)setHasCachedPeersSameInfra:(BOOL)arg1 ;
-(BOOL)hasBrowseAddTotalCount;
-(void)setDfspSuspect:(unsigned)arg1 ;
-(void)setHasDfspAirplayFailed:(BOOL)arg1 ;
-(unsigned long long)noServiceIdleTime;
-(unsigned)dfspAirplayFailed;
-(void)setHasCachedPeersOnDFS:(BOOL)arg1 ;
-(void)setDfspCSAReceivedFromPeer:(unsigned)arg1 ;
-(BOOL)hasCachedPeersDifferentInfra;
-(void)copyTo:(id)arg1 ;
-(unsigned)cachedPeersOn24G;
-(NSMutableArray *)parentRssiHistograms;
-(void)setCachedPeersOnDFS:(unsigned)arg1 ;
-(void)setIfPacketFailures:(unsigned)arg1 ;
-(void)setHasIfRxBytes:(BOOL)arg1 ;
-(void)setDfspAirplayConnected:(unsigned)arg1 ;
-(unsigned)advertiseAddTotalCount;
-(void)setCachedPeersOn5G:(unsigned)arg1 ;
-(unsigned)cachedPeersNotAssociated;
-(void)setDfspResume:(unsigned)arg1 ;
-(void)setHasCachedPeersNotAssociated:(BOOL)arg1 ;
-(BOOL)hasNumDynSdbEntrySuccess;
-(void)setHasPeerInfraChannel:(BOOL)arg1 ;
-(void)setCachedPeersDifferentInfra:(unsigned)arg1 ;
-(AWDWifiAwdlD2dMigrationStats *)d2dMigrationStats;
-(BOOL)hasSyncChangesCount;
-(BOOL)hasNumOfPeers;
-(BOOL)hasDfspAirplayFailed;
-(void)setHasIfPacketFailures:(BOOL)arg1 ;
-(void)setHasDfspResume:(BOOL)arg1 ;
-(void)setDfspCSAReceivedFromAP:(unsigned)arg1 ;
-(void)setServices:(NSMutableArray *)arg1 ;
-(BOOL)hasAdvertiseDeleteFilteredCount;
-(void)setHasBrowseDeleteTotalCount:(BOOL)arg1 ;
-(BOOL)hasCachedPeersOnDFS;
-(void)setHasCachedPeersOn24G:(BOOL)arg1 ;
-(void)addParentRssiHistogram:(id)arg1 ;
-(unsigned)selfInfraChannel;
-(void)clearHopCountHistograms;
-(unsigned)browseDeleteFilteredCount;
-(id)statesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasNumAirplaySessions;
-(void)setNoServiceIdleTime:(unsigned long long)arg1 ;
-(BOOL)hasAdvertiseAddTotalCount;
-(BOOL)hasCachedPeersNotAssociated;
-(BOOL)hasAdvertiseDeleteTotalCount;
-(unsigned)dfspCSAReceivedFromPeer;
-(unsigned)ifTxBytes;
-(unsigned)appTxBytes;
-(void)setHasNoServiceIdleTime:(BOOL)arg1 ;
-(BOOL)hasCachedPeersOn24G;
-(void)writeTo:(id)arg1 ;
-(void)setHasAdvertiseDeleteTotalCount:(BOOL)arg1 ;
-(BOOL)hasBrowseAddFilteredCount;
-(BOOL)hasNoServiceIdleTime;
-(BOOL)hasPeerInfraChannel;
-(id)parentRssiHistogramAtIndex:(unsigned long long)arg1 ;
-(void)setHasBrowseAddTotalCount:(BOOL)arg1 ;
-(unsigned long long)timestamp;
-(unsigned long long)hopCountHistogramsCount;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)hasDfspCSAReceivedFromPeer;
-(void)setIfRxBytes:(unsigned)arg1 ;
-(BOOL)hasPeriodInMinutes;
-(void)setNumDynSdbExitDueToRate:(unsigned)arg1 ;
-(void)setHasAppTxBytes:(BOOL)arg1 ;
-(BOOL)hasAdvertiseAddFilteredCount;
-(unsigned)dfspSuspect;
-(void)setHasSelfInfraChannel:(BOOL)arg1 ;
-(void)setNumOfCachedPeers:(unsigned)arg1 ;
-(unsigned)browseAddFilteredCount;
-(void)setIfTxBytes:(unsigned)arg1 ;
-(void)clearParentRssiHistograms;
-(unsigned)cachedPeersDifferentInfra;
-(void)setNumDynSdbReEntrySuccess:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHasNumDynSdbAirplayAllowed:(BOOL)arg1 ;
-(unsigned)numDynSdbAirplayAllowed;
-(void)setAppRxBytes:(unsigned)arg1 ;
-(id)servicesAtIndex:(unsigned long long)arg1 ;
-(void)setHasPeriodInMinutes:(BOOL)arg1 ;
-(void)setHasDfspSuspect:(BOOL)arg1 ;
-(void)setDfspAirplayFailed:(unsigned)arg1 ;
-(void)setHasNumDynSdbEntrySuccess:(BOOL)arg1 ;
-(void)setHasAppRxBytes:(BOOL)arg1 ;
-(void)setPeriodInMinutes:(unsigned)arg1 ;
-(BOOL)hasCachedPeersSameInfra;
-(BOOL)hasNumOfCachedPeers;
-(unsigned)periodInMinutes;
-(void)addHopCountHistogram:(id)arg1 ;
-(unsigned)dfspCSAReceivedFromAP;
-(void)setHasAdvertiseAddTotalCount:(BOOL)arg1 ;
-(BOOL)hasIfTxBytes;
-(void)dealloc;
-(unsigned)cachedPeersOnDFS;
-(unsigned)cachedPeersSameInfra;
-(void)setHasNumDynSdbExitDueToRate:(BOOL)arg1 ;
-(void)setHasCachedPeersDifferentInfra:(BOOL)arg1 ;
-(unsigned)appRxBytes;
-(unsigned)numAirplaySessions;
-(void)setD2dMigrationStats:(AWDWifiAwdlD2dMigrationStats *)arg1 ;
-(void)setHasBrowseDeleteFilteredCount:(BOOL)arg1 ;
@end
