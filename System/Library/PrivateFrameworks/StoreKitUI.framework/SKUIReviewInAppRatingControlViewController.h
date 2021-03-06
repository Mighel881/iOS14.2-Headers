/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>

@class SKUIStarRatingControl;

@interface SKUIReviewInAppRatingControlViewController : UIViewController {

	SKUIStarRatingControl* _ratingControl;

}

@property (nonatomic,retain) SKUIStarRatingControl * ratingControl;              //@synthesize ratingControl=_ratingControl - In the implementation block
-(void)commonInit;
-(void)viewDidLayoutSubviews;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)preferredContentSize;
-(SKUIStarRatingControl *)ratingControl;
-(id)_repeatedTemplateImageForImage:(id)arg1 ;
-(void)setRatingControl:(SKUIStarRatingControl *)arg1 ;
@end

