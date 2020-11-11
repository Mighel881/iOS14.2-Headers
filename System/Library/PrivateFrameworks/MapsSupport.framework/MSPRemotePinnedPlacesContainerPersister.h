/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapsSupport/MSPContainerPersister.h>
#import <libobjc.A.dylib/MSPMapsPushDaemonProxyObserver.h>

@class NSUUID, NSString;

@interface MSPRemotePinnedPlacesContainerPersister : MSPContainerPersister <MSPMapsPushDaemonProxyObserver> {

	BOOL _hasRemoteProxy;
	NSUUID* _lastOperationIdentifier;

}

@property (assign,nonatomic) BOOL hasRemoteProxy;                           //@synthesize hasRemoteProxy=_hasRemoteProxy - In the implementation block
@property (nonatomic,retain) NSUUID * lastOperationIdentifier;              //@synthesize lastOperationIdentifier=_lastOperationIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)historyDidChange;
-(void)favoritesDidChange;
-(void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3 ;
-(void)eraseWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)fetchStateSnapshotWithCompletion:(/*^block*/id)arg1 ;
-(void)commitEditWithNewContents:(id)arg1 edits:(id)arg2 appliedToOldContents:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)commitByMergingWithStateSnapshot:(id)arg1 mergeOptions:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)hasRemoteProxy;
-(void)setHasRemoteProxy:(BOOL)arg1 ;
-(NSUUID *)lastOperationIdentifier;
-(void)setLastOperationIdentifier:(NSUUID *)arg1 ;
@end
