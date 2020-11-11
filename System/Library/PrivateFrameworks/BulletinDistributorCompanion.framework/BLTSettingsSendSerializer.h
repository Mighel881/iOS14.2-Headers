/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BulletinDistributorCompanion/BLTSettingsSendSerializerPassthrough.h>

@protocol OS_dispatch_queue;
@class NSObject, BLTSendQueueSerializer, NSMutableArray, NSMutableDictionary;

@interface BLTSettingsSendSerializer : BLTSettingsSendSerializerPassthrough {

	NSObject*<OS_dispatch_queue> _queue;
	BLTSendQueueSerializer* _queueSerializer;
	NSMutableArray* _completionHandlers;
	NSMutableDictionary* _ackHandlers;
	/*^block*/id _acknowledgementBlock;
	unsigned long long _ackHandlerCount;
	unsigned long long _responseCount;

}
-(id)init;
-(void)handleFileURL:(id)arg1 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(/*^block*/id)arg6 andResponse:(/*^block*/id)arg7 spoolToFile:(BOOL)arg8 ;
-(void)sendNowWithSent:(/*^block*/id)arg1 withAcknowledgement:(/*^block*/id)arg2 withTimeout:(id)arg3 ;
@end
