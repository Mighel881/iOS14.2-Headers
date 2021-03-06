/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSMutableArray;

@interface PKLinkedAppUserRatingView : UIView {

	NSMutableArray* _starViews;
	float _userRating;

}

@property (assign,nonatomic) float userRating;              //@synthesize userRating=_userRating - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)_starImageViewWithImage:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setUserRating:(float)arg1 ;
-(float)userRating;
-(void)dealloc;
@end

