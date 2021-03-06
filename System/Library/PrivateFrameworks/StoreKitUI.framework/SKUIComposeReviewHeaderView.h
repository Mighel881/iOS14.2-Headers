/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SKUIComposeTextFieldListViewDelegate.h>

@protocol SKUIComposeReviewHeaderDelegate;
@class SKStarRatingControl, SKUIReviewMetadata, SKUIComposeTextFieldListView, UIResponder, NSString;

@interface SKUIComposeReviewHeaderView : UIView <SKUIComposeTextFieldListViewDelegate> {

	id<SKUIComposeReviewHeaderDelegate> _delegate;
	SKStarRatingControl* _ratingControl;
	SKUIReviewMetadata* _review;
	long long _style;
	SKUIComposeTextFieldListView* _textFieldListView;

}

@property (nonatomic,readonly) long long composeReviewStyle;                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIComposeReviewHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) SKUIReviewMetadata * review;                                      //@synthesize review=_review - In the implementation block
@property (nonatomic,readonly) UIResponder * initialFirstResponder; 
@property (assign,nonatomic) float rating; 
@property (nonatomic,readonly) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SKUIComposeReviewHeaderDelegate>)delegate;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)sizeToFit;
-(void)setDelegate:(id<SKUIComposeReviewHeaderDelegate>)arg1 ;
-(void)layoutSubviews;
-(SKUIReviewMetadata *)review;
-(void)setReview:(SKUIReviewMetadata *)arg1 ;
-(NSString *)title;
-(void)setRating:(float)arg1 ;
-(float)rating;
-(void)dealloc;
-(UIResponder *)initialFirstResponder;
-(long long)numberOfColumnsInTextFieldList:(id)arg1 ;
-(long long)numberOfFieldsInTextFieldList:(id)arg1 ;
-(id)textFieldList:(id)arg1 configurationForFieldAtIndex:(unsigned long long)arg2 ;
-(void)textFieldListValidityDidChange:(id)arg1 ;
-(void)textFieldListValuesDidChange:(id)arg1 ;
-(long long)composeReviewStyle;
@end

