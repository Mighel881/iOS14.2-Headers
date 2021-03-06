/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@class NSString, RBSAssertion;

@interface _UIRootWindow : UIWindow {

	double _scale;
	os_unfair_lock_s _visibilityLock;
	BOOL _visibilityLock_enabled;
	NSString* _visibilityLock_environment;
	NSString* _visibilityLock_identifier;
	BOOL _visibilityLock_updateEnqueued;
	os_unfair_lock_s _visibilityProcessingLock;
	NSString* _visibilityProcessingLock_identifier;
	RBSAssertion* _visibilityProcessingLock_assertion;
	CGAffineTransform _additionalRootLayerAffineTransform;

}

@property (assign,setter=_setAdditionalRootLayerAffineTransform:,getter=_additionalRootLayerAffineTransform,nonatomic) CGAffineTransform additionalRootLayerAffineTransform;              //@synthesize additionalRootLayerAffineTransform=_additionalRootLayerAffineTransform - In the implementation block
@property (nonatomic,copy,readonly) NSString * visibilityEnvironment; 
-(BOOL)_extendsScreenSceneLifetime;
-(BOOL)_isWindowServerHostingManaged;
-(id)_layerForCoordinateSpaceConversion;
-(void)_visibilityLock_enqueueUpdateIfNecessary;
-(void)_visibilityLock_enqueueUpdateIfNecessary_body;
-(void)_updateVisibility;
-(BOOL)_wantsSceneAssociation;
-(id)initWithScreen:(id)arg1 ;
-(void)_configureContextOptions:(id)arg1 ;
-(void)_configureRootLayer:(id)arg1 sceneTransformLayer:(id)arg2 transformLayer:(id)arg3 ;
-(id)initWithDisplay:(id)arg1 ;
-(BOOL)_transformLayerIncludesScreenRotation;
-(void)setHidden:(BOOL)arg1 ;
-(void)_didMoveFromScreen:(id)arg1 toScreen:(id)arg2 ;
-(id)_visibilityLock_environment;
-(void)_noteScreenDidChangeMode:(id)arg1 ;
-(NSString *)visibilityEnvironment;
-(void)setVisibilityIdentifier:(id)arg1 ;
-(void)_setAdditionalRootLayerAffineTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)_additionalRootLayerAffineTransform;
-(id)_context;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(SCD_Struct_UI37)_bindingDescription;
-(void)dealloc;
@end

