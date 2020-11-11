/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager;

@interface HMDCloudManagerDataSource : HMFObject {

	HMDHomeManager* _homeManager;

}

@property (__weak,readonly) HMDHomeManager * homeManager;              //@synthesize homeManager=_homeManager - In the implementation block
-(HMDHomeManager *)homeManager;
-(id)initWithHomeManager:(id)arg1 ;
-(BOOL)isKeychainSyncEnabled;
-(BOOL)supportsKeyTransferServer;
-(id)keyTransferAgent;
-(BOOL)isControllerKeyAvailable;
-(unsigned long long)dataMigrationOptions;
-(id)queryDatabaseOperationWithBlock:(/*^block*/id)arg1 ;
@end
