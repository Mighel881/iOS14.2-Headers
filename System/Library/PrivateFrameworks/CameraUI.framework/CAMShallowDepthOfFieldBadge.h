/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <UIKitCore/UIView.h>

@class CEKBadgeTextView;

@interface CAMShallowDepthOfFieldBadge : UIView {

	long long _shallowDepthOfFieldStatus;
	CEKBadgeTextView* __enabledTextView;
	CEKBadgeTextView* __disabledTextView;

}

@property (nonatomic,readonly) CEKBadgeTextView * _enabledTextView;               //@synthesize _enabledTextView=__enabledTextView - In the implementation block
@property (nonatomic,readonly) CEKBadgeTextView * _disabledTextView;              //@synthesize _disabledTextView=__disabledTextView - In the implementation block
@property (assign,nonatomic) long long shallowDepthOfFieldStatus;                 //@synthesize shallowDepthOfFieldStatus=_shallowDepthOfFieldStatus - In the implementation block
-(long long)shallowDepthOfFieldStatus;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setShallowDepthOfFieldStatus:(long long)arg1 animated:(BOOL)arg2 ;
-(void)_updateForShallowDepthOfFieldStatusAnimated:(BOOL)arg1 ;
-(CEKBadgeTextView *)_enabledTextView;
-(CEKBadgeTextView *)_disabledTextView;
@end

