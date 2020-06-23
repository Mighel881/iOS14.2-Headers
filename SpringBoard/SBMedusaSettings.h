//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

@class PTOutlet, SBFFluidBehaviorSettings, SBMedusa1oSettings;

@interface SBMedusaSettings : PTSettings
{
    _Bool _persistentDock;
    _Bool _showContentDragExclusionRects;
    _Bool _statusBarDebugBackgroundColorsEnabled;
    _Bool _statusBarDebugOffsettingEnabled;
    SBMedusa1oSettings *_medusa1oSettings;
    double _numberOfRecents;
    double _dismissHitTestTopPadding;
    SBFFluidBehaviorSettings *_dockAnimationSettings;
    SBFFluidBehaviorSettings *_dockWithPresentedFolderAnimationSettings;
    double _narrowEdgeSwipeHitTestWidth;
    double _wideEdgeSwipeHitTestWidth;
    double _rimShadowOpacity;
    double _rimShadowRadius;
    double _floatingAppCardScaleWhileTouched;
    double _floatingAppCardScaleWhileCursorHovered;
    double _diffuseShadowRadius;
    double _diffuseShadowOpacity;
    double _diffuseShadowOffsetHorizontal;
    double _diffuseShadowOffsetVertical;
    double _diffuseShadowRadiusWhileTouched;
    double _diffuseShadowOpacityWhileTouched;
    double _diffuseShadowOffsetHorizontalWhileTouched;
    double _diffuseShadowOffsetVerticalWhileTouched;
    double _coronaDiffuseShadowOpacity;
    double _coronaDiffuseShadowOpacityWhileTouched;
    double _coronaRimShadowOpacity;
    double _blurFadeAnimationDuration;
    double _reduceMotionBlurFadeAnimationDuration;
    SBFFluidBehaviorSettings *_medusaAnimationSettings;
    SBFFluidBehaviorSettings *_resizeAnimationSettings;
    SBFFluidBehaviorSettings *_platterAnimationSettings;
    SBFFluidBehaviorSettings *_dropAnimationSettings;
    double _dropAnimationUnblurThresholdPercentage;
    double _movePanGestureThresholdPercentage;
    double _movePanGesturePositiveVelocityThreshold;
    double _movePanGestureNegativeVelocityThreshold;
    double _iconPlatterScale;
    double _windowPlatterScale;
    double _draggingPlatterSideActivationGutterPadding;
    double _draggingPlatterFullscreenActivationRegionWidth;
    double _draggingPlatterFullscreenActivationRegionHeight;
    double _contentDraggingCommandeerGutterWidth;
    double _contentDraggingSideActivationGutterWidth;
    double _contentDraggingFloatingActivationGutterWidth;
    double _windowTearOffDraggingSideActivationGutterWidth;
    double _windowTearOffDraggingFloatingActivationGutterWidth;
    PTOutlet *_killSpringBoardOutlet;
    double _cornerRadiusForInnerCorners;
    double _cornerRadiusForCompatibilityAppOuterCorners;
    double _cornerRadiusForFloatingApps;
    double _cornerRadiusFallbackForOldApps;
    double _vibrantColorMatrixM11;
    double _vibrantColorMatrixM12;
    double _vibrantColorMatrixM13;
    double _vibrantColorMatrixM14;
    double _vibrantColorMatrixM15;
    double _vibrantColorMatrixM21;
    double _vibrantColorMatrixM22;
    double _vibrantColorMatrixM23;
    double _vibrantColorMatrixM24;
    double _vibrantColorMatrixM25;
    double _vibrantColorMatrixM31;
    double _vibrantColorMatrixM32;
    double _vibrantColorMatrixM33;
    double _vibrantColorMatrixM34;
    double _vibrantColorMatrixM35;
    double _vibrantColorMatrixM41;
    double _vibrantColorMatrixM42;
    double _vibrantColorMatrixM43;
    double _vibrantColorMatrixM44;
    double _vibrantColorMatrixM45;
    double _medusaSeparatorCursorTopEdgeInset;
    double _medusaSeparatorCursorBottomEdgeInset;
    double _medusaSeparatorCursorLeftEdgeInset;
    double _medusaSeparatorCursorRightEdgeInset;
    double _medusaWindowDraggingCursorTopEdgeInset;
    double _medusaWindowDraggingCursorBottomEdgeInset;
    double _medusaWindowDraggingCursorLeftEdgeInset;
    double _medusaWindowDraggingCursorRightEdgeInset;
}


// Remaining properties
@property(nonatomic) double blurFadeAnimationDuration; // @synthesize blurFadeAnimationDuration=_blurFadeAnimationDuration;
@property(nonatomic) double contentDraggingCommandeerGutterWidth; // @synthesize contentDraggingCommandeerGutterWidth=_contentDraggingCommandeerGutterWidth;
@property(nonatomic) double contentDraggingFloatingActivationGutterWidth; // @synthesize contentDraggingFloatingActivationGutterWidth=_contentDraggingFloatingActivationGutterWidth;
@property(nonatomic) double contentDraggingSideActivationGutterWidth; // @synthesize contentDraggingSideActivationGutterWidth=_contentDraggingSideActivationGutterWidth;
@property(nonatomic) double cornerRadiusFallbackForOldApps; // @synthesize cornerRadiusFallbackForOldApps=_cornerRadiusFallbackForOldApps;
@property(nonatomic) double cornerRadiusForCompatibilityAppOuterCorners; // @synthesize cornerRadiusForCompatibilityAppOuterCorners=_cornerRadiusForCompatibilityAppOuterCorners;
@property(nonatomic) double cornerRadiusForFloatingApps; // @synthesize cornerRadiusForFloatingApps=_cornerRadiusForFloatingApps;
@property(nonatomic) double cornerRadiusForInnerCorners; // @synthesize cornerRadiusForInnerCorners=_cornerRadiusForInnerCorners;
@property(nonatomic) double coronaDiffuseShadowOpacity; // @synthesize coronaDiffuseShadowOpacity=_coronaDiffuseShadowOpacity;
@property(nonatomic) double coronaDiffuseShadowOpacityWhileTouched; // @synthesize coronaDiffuseShadowOpacityWhileTouched=_coronaDiffuseShadowOpacityWhileTouched;
@property(nonatomic) double coronaRimShadowOpacity; // @synthesize coronaRimShadowOpacity=_coronaRimShadowOpacity;
@property(nonatomic) double diffuseShadowOffsetHorizontal; // @synthesize diffuseShadowOffsetHorizontal=_diffuseShadowOffsetHorizontal;
@property(nonatomic) double diffuseShadowOffsetHorizontalWhileTouched; // @synthesize diffuseShadowOffsetHorizontalWhileTouched=_diffuseShadowOffsetHorizontalWhileTouched;
@property(nonatomic) double diffuseShadowOffsetVertical; // @synthesize diffuseShadowOffsetVertical=_diffuseShadowOffsetVertical;
@property(nonatomic) double diffuseShadowOffsetVerticalWhileTouched; // @synthesize diffuseShadowOffsetVerticalWhileTouched=_diffuseShadowOffsetVerticalWhileTouched;
@property(nonatomic) double diffuseShadowOpacity; // @synthesize diffuseShadowOpacity=_diffuseShadowOpacity;
@property(nonatomic) double diffuseShadowOpacityWhileTouched; // @synthesize diffuseShadowOpacityWhileTouched=_diffuseShadowOpacityWhileTouched;
@property(nonatomic) double diffuseShadowRadius; // @synthesize diffuseShadowRadius=_diffuseShadowRadius;
@property(nonatomic) double diffuseShadowRadiusWhileTouched; // @synthesize diffuseShadowRadiusWhileTouched=_diffuseShadowRadiusWhileTouched;
@property(nonatomic) double dismissHitTestTopPadding; // @synthesize dismissHitTestTopPadding=_dismissHitTestTopPadding;
@property(retain, nonatomic) SBFFluidBehaviorSettings *dockAnimationSettings; // @synthesize dockAnimationSettings=_dockAnimationSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *dockWithPresentedFolderAnimationSettings; // @synthesize dockWithPresentedFolderAnimationSettings=_dockWithPresentedFolderAnimationSettings;
@property(nonatomic) double draggingPlatterFullscreenActivationRegionHeight; // @synthesize draggingPlatterFullscreenActivationRegionHeight=_draggingPlatterFullscreenActivationRegionHeight;
@property(nonatomic) double draggingPlatterFullscreenActivationRegionWidth; // @synthesize draggingPlatterFullscreenActivationRegionWidth=_draggingPlatterFullscreenActivationRegionWidth;
@property(nonatomic) double draggingPlatterSideActivationGutterPadding; // @synthesize draggingPlatterSideActivationGutterPadding=_draggingPlatterSideActivationGutterPadding;
@property(retain, nonatomic) SBFFluidBehaviorSettings *dropAnimationSettings; // @synthesize dropAnimationSettings=_dropAnimationSettings;
@property(nonatomic) double dropAnimationUnblurThresholdPercentage; // @synthesize dropAnimationUnblurThresholdPercentage=_dropAnimationUnblurThresholdPercentage;
@property(nonatomic) double floatingAppCardScaleWhileCursorHovered; // @synthesize floatingAppCardScaleWhileCursorHovered=_floatingAppCardScaleWhileCursorHovered;
@property(nonatomic) double floatingAppCardScaleWhileTouched; // @synthesize floatingAppCardScaleWhileTouched=_floatingAppCardScaleWhileTouched;
@property(nonatomic) double iconPlatterScale; // @synthesize iconPlatterScale=_iconPlatterScale;
@property(retain, nonatomic) PTOutlet *killSpringBoardOutlet; // @synthesize killSpringBoardOutlet=_killSpringBoardOutlet;
@property(retain, nonatomic) SBMedusa1oSettings *medusa1oSettings; // @synthesize medusa1oSettings=_medusa1oSettings;
@property(retain, nonatomic) SBFFluidBehaviorSettings *medusaAnimationSettings; // @synthesize medusaAnimationSettings=_medusaAnimationSettings;
@property(nonatomic) double medusaSeparatorCursorBottomEdgeInset; // @synthesize medusaSeparatorCursorBottomEdgeInset=_medusaSeparatorCursorBottomEdgeInset;
@property(nonatomic) double medusaSeparatorCursorLeftEdgeInset; // @synthesize medusaSeparatorCursorLeftEdgeInset=_medusaSeparatorCursorLeftEdgeInset;
@property(nonatomic) double medusaSeparatorCursorRightEdgeInset; // @synthesize medusaSeparatorCursorRightEdgeInset=_medusaSeparatorCursorRightEdgeInset;
@property(nonatomic) double medusaSeparatorCursorTopEdgeInset; // @synthesize medusaSeparatorCursorTopEdgeInset=_medusaSeparatorCursorTopEdgeInset;
@property(nonatomic) double medusaWindowDraggingCursorBottomEdgeInset; // @synthesize medusaWindowDraggingCursorBottomEdgeInset=_medusaWindowDraggingCursorBottomEdgeInset;
@property(nonatomic) double medusaWindowDraggingCursorLeftEdgeInset; // @synthesize medusaWindowDraggingCursorLeftEdgeInset=_medusaWindowDraggingCursorLeftEdgeInset;
@property(nonatomic) double medusaWindowDraggingCursorRightEdgeInset; // @synthesize medusaWindowDraggingCursorRightEdgeInset=_medusaWindowDraggingCursorRightEdgeInset;
@property(nonatomic) double medusaWindowDraggingCursorTopEdgeInset; // @synthesize medusaWindowDraggingCursorTopEdgeInset=_medusaWindowDraggingCursorTopEdgeInset;
@property(nonatomic) double movePanGestureNegativeVelocityThreshold; // @synthesize movePanGestureNegativeVelocityThreshold=_movePanGestureNegativeVelocityThreshold;
@property(nonatomic) double movePanGesturePositiveVelocityThreshold; // @synthesize movePanGesturePositiveVelocityThreshold=_movePanGesturePositiveVelocityThreshold;
@property(nonatomic) double movePanGestureThresholdPercentage; // @synthesize movePanGestureThresholdPercentage=_movePanGestureThresholdPercentage;
@property(nonatomic) double narrowEdgeSwipeHitTestWidth; // @synthesize narrowEdgeSwipeHitTestWidth=_narrowEdgeSwipeHitTestWidth;
@property(nonatomic) double numberOfRecents; // @synthesize numberOfRecents=_numberOfRecents;
@property(nonatomic) _Bool persistentDock; // @synthesize persistentDock=_persistentDock;
@property(retain, nonatomic) SBFFluidBehaviorSettings *platterAnimationSettings; // @synthesize platterAnimationSettings=_platterAnimationSettings;
@property(nonatomic) double reduceMotionBlurFadeAnimationDuration; // @synthesize reduceMotionBlurFadeAnimationDuration=_reduceMotionBlurFadeAnimationDuration;
@property(retain, nonatomic) SBFFluidBehaviorSettings *resizeAnimationSettings; // @synthesize resizeAnimationSettings=_resizeAnimationSettings;
@property(nonatomic) double rimShadowOpacity; // @synthesize rimShadowOpacity=_rimShadowOpacity;
@property(nonatomic) double rimShadowRadius; // @synthesize rimShadowRadius=_rimShadowRadius;
@property(nonatomic) _Bool showContentDragExclusionRects; // @synthesize showContentDragExclusionRects=_showContentDragExclusionRects;
@property(nonatomic) _Bool statusBarDebugBackgroundColorsEnabled; // @synthesize statusBarDebugBackgroundColorsEnabled=_statusBarDebugBackgroundColorsEnabled;
@property(nonatomic) _Bool statusBarDebugOffsettingEnabled; // @synthesize statusBarDebugOffsettingEnabled=_statusBarDebugOffsettingEnabled;
@property(nonatomic) double vibrantColorMatrixM11; // @synthesize vibrantColorMatrixM11=_vibrantColorMatrixM11;
@property(nonatomic) double vibrantColorMatrixM12; // @synthesize vibrantColorMatrixM12=_vibrantColorMatrixM12;
@property(nonatomic) double vibrantColorMatrixM13; // @synthesize vibrantColorMatrixM13=_vibrantColorMatrixM13;
@property(nonatomic) double vibrantColorMatrixM14; // @synthesize vibrantColorMatrixM14=_vibrantColorMatrixM14;
@property(nonatomic) double vibrantColorMatrixM15; // @synthesize vibrantColorMatrixM15=_vibrantColorMatrixM15;
@property(nonatomic) double vibrantColorMatrixM21; // @synthesize vibrantColorMatrixM21=_vibrantColorMatrixM21;
@property(nonatomic) double vibrantColorMatrixM22; // @synthesize vibrantColorMatrixM22=_vibrantColorMatrixM22;
@property(nonatomic) double vibrantColorMatrixM23; // @synthesize vibrantColorMatrixM23=_vibrantColorMatrixM23;
@property(nonatomic) double vibrantColorMatrixM24; // @synthesize vibrantColorMatrixM24=_vibrantColorMatrixM24;
@property(nonatomic) double vibrantColorMatrixM25; // @synthesize vibrantColorMatrixM25=_vibrantColorMatrixM25;
@property(nonatomic) double vibrantColorMatrixM31; // @synthesize vibrantColorMatrixM31=_vibrantColorMatrixM31;
@property(nonatomic) double vibrantColorMatrixM32; // @synthesize vibrantColorMatrixM32=_vibrantColorMatrixM32;
@property(nonatomic) double vibrantColorMatrixM33; // @synthesize vibrantColorMatrixM33=_vibrantColorMatrixM33;
@property(nonatomic) double vibrantColorMatrixM34; // @synthesize vibrantColorMatrixM34=_vibrantColorMatrixM34;
@property(nonatomic) double vibrantColorMatrixM35; // @synthesize vibrantColorMatrixM35=_vibrantColorMatrixM35;
@property(nonatomic) double vibrantColorMatrixM41; // @synthesize vibrantColorMatrixM41=_vibrantColorMatrixM41;
@property(nonatomic) double vibrantColorMatrixM42; // @synthesize vibrantColorMatrixM42=_vibrantColorMatrixM42;
@property(nonatomic) double vibrantColorMatrixM43; // @synthesize vibrantColorMatrixM43=_vibrantColorMatrixM43;
@property(nonatomic) double vibrantColorMatrixM44; // @synthesize vibrantColorMatrixM44=_vibrantColorMatrixM44;
@property(nonatomic) double vibrantColorMatrixM45; // @synthesize vibrantColorMatrixM45=_vibrantColorMatrixM45;
@property(nonatomic) double wideEdgeSwipeHitTestWidth; // @synthesize wideEdgeSwipeHitTestWidth=_wideEdgeSwipeHitTestWidth;
@property(nonatomic) double windowPlatterScale; // @synthesize windowPlatterScale=_windowPlatterScale;
@property(nonatomic) double windowTearOffDraggingFloatingActivationGutterWidth; // @synthesize windowTearOffDraggingFloatingActivationGutterWidth=_windowTearOffDraggingFloatingActivationGutterWidth;
@property(nonatomic) double windowTearOffDraggingSideActivationGutterWidth; // @synthesize windowTearOffDraggingSideActivationGutterWidth=_windowTearOffDraggingSideActivationGutterWidth;
@end

