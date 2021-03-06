/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NTKJetsamInfoFetcher;

@interface NTKJetsamMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _monitorQ;
	NSObject*<OS_dispatch_source> _monitorTimer;
	int _transactionCount;
	NTKJetsamInfoFetcher* _fetcher;

}
+(id)sharedJetsamMonitor;
-(id)init;
-(void)incrementTransactionCount;
-(void)decrementTransactionCount;
@end

