/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSBagProtocol, AMSPurchaseResponseProtocol;
@interface AMSPurchaseQueueConfiguration : NSObject {

	id<AMSBagProtocol> _bag;
	id<AMSPurchaseResponseProtocol> _delegate;

}

@property (nonatomic,readonly) id<AMSBagProtocol> bag;                              //@synthesize bag=_bag - In the implementation block
@property (nonatomic,retain) id<AMSPurchaseResponseProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<AMSPurchaseResponseProtocol>)delegate;
-(id<AMSBagProtocol>)bag;
-(void)setDelegate:(id<AMSPurchaseResponseProtocol>)arg1 ;
-(id)initWithBag:(id)arg1 ;
@end

