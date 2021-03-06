/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, PKPeerPaymentHeroBubbleView, PKPeerPaymentCredential;

@interface PKPeerPaymentSetupFlowHeroView : UIView {

	UIImageView* _passSnapshotView;
	PKPeerPaymentHeroBubbleView* _bubbleView;
	PKPeerPaymentCredential* _credential;
	long long _animationState;

}
-(void)_updateImageViewDynamicColors;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)startAnimation;
-(BOOL)_shouldShowBubbleView;
-(id)_defaultCurrencyAmount;
-(BOOL)_bubbleIsOnLeftSide;
-(void)startAnimationWithCompletion:(/*^block*/id)arg1 ;
-(id)initWithPeerPaymentPassSnapShot:(id)arg1 peerPaymentCredential:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

