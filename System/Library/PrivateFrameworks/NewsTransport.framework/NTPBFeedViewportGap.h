/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NTPBFeedRefreshSessionForYouConfig, NSString, NTPBFeedViewportEdition, NTPBDate;

@interface NTPBFeedViewportGap : PBCodable <NSCopying> {

	SCD_Struct_NT10* _activeGroupEmitterIDRefs;
	SCD_Struct_NT10* _groupEmitterIDRefs;
	NSMutableArray* _cursors;
	NTPBFeedRefreshSessionForYouConfig* _forYouConfig;
	NSString* _identifier;
	NTPBFeedViewportEdition* _lastCompletedEdition;
	NTPBDate* _modificationDate;
	NSMutableArray* _pendingGroups;
	NTPBDate* _refreshDate;
	BOOL _isOffline;
	BOOL _reachedEnd;
	SCD_Struct_CO1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;                                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasRefreshDate; 
@property (nonatomic,retain) NTPBDate * refreshDate;                                          //@synthesize refreshDate=_refreshDate - In the implementation block
@property (nonatomic,readonly) BOOL hasModificationDate; 
@property (nonatomic,retain) NTPBDate * modificationDate;                                     //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) BOOL hasReachedEnd; 
@property (assign,nonatomic) BOOL reachedEnd;                                                 //@synthesize reachedEnd=_reachedEnd - In the implementation block
@property (nonatomic,readonly) unsigned long long groupEmitterIDRefsCount; 
@property (nonatomic,readonly) int* groupEmitterIDRefs; 
@property (nonatomic,retain) NSMutableArray * cursors;                                        //@synthesize cursors=_cursors - In the implementation block
@property (nonatomic,readonly) BOOL hasLastCompletedEdition; 
@property (nonatomic,retain) NTPBFeedViewportEdition * lastCompletedEdition;                  //@synthesize lastCompletedEdition=_lastCompletedEdition - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingGroups;                                  //@synthesize pendingGroups=_pendingGroups - In the implementation block
@property (nonatomic,readonly) unsigned long long activeGroupEmitterIDRefsCount; 
@property (nonatomic,readonly) int* activeGroupEmitterIDRefs; 
@property (assign,nonatomic) BOOL hasIsOffline; 
@property (assign,nonatomic) BOOL isOffline;                                                  //@synthesize isOffline=_isOffline - In the implementation block
@property (nonatomic,readonly) BOOL hasForYouConfig; 
@property (nonatomic,retain) NTPBFeedRefreshSessionForYouConfig * forYouConfig;               //@synthesize forYouConfig=_forYouConfig - In the implementation block
+(Class)cursorsType;
+(Class)pendingGroupsType;
-(BOOL)isOffline;
-(void)mergeFrom:(id)arg1 ;
-(void)clearGroupEmitterIDRefs;
-(void)setHasReachedEnd:(BOOL)arg1 ;
-(void)setReachedEnd:(BOOL)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)hasReachedEnd;
-(unsigned long long)hash;
-(NTPBFeedViewportEdition *)lastCompletedEdition;
-(void)setForYouConfig:(NTPBFeedRefreshSessionForYouConfig *)arg1 ;
-(int)groupEmitterIDRefAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)groupEmitterIDRefsCount;
-(id)pendingGroupsAtIndex:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(void)addActiveGroupEmitterIDRefs:(int)arg1 ;
-(void)setModificationDate:(NTPBDate *)arg1 ;
-(NSString *)identifier;
-(BOOL)readFrom:(id)arg1 ;
-(void)setCursors:(NSMutableArray *)arg1 ;
-(void)setHasIsOffline:(BOOL)arg1 ;
-(NTPBDate *)refreshDate;
-(unsigned long long)activeGroupEmitterIDRefsCount;
-(unsigned long long)cursorsCount;
-(BOOL)hasModificationDate;
-(void)addPendingGroups:(id)arg1 ;
-(BOOL)hasLastCompletedEdition;
-(id)description;
-(void)setPendingGroups:(NSMutableArray *)arg1 ;
-(BOOL)hasForYouConfig;
-(void)addCursors:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasIsOffline;
-(void)setGroupEmitterIDRefs:(int*)arg1 count:(unsigned long long)arg2 ;
-(int*)groupEmitterIDRefs;
-(BOOL)hasRefreshDate;
-(void)addGroupEmitterIDRef:(int)arg1 ;
-(NTPBDate *)modificationDate;
-(NSMutableArray *)pendingGroups;
-(void)setIdentifier:(NSString *)arg1 ;
-(BOOL)reachedEnd;
-(void)setActiveGroupEmitterIDRefs:(int*)arg1 count:(unsigned long long)arg2 ;
-(void)clearPendingGroups;
-(void)clearCursors;
-(void)setIsOffline:(BOOL)arg1 ;
-(NTPBFeedRefreshSessionForYouConfig *)forYouConfig;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)cursors;
-(unsigned long long)pendingGroupsCount;
-(void)clearActiveGroupEmitterIDRefs;
-(int)activeGroupEmitterIDRefsAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLastCompletedEdition:(NTPBFeedViewportEdition *)arg1 ;
-(void)setRefreshDate:(NTPBDate *)arg1 ;
-(int*)activeGroupEmitterIDRefs;
-(void)dealloc;
-(id)cursorsAtIndex:(unsigned long long)arg1 ;
@end
