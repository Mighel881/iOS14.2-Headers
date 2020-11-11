/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class UITargetedPreview, _UIPortalView, UIView, _UIPlatterSoftShadowView;

@interface _UIHighlightPlatterView : UIView {

	double _shadowAlpha;
	double _backgroundAlpha;
	UITargetedPreview* _targetedPreview;
	_UIPortalView* _portalView;
	UIView* _backgroundView;
	_UIPlatterSoftShadowView* _shadowView;

}

@property (nonatomic,retain) UITargetedPreview * targetedPreview;                //@synthesize targetedPreview=_targetedPreview - In the implementation block
@property (nonatomic,retain) _UIPortalView * portalView;                         //@synthesize portalView=_portalView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                            //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) _UIPlatterSoftShadowView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
@property (assign,nonatomic) double shadowAlpha;                                 //@synthesize shadowAlpha=_shadowAlpha - In the implementation block
@property (assign,nonatomic) double backgroundAlpha;                             //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
-(double)shadowAlpha;
-(void)setShadowAlpha:(double)arg1 ;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)setBackgroundAlpha:(double)arg1 ;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(void)setTargetedPreview:(UITargetedPreview *)arg1 ;
-(id)initWithTargetedPreview:(id)arg1 ;
-(_UIPortalView *)portalView;
-(_UIPlatterSoftShadowView *)shadowView;
-(void)setShadowView:(_UIPlatterSoftShadowView *)arg1 ;
-(double)backgroundAlpha;
-(UITargetedPreview *)targetedPreview;
@end
