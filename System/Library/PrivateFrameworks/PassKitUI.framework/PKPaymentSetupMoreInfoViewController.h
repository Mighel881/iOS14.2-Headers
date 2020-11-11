/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKExplanationViewController.h>

@protocol PKPaymentWebServiceTargetDeviceProtocol;
@class PKSecureElementPass, NSArray;

@interface PKPaymentSetupMoreInfoViewController : PKExplanationViewController {

	BOOL _isFinalViewController;
	PKSecureElementPass* _pass;
	NSArray* _moreInfoItems;
	id<PKPaymentWebServiceTargetDeviceProtocol> _targetDevice;
	/*^block*/id _dismissalHandler;

}

@property (nonatomic,retain,readonly) PKSecureElementPass * pass;                                     //@synthesize pass=_pass - In the implementation block
@property (nonatomic,retain,readonly) NSArray * moreInfoItems;                                        //@synthesize moreInfoItems=_moreInfoItems - In the implementation block
@property (nonatomic,readonly) id<PKPaymentWebServiceTargetDeviceProtocol> targetDevice;              //@synthesize targetDevice=_targetDevice - In the implementation block
@property (nonatomic,copy) id dismissalHandler;                                                       //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
@property (assign,nonatomic) BOOL isFinalViewController;                                              //@synthesize isFinalViewController=_isFinalViewController - In the implementation block
-(void)_next;
-(id<PKPaymentWebServiceTargetDeviceProtocol>)targetDevice;
-(id)_currentItem;
-(unsigned long long)edgesForExtendedLayout;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)explanationViewDidSelectBodyButton:(id)arg1 ;
-(void)_handlePush;
-(void)_handleDismissal;
-(void)_alternateActionWithCompletion:(/*^block*/id)arg1 ;
-(void)_linkTapped;
-(id)initWithMoreInfoItems:(id)arg1 paymentPass:(id)arg2 targetDevice:(id)arg3 context:(long long)arg4 dismissalHandler:(/*^block*/id)arg5 ;
-(BOOL)isFinalViewController;
-(void)setIsFinalViewController:(BOOL)arg1 ;
-(NSArray *)moreInfoItems;
-(long long)preferredStatusBarStyle;
-(id)dismissalHandler;
-(PKSecureElementPass *)pass;
-(void)loadView;
-(void)setDismissalHandler:(id)arg1 ;
-(CGSize)_snapshotSize;
-(id)_nextItems;
@end
