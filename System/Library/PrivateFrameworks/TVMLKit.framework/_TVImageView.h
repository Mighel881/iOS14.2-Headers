/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIImage, UIImageView, UIColor, CAFilter, TVImageProxy, UIImageSymbolConfiguration;

@interface _TVImageView : UIControl {

	BOOL _rendersImageAsTemplates;
	UIImage* _image;
	UIImageView* _imageView;
	UIColor* __focusedColor;
	long long _imageContentMode;
	UIImage* _flatImage;
	UIImage* _flatHighlightImage;
	BOOL _selected;
	double _cornerRadius;
	BOOL _continuousCorners;
	CAFilter* _highlightFilter;
	BOOL _imageContainsCornerRadius;
	BOOL _imageLoaded;
	BOOL __enableEdgeAntialiasingOnSelected;
	UIImage* _placeholderImage;
	TVImageProxy* _imageProxy;
	/*^block*/id _dynamicProxyProvider;
	/*^block*/id _completion;
	UIColor* __tintColor;
	UIColor* __darkTintColor;
	UIImageSymbolConfiguration* _preferredSymbolConfiguration;

}

@property (nonatomic,copy) id completion;                                                                                                     //@synthesize completion=_completion - In the implementation block
@property (assign,getter=isImageLoaded,nonatomic) BOOL imageLoaded;                                                                           //@synthesize imageLoaded=_imageLoaded - In the implementation block
@property (setter=_setTintColor:,nonatomic,retain) UIColor * _tintColor;                                                                      //@synthesize _tintColor=__tintColor - In the implementation block
@property (setter=_setDarkTintColor:,nonatomic,retain) UIColor * _darkTintColor;                                                              //@synthesize _darkTintColor=__darkTintColor - In the implementation block
@property (setter=_setFocusedColor:,nonatomic,retain) UIColor * _focusedColor;                                                                //@synthesize _focusedColor=__focusedColor - In the implementation block
@property (assign,setter=_setEnableEdgeAntialiasingOnSelected:,nonatomic) BOOL _enableEdgeAntialiasingOnSelected;                             //@synthesize _enableEdgeAntialiasingOnSelected=__enableEdgeAntialiasingOnSelected - In the implementation block
@property (setter=_setPreferredSymbolConfiguration:,nonatomic,retain) UIImageSymbolConfiguration * preferredSymbolConfiguration;              //@synthesize preferredSymbolConfiguration=_preferredSymbolConfiguration - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,retain) UIImage * placeholderImage;                                                                                      //@synthesize placeholderImage=_placeholderImage - In the implementation block
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) BOOL imageContainsCornerRadius;                                                                                  //@synthesize imageContainsCornerRadius=_imageContainsCornerRadius - In the implementation block
@property (nonatomic,retain) TVImageProxy * imageProxy;                                                                                       //@synthesize imageProxy=_imageProxy - In the implementation block
@property (nonatomic,copy) id dynamicProxyProvider;                                                                                           //@synthesize dynamicProxyProvider=_dynamicProxyProvider - In the implementation block
-(void)_setTintColor:(id)arg1 ;
-(void)setContentMode:(long long)arg1 ;
-(UIColor *)_tintColor;
-(id)_imageView;
-(void)setPlaceholderImage:(UIImage *)arg1 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateCornerRadius;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_resetContentRect;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(double)_continuousCornerRadius;
-(double)_cornerRadius;
-(void)setCompletion:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)completion;
-(void)setBackgroundColor:(id)arg1 ;
-(void)_setImage:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)_updateTintColor;
-(UIImage *)image;
-(id)backgroundColor;
-(UIImageSymbolConfiguration *)preferredSymbolConfiguration;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)_updateImageView;
-(void)layoutSubviews;
-(long long)contentMode;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImage *)placeholderImage;
-(double)cornerRadius;
-(BOOL)isImageLoaded;
-(void)_setCornerRadius:(double)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(void)_setContentRectInPixels:(CGRect)arg1 forContentSize:(CGSize)arg2 ;
-(void)dealloc;
-(void)setHighlighted:(BOOL)arg1 ;
-(TVImageProxy *)imageProxy;
-(void)_setFocusedColor:(id)arg1 ;
-(void)setImageProxy:(TVImageProxy *)arg1 ;
-(void)setImageContainsCornerRadius:(BOOL)arg1 ;
-(void)setImageLoaded:(BOOL)arg1 ;
-(void)_setDarkTintColor:(id)arg1 ;
-(void)setImageProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setDynamicProxyProvider:(id)arg1 ;
-(void)_loadImage;
-(UIColor *)_darkTintColor;
-(id)_imageProxyWithSize:(CGSize)arg1 ;
-(BOOL)_enableEdgeAntialiasingOnSelected;
-(void)_updateFlatImageWithImage:(id)arg1 ;
-(void)_reloadImageForLayoutDirectionChange;
-(void)_setPreferredSymbolConfiguration:(id)arg1 ;
-(BOOL)imageContainsCornerRadius;
-(id)dynamicProxyProvider;
-(UIColor *)_focusedColor;
-(void)_setEnableEdgeAntialiasingOnSelected:(BOOL)arg1 ;
@end

