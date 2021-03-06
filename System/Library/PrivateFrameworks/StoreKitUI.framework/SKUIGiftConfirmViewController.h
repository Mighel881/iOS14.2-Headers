/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/SKUIGiftStepViewController.h>

@class SKUIGiftConfirmView, SKUIGiftPurchaseRequest, SKUIFocusedTouchGestureRecognizer;

@interface SKUIGiftConfirmViewController : SKUIGiftStepViewController {

	SKUIGiftConfirmView* _confirmView;
	BOOL _isShowingConfirmation;
	SKUIGiftPurchaseRequest* _purchaseRequest;
	SKUIFocusedTouchGestureRecognizer* _touchRecognizer;

}
-(void)loadView;
-(void)dealloc;
-(id)initWithGift:(id)arg1 configuration:(id)arg2 ;
-(void)_termsButtonAction:(id)arg1 ;
-(id)_buyButtonTitle;
-(id)_newBuyBarButtonItemWithTitle:(id)arg1 ;
-(void)_purchaseGift;
-(void)_setShowingConfirmation:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_removeCancelGestureRecognizer;
-(void)_cancelBuyConfirmation:(id)arg1 ;
-(void)_showSuccessPage;
-(void)_finishPurchaseWithResult:(BOOL)arg1 errorMessage:(id)arg2 ;
-(id)_confirmButtonTitle;
-(void)_buyButtonAction:(id)arg1 ;
@end

