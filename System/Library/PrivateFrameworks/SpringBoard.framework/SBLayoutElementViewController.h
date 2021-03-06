/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBAppPlatterDragSourceViewProviding.h>

@class SBOrientationTransformWrapperView, FBDisplayLayoutElement, UIView, FBSDisplayIdentity, SBLayoutElement, SBLayoutState, NSString;

@interface SBLayoutElementViewController : UIViewController <SBAppPlatterDragSourceViewProviding> {

	SBOrientationTransformWrapperView* _contentWrapperView;
	FBDisplayLayoutElement* _displayLayoutElement;
	BOOL _isViewVisible;
	BOOL _isTransitioningVisibility;
	BOOL _dragging;
	UIView* _contentContainerView;
	FBSDisplayIdentity* _displayIdentity;
	SBLayoutElement* _layoutElement;
	SBLayoutState* _layoutState;
	unsigned long long _supportedContentInterfaceOrientations;
	long long _contentWrapperInterfaceOrientation;
	CGRect _referenceFrame;

}

@property (nonatomic,readonly) UIView * _contentContainerView;                                        //@synthesize contentContainerView=_contentContainerView - In the implementation block
@property (nonatomic,readonly) BOOL _shouldDisplayLayoutElementBecomeActive; 
@property (nonatomic,readonly) FBSDisplayIdentity * displayIdentity;                                  //@synthesize displayIdentity=_displayIdentity - In the implementation block
@property (nonatomic,readonly) SBLayoutElement * layoutElement;                                       //@synthesize layoutElement=_layoutElement - In the implementation block
@property (nonatomic,readonly) SBLayoutState * layoutState;                                           //@synthesize layoutState=_layoutState - In the implementation block
@property (nonatomic,readonly) CGRect referenceFrame;                                                 //@synthesize referenceFrame=_referenceFrame - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedContentInterfaceOrientations;              //@synthesize supportedContentInterfaceOrientations=_supportedContentInterfaceOrientations - In the implementation block
@property (assign,nonatomic) long long contentWrapperInterfaceOrientation;                            //@synthesize contentWrapperInterfaceOrientation=_contentWrapperInterfaceOrientation - In the implementation block
@property (nonatomic,readonly) BOOL supportsReuse; 
@property (assign,getter=isDragging,nonatomic) BOOL dragging;                                         //@synthesize dragging=_dragging - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initialRimShadowFilters;
-(void)willBeginTransitionToVisible:(BOOL)arg1 ;
-(id)initialCornerRadiusConfiguration;
-(void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(CGRect)arg4 ;
-(SBDragPreviewShadowParameters)initialDiffuseShadowParameters;
-(CGRect)referenceFrame;
-(SBLayoutElement *)layoutElement;
-(void)setDragging:(BOOL)arg1 ;
-(void)_updateDisplayLayoutElementVisibility;
-(id)sourceView;
-(SBLayoutState *)layoutState;
-(id)initWithDisplayIdentity:(id)arg1 ;
-(id)mainWorkspaceApplicationSceneLayoutElementViewController;
-(void)_updateDisplayLayoutElementWithBuilder:(/*^block*/id)arg1 ;
-(id)containerViewForBlurContentView;
-(id)initialDiffuseShadowFilters;
-(void)didEndTransitionToVisible:(BOOL)arg1 ;
-(BOOL)supportsReuse;
-(long long)contentWrapperInterfaceOrientation;
-(SBDragPreviewShadowParameters)initialRimShadowParameters;
-(BOOL)isDragging;
-(UIView *)_contentContainerView;
-(void)setContentWrapperInterfaceOrientation:(long long)arg1 ;
-(BOOL)_shouldDisplayLayoutElementBecomeActive;
-(unsigned long long)supportedContentInterfaceOrientations;
-(id)_newDisplayLayoutElementForEntity:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(FBSDisplayIdentity *)displayIdentity;
-(id)initWithCoder:(id)arg1 ;
-(void)loadView;
-(void)prepareForReuse;
-(void)invalidate;
-(void)dealloc;
@end

