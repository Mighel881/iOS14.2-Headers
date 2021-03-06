/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <StoreServices/StoreServices-Structs.h>
@class NSObject;

@interface SSVFairPlaySubscriptionController : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _hasValidSubscriptionStatusDidChangeNotifyToken;
	int _subscriptionStatusDidChangeNotifyToken;

}
-(BOOL)generateSubscriptionLeaseRequestWithAccountUniqueID:(unsigned long long)arg1 transactionType:(unsigned)arg2 certificateData:(id)arg3 assetIDData:(id)arg4 returningLeaseData:(id*)arg5 subscriptionBagData:(id*)arg6 error:(id*)arg7 ;
-(id)init;
-(BOOL)stopSubscriptionLease:(id*)arg1 ;
-(BOOL)importSubscriptionKeyBagData:(id)arg1 leaseInfoData:(id)arg2 returningError:(id*)arg3 ;
-(id)subscriptionStatusForAccountUniqueIdentifier:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)_subscriptionStatusForFPSubscriptionInfo:(FPSubscriptionInfo_)arg1 ;
-(void)_enumerateSubscriptionInfoUsingBlock:(/*^block*/id)arg1 ;
-(id)_accountUniqueIdentifierToSubscriptionStatusWithFPSubscriptionInfoList:(FPSubscriptionInfo_*)arg1 subscriptionInfoListLength:(unsigned)arg2 ;
-(void)_notifySubscriptionStatusDidChange;
-(void)enumerateAccountSubscriptionStatusUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)generateSubscriptionBagRequestWithAccountUniqueIdentifier:(unsigned long long)arg1 transactionType:(unsigned)arg2 machineIDData:(id)arg3 returningSubscriptionBagData:(id*)arg4 error:(id*)arg5 ;
-(BOOL)importSubscriptionKeyBagData:(id)arg1 returningError:(id*)arg2 ;
@end

