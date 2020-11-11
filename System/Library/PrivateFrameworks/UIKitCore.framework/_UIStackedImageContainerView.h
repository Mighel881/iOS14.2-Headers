/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIImageViewOverlayViewDelegate.h>

@protocol UINamedLayerStack;
@class UIMotionEffectGroup, UIImage, NSObject, _UIStackedImageConfiguration, UIView, NSString;

@interface _UIStackedImageContainerView : UIView <_UIImageViewOverlayViewDelegate> {

	UIMotionEffectGroup* _stackMotionEffects;
	BOOL _installsMotionEffectsWhenFocused;
	UIImage* _stackImage;
	NSObject*<UINamedLayerStack> _constructedStackImage;
	_UIStackedImageConfiguration* _config;
	UIView* _overlayView;

}

@property (nonatomic,retain) UIView * overlayView;                                            //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) UIImage * stackImage;                                            //@synthesize stackImage=_stackImage - In the implementation block
@property (nonatomic,retain) NSObject*<UINamedLayerStack> constructedStackImage;              //@synthesize constructedStackImage=_constructedStackImage - In the implementation block
@property (nonatomic,copy) _UIStackedImageConfiguration * config;                             //@synthesize config=_config - In the implementation block
@property (assign,getter=isPressed,nonatomic) BOOL pressed; 
@property (assign,getter=isStackFocused,nonatomic) BOOL stackFocused; 
@property (assign,nonatomic) BOOL installsMotionEffectsWhenFocused;                           //@synthesize installsMotionEffectsWhenFocused=_installsMotionEffectsWhenFocused - In the implementation block
@property (assign,nonatomic) CGPoint focusDirection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)layerClass;
-(_UIStackedImageConfiguration *)config;
-(void)setPressed:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_applyKeyPathsAndRelativeValues:(id)arg1 forMotionEffect:(id)arg2 ;
-(UIView *)overlayView;
-(BOOL)isPressed;
-(void)setConfig:(_UIStackedImageConfiguration *)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setFocusDirection:(CGPoint)arg1 ;
-(UIImage *)stackImage;
-(CGPoint)focusDirection;
-(id)_imageContainerLayer;
-(void)_uninstallMotionEffects;
-(void)_updateContainerLayerImages;
-(BOOL)installsMotionEffectsWhenFocused;
-(BOOL)isStackFocused;
-(void)_setStackFocused:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)_installMotionEffects;
-(void)_updateOverlayLayer;
-(void)setStackImage:(UIImage *)arg1 ;
-(void)setConstructedStackImage:(NSObject*<UINamedLayerStack>)arg1 ;
-(void)setStackFocused:(BOOL)arg1 ;
-(void)setInstallsMotionEffectsWhenFocused:(BOOL)arg1 ;
-(NSObject*<UINamedLayerStack>)constructedStackImage;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(void)overlayView:(id)arg1 didChangeClipsToBounds:(BOOL)arg2 ;
-(void)setStackFocused:(BOOL)arg1 withFocusAnimationCoordinator:(id)arg2 ;
-(void)dealloc;
@end
