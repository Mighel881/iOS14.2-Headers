/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PKExplanationViewController.h>
#import <libobjc.A.dylib/PKPaymentSetupPresentationProtocol.h>
#import <libobjc.A.dylib/PKExplanationViewControllerDelegate.h>
#import <libobjc.A.dylib/PKViewControllerPreflightable.h>

@protocol PKSetupFlowControllerProtocol, PKPaymentSetupViewControllerDelegate;
@class PKPaymentProvisioningController, PKPaymentSetupProduct, PKDynamicProvisioningPageContent, UIImage, NSString;

@interface PKOnBoardingViewController : PKExplanationViewController <PKPaymentSetupPresentationProtocol, PKExplanationViewControllerDelegate, PKViewControllerPreflightable> {

	id<PKSetupFlowControllerProtocol> _parentFlowController;
	id<PKPaymentSetupViewControllerDelegate> _setupDelegate;
	PKPaymentProvisioningController* _provisioningController;
	PKPaymentSetupProduct* _paymentSetupProduct;
	PKDynamicProvisioningPageContent* _currentPage;
	UIImage* _heroImage;

}

@property (assign,nonatomic,__weak) id<PKSetupFlowControllerProtocol> parentFlowController;              //@synthesize parentFlowController=_parentFlowController - In the implementation block
@property (assign,nonatomic,__weak) id<PKPaymentSetupViewControllerDelegate> setupDelegate;              //@synthesize setupDelegate=_setupDelegate - In the implementation block
@property (nonatomic,retain) PKPaymentProvisioningController * provisioningController;                   //@synthesize provisioningController=_provisioningController - In the implementation block
@property (nonatomic,retain) PKPaymentSetupProduct * paymentSetupProduct;                                //@synthesize paymentSetupProduct=_paymentSetupProduct - In the implementation block
@property (nonatomic,retain) PKDynamicProvisioningPageContent * currentPage;                             //@synthesize currentPage=_currentPage - In the implementation block
@property (nonatomic,retain) UIImage * heroImage;                                                        //@synthesize heroImage=_heroImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)paymentSetupMarker;
-(void)preflightWithCompletion:(/*^block*/id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIImage *)heroImage;
-(PKDynamicProvisioningPageContent *)currentPage;
-(id<PKPaymentSetupViewControllerDelegate>)setupDelegate;
-(id<PKSetupFlowControllerProtocol>)parentFlowController;
-(void)handleSetupLater;
-(void)handleProductAvailable;
-(id)nextOnboardingViewControllerWithPage:(id)arg1 product:(id)arg2 ;
-(void)setCurrentPage:(PKDynamicProvisioningPageContent *)arg1 ;
-(void)setSetupDelegate:(id<PKPaymentSetupViewControllerDelegate>)arg1 ;
-(void)explanationViewDidSelectContinue:(id)arg1 ;
-(void)explanationViewDidSelectSetupLater:(id)arg1 ;
-(void)explanationViewDidSelectBodyButton:(id)arg1 ;
-(void)viewDidLoad;
-(void)setParentFlowController:(id<PKSetupFlowControllerProtocol>)arg1 ;
-(void)handleNotifyRequested;
-(PKPaymentSetupProduct *)paymentSetupProduct;
-(void)setPaymentSetupProduct:(PKPaymentSetupProduct *)arg1 ;
-(void)setHeroImage:(UIImage *)arg1 ;
-(id)initWithParentFlowController:(id)arg1 setupDelegate:(id)arg2 context:(long long)arg3 provisioningController:(id)arg4 paymentSetupProduct:(id)arg5 currentPage:(id)arg6 ;
-(void)explanationViewControllerDidSelectCancel:(id)arg1 ;
-(void)explanationViewControllerDidSelectDone:(id)arg1 ;
-(PKPaymentProvisioningController *)provisioningController;
-(void)terminateSetupFlow;
-(void)setProvisioningController:(PKPaymentProvisioningController *)arg1 ;
@end
