/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <TVMLKit/TVViewLayout.h>

@class VUITextLayout, VUIButtonLayout;

@interface VUIUpsellOfferTransactionViewLayout : TVViewLayout {

	VUITextLayout* _disclaimerTextLayout;
	VUIButtonLayout* _buttonLayout;

}

@property (nonatomic,readonly) VUITextLayout * disclaimerTextLayout;              //@synthesize disclaimerTextLayout=_disclaimerTextLayout - In the implementation block
@property (nonatomic,readonly) VUIButtonLayout * buttonLayout;                    //@synthesize buttonLayout=_buttonLayout - In the implementation block
+(id)layoutWithLayout:(id)arg1 element:(id)arg2 ;
-(id)init;
-(double)buttonSpacing;
-(double)buttonHeight;
-(void)_configureLayout;
-(VUITextLayout *)disclaimerTextLayout;
-(VUIButtonLayout *)buttonLayout;
-(UIEdgeInsets)safeAreaInsetsPhone;
-(UIEdgeInsets)safeAreaInsetsPad;
-(double)disclaimerBottomMargin;
@end
