/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClipUIServices.framework/ClipUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ClipUIServices/ClipUIServices-Structs.h>
#import <CarPlaySupport/CPSButton.h>

@class UIStackView, UILabel;

@interface CPSAppStoreButton : CPSButton {

	UIStackView* _fullSizeStack;
	UIStackView* _glyphOnlyStack;
	UILabel* _label;
	CGRect _lastLayoutBounds;
	BOOL _intrinsicContentSizeIsValid;
	CGSize _intrinsicContentSize;

}
-(id)viewForLastBaselineLayout;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)viewForFirstBaselineLayout;
-(void)invalidateIntrinsicContentSize;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(void)setHighlighted:(BOOL)arg1 ;
@end
