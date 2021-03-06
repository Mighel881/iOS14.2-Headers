/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsSubscription.framework/NewsSubscription
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NPSoftPaywallHeightProvider, NPDeferredHardPaywallHeightProvider, UIViewController;

@interface NPPaywall : NSObject {

	 paywallType;
	 softPaywallHeightProvider;
	 deferredHardPaywallHeightProvider;
	 paywallViewControllerWrapper;
	 delegate;
	 internalDelegate;

}

@property (readonly,nonatomic) long long paywallType; 
@property (readonly,nonatomic) NPSoftPaywallHeightProvider * softPaywallHeightProvider; 
@property (readonly,nonatomic) NPDeferredHardPaywallHeightProvider * deferredHardPaywallHeightProvider; 
@property (readonly,nonatomic) UIViewController * paywallViewController; 
@property (assign,__weak,nonatomic) id<NPPaywallDelegate> delegate; 
-(id)init;
-(id<NPPaywallDelegate>)delegate;
-(NPDeferredHardPaywallHeightProvider *)deferredHardPaywallHeightProvider;
-(UIViewController *)paywallViewController;
-(void)setDelegate:(id<NPPaywallDelegate>)arg1 ;
-(long long)paywallType;
-(NPSoftPaywallHeightProvider *)softPaywallHeightProvider;
@end

