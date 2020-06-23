//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardHome/BSUIScrollViewDelegate-Protocol.h>
#import <SpringBoardHome/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoardHome/SBIconViewCustomImageViewControlling-Protocol.h>
#import <SpringBoardHome/SBLeafIconObserver-Protocol.h>

@class BSUIScrollView, NSHashTable, NSMutableDictionary, NSString, NSTimer, SBFFluidBehaviorSettings, SBHWidgetSettings, SBWidgetIcon, UIPageControl, UIView;
@protocol BSInvalidatable, SBHWidgetStackViewControllerDataSource, SBHWidgetStackViewControllerDelegate, SBLeafIconDataSource;

@interface SBHWidgetStackViewController : UIViewController <BSUIScrollViewDelegate, SBLeafIconObserver, PTSettingsKeyObserver, SBIconViewCustomImageViewControlling>
{
    _Bool _editing;
    _Bool _showingContextMenu;
    _Bool _overlapping;
    _Bool _userInteractionEnabled;
    _Bool _backgroundBlurEnabled;
    _Bool _visiblySettled;
    _Bool _privateModeEnabled;
    _Bool _showsSquareCorners;
    _Bool _alwaysShowsAsStack;
    _Bool _highlightsAtAnySize;
    _Bool _forcesEdgeAntialiasing;
    _Bool _showStackBorderWhenShowingPageControl;
    _Bool _flashPageControlOnNextAppearance;
    CDUnknownBlockType _backgroundViewProvider;
    double _brightness;
    unsigned long long _imageViewAlignment;
    unsigned long long _pauseReasons;
    id <SBHWidgetStackViewControllerDataSource> _dataSource;
    id <SBHWidgetStackViewControllerDelegate> _delegate;
    SBWidgetIcon *_icon;
    id <SBLeafIconDataSource> _activeWidget;
    BSUIScrollView *_scrollView;
    UIView *_containerView;
    UIView *_backgroundView;
    UIPageControl *_pageControl;
    NSTimer *_pageControlHidingTimer;
    UIView *_dimmingView;
    NSMutableDictionary *_widgetViewControllers;
    SBHWidgetSettings *_widgetSettings;
    SBFFluidBehaviorSettings *_animationSettings;
    unsigned long long _widgetScaleAnimationCount;
    unsigned long long _backgroundAnimationCount;
    NSHashTable *_imageUpdateDisableAssertions;
    id <BSInvalidatable> _scrollingTouchCancellationAssertion;
    struct SBIconImageInfo _iconImageInfo;
}


// Remaining properties
@property(retain, nonatomic) id <SBLeafIconDataSource> activeWidget; // @synthesize activeWidget=_activeWidget;
@property(nonatomic) _Bool alwaysShowsAsStack; // @synthesize alwaysShowsAsStack=_alwaysShowsAsStack;
@property(retain, nonatomic) SBFFluidBehaviorSettings *animationSettings; // @synthesize animationSettings=_animationSettings;
@property(nonatomic) unsigned long long backgroundAnimationCount; // @synthesize backgroundAnimationCount=_backgroundAnimationCount;
@property(nonatomic, getter=isBackgroundBlurEnabled) _Bool backgroundBlurEnabled; // @synthesize backgroundBlurEnabled=_backgroundBlurEnabled;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) CDUnknownBlockType backgroundViewProvider; // @synthesize backgroundViewProvider=_backgroundViewProvider;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) double continuousCornerRadius;
@property(nonatomic) __weak id <SBHWidgetStackViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBHWidgetStackViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(nonatomic, getter=isDropping) _Bool dropping;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(nonatomic) _Bool flashPageControlOnNextAppearance; // @synthesize flashPageControlOnNextAppearance=_flashPageControlOnNextAppearance;
@property(nonatomic) _Bool forcesEdgeAntialiasing; // @synthesize forcesEdgeAntialiasing=_forcesEdgeAntialiasing;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool highlightsAtAnySize; // @synthesize highlightsAtAnySize=_highlightsAtAnySize;
@property(retain, nonatomic) SBWidgetIcon *icon; // @synthesize icon=_icon;
@property(nonatomic) struct SBIconImageInfo iconImageInfo; // @synthesize iconImageInfo=_iconImageInfo;
@property(retain, nonatomic) NSHashTable *imageUpdateDisableAssertions; // @synthesize imageUpdateDisableAssertions=_imageUpdateDisableAssertions;
@property(nonatomic) unsigned long long imageViewAlignment; // @synthesize imageViewAlignment=_imageViewAlignment;
@property(nonatomic, getter=isOverlapping) _Bool overlapping; // @synthesize overlapping=_overlapping;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) NSTimer *pageControlHidingTimer; // @synthesize pageControlHidingTimer=_pageControlHidingTimer;
@property(nonatomic) unsigned long long pauseReasons; // @synthesize pauseReasons=_pauseReasons;
@property(nonatomic, getter=isPrivateModeEnabled) _Bool privateModeEnabled; // @synthesize privateModeEnabled=_privateModeEnabled;
@property(retain, nonatomic) BSUIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) id <BSInvalidatable> scrollingTouchCancellationAssertion; // @synthesize scrollingTouchCancellationAssertion=_scrollingTouchCancellationAssertion;
@property(nonatomic) _Bool showStackBorderWhenShowingPageControl; // @synthesize showStackBorderWhenShowingPageControl=_showStackBorderWhenShowingPageControl;
@property(nonatomic, getter=isShowingContextMenu) _Bool showingContextMenu; // @synthesize showingContextMenu=_showingContextMenu;
@property(nonatomic) _Bool showsSquareCorners; // @synthesize showsSquareCorners=_showsSquareCorners;
@property(readonly) Class superclass;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled; // @synthesize userInteractionEnabled=_userInteractionEnabled;
@property(readonly, nonatomic) struct CGRect visibleBounds;
@property(nonatomic) _Bool visiblySettled; // @synthesize visiblySettled=_visiblySettled;
@property(readonly, nonatomic) _Bool wantsLabelHidden;
@property(readonly, nonatomic) SBWidgetIcon *widgetIcon;
@property(nonatomic) unsigned long long widgetScaleAnimationCount; // @synthesize widgetScaleAnimationCount=_widgetScaleAnimationCount;
@property(retain, nonatomic) SBHWidgetSettings *widgetSettings; // @synthesize widgetSettings=_widgetSettings;
@property(retain, nonatomic) NSMutableDictionary *widgetViewControllers; // @synthesize widgetViewControllers=_widgetViewControllers;
@end

