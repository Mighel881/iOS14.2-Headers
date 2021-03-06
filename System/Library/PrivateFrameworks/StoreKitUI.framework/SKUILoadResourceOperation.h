/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class SKUIClientContext, NSLock, SKUIResourceRequest;

@interface SKUILoadResourceOperation : NSOperation {

	SKUIClientContext* _clientContext;
	NSLock* _lock;
	/*^block*/id _outputBlock;
	SKUIResourceRequest* _request;
	long long __loadReason;

}

@property (assign,setter=_setLoadReason:,nonatomic) long long _loadReason;              //@synthesize _loadReason=__loadReason - In the implementation block
@property (copy,readonly) SKUIResourceRequest * resourceRequest; 
@property (retain) SKUIClientContext * clientContext; 
@property (copy) id outputBlock; 
-(id)init;
-(void)_setLoadReason:(long long)arg1 ;
-(void)setOutputBlock:(id)arg1 ;
-(long long)_loadReason;
-(void)setClientContext:(SKUIClientContext *)arg1 ;
-(void)main;
-(id)outputBlock;
-(SKUIClientContext *)clientContext;
-(void)cancel;
-(id)initWithResourceRequest:(id)arg1 ;
-(SKUIResourceRequest *)resourceRequest;
-(id)_initSKUILoadResourceOperation;
@end

