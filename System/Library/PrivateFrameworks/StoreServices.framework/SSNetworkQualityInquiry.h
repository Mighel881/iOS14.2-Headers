/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NWNetworkOfInterestManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSArray, SSPromise, NWNetworkOfInterestManager, NSObject, NSMutableSet, NSMutableArray;

@interface SSNetworkQualityInquiry : NSObject <NWNetworkOfInterestManagerDelegate> {

	NSArray* _lastKnownReports;
	long long _lastReportRefreshTimestamp;
	SSPromise* _currentInvestigation;
	NWNetworkOfInterestManager* _manager;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _knownNetworks;
	NSMutableArray* _knownNetworksReadyHandlers;

}

@property (nonatomic,readonly) NWNetworkOfInterestManager * manager;                   //@synthesize manager=_manager - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSMutableSet * knownNetworks;                           //@synthesize knownNetworks=_knownNetworks - In the implementation block
@property (nonatomic,retain) NSMutableArray * knownNetworksReadyHandlers;              //@synthesize knownNetworksReadyHandlers=_knownNetworksReadyHandlers - In the implementation block
+(id)sharedInstance;
+(BOOL)isEntitled;
-(void)drainKnownNetworksReadyHandlers;
-(void)performWhenKnownNetworksReady:(/*^block*/id)arg1 ;
-(void)didStartTrackingNOI:(id)arg1 ;
-(void)setKnownNetworksReadyHandlers:(NSMutableArray *)arg1 ;
-(id)init;
-(NSMutableSet *)knownNetworks;
-(void)didStopTrackingAllNOIs:(id)arg1 ;
-(id)investigateNetworks;
-(void)didStopTrackingNOI:(id)arg1 ;
-(NWNetworkOfInterestManager *)manager;
-(BOOL)areKnownNetworksReady;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
-(NSMutableArray *)knownNetworksReadyHandlers;
@end

