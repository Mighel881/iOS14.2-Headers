/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/PUSlideshowViewModelChangeObserver.h>
#import <libobjc.A.dylib/PUSlideshowSettingsViewControllerDelegate.h>
#import <libobjc.A.dylib/OKPresentationViewControllerDelegate.h>
#import <libobjc.A.dylib/PHAirPlayControllerContentProvider.h>
#import <libobjc.A.dylib/PHAirPlayControllerRouteObserver.h>
#import <libobjc.A.dylib/PUViewControllerSpecChangeObserver.h>
#import <libobjc.A.dylib/PUSlideshowDisplayContext.h>

@protocol PUSlideshowViewControllerDelegate;
@class OKPresentationViewController, PUSlideshowViewControllerSpec, UITapGestureRecognizer, PUSlideshowSession, PHPlaceholderView, UIViewController, NSString;

@interface PUSlideshowViewController : UIViewController <UIGestureRecognizerDelegate, PUSlideshowViewModelChangeObserver, PUSlideshowSettingsViewControllerDelegate, OKPresentationViewControllerDelegate, PHAirPlayControllerContentProvider, PHAirPlayControllerRouteObserver, PUViewControllerSpecChangeObserver, PUSlideshowDisplayContext> {

	OKPresentationViewController* _currentPresentationController;
	PUSlideshowViewControllerSpec* _spec;
	UITapGestureRecognizer* _tapGestureRecognizer;
	unsigned long long _playerStateButtonItemIndex;
	BOOL __needsUpdateSpec;
	PUSlideshowSession* _session;
	unsigned long long _mode;
	id<PUSlideshowViewControllerDelegate> _delegate;
	PUSlideshowViewController* __secondScreenBrowser;
	PHPlaceholderView* __slideshowPlaceholderView;
	UIViewController* __slideshowSettingsViewController;

}

@property (setter=_setSecondScreenBrowser:,nonatomic,retain) PUSlideshowViewController * _secondScreenBrowser;                             //@synthesize _secondScreenBrowser=__secondScreenBrowser - In the implementation block
@property (assign,setter=_setNeedsUpdateSpec:,nonatomic) BOOL _needsUpdateSpec;                                                            //@synthesize _needsUpdateSpec=__needsUpdateSpec - In the implementation block
@property (setter=_setSlideshowPlaceHolderView:,nonatomic,retain) PHPlaceholderView * _slideshowPlaceholderView;                           //@synthesize _slideshowPlaceholderView=__slideshowPlaceholderView - In the implementation block
@property (setter=_setSlideshowSettingsViewController:,nonatomic,retain) UIViewController * _slideshowSettingsViewController;              //@synthesize _slideshowSettingsViewController=__slideshowSettingsViewController - In the implementation block
@property (nonatomic,readonly) PUSlideshowSession * session;                                                                               //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) unsigned long long mode;                                                                                    //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic,__weak) id<PUSlideshowViewControllerDelegate> delegate;                                                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 ;
-(void)viewModel:(id)arg1 didChange:(id)arg2 ;
-(BOOL)prefersStatusBarHidden;
-(void)viewWillLayoutSubviews;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(void)finishSession;
-(id<PUSlideshowViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_tapGesture:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(unsigned long long)mode;
-(void)slideshowSession:(id)arg1 stopDisplayingPresentationViewController:(id)arg2 ;
-(void)slideshowSession:(id)arg1 startDisplayingPresentationViewController:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewControllerSpec:(id)arg1 didChange:(id)arg2 ;
-(void)settingsDidFinished:(id)arg1 ;
-(void)couchPotatoPlaybackFinished;
-(id)visibleAssets;
-(id)initWithSession:(id)arg1 mode:(unsigned long long)arg2 ;
-(void)_setupChromeBar;
-(void)_updateIfNeeded;
-(void)_setupTapGesture;
-(void)_playerStateButtonTapped:(id)arg1 ;
-(void)_settingsButtonTapped:(id)arg1 ;
-(void)_handleAppWillResignActiveNotification:(id)arg1 ;
-(void)_handleStateChange;
-(void)_dismissSlideshow;
-(void)_installPresentationController:(id)arg1 ;
-(void)_removeCurrentPresentationController;
-(void)_removeSlideshowSettingsViewController;
-(void)_updatePlayerButton;
-(void)_updateRouteObservation;
-(void)_updatePlaceholder;
-(id)ancestorViewOfInstance:(id)arg1 ;
-(void)setDelegate:(id<PUSlideshowViewControllerDelegate>)arg1 ;
-(PHPlaceholderView *)_slideshowPlaceholderView;
-(void)_setSlideshowPlaceHolderView:(id)arg1 ;
-(UIViewController *)_slideshowSettingsViewController;
-(void)_setSlideshowSettingsViewController:(id)arg1 ;
-(void)_invalidateSpec;
-(void)_setSecondScreenBrowser:(id)arg1 ;
-(BOOL)_needsUpdateSpec;
-(void)_setNeedsUpdateSpec:(BOOL)arg1 ;
-(PUSlideshowViewController *)_secondScreenBrowser;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)prefersHomeIndicatorAutoHidden;
-(void)_updateChromeVisibility;
-(void)_doneButtonTapped:(id)arg1 ;
-(void)_airplayButtonTapped:(id)arg1 ;
-(void)_updateAirplayButton;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)pu_wantsTabBarVisible;
-(BOOL)_needsUpdate;
-(BOOL)pu_wantsNavigationBarVisible;
-(id)contentViewControllerForAirPlayController:(id)arg1 ;
-(void)airPlayControllerScreenAvailabilityChanged:(id)arg1 ;
-(void)airPlayControllerRouteAvailabilityChanged:(id)arg1 ;
-(void)loadView;
-(PUSlideshowSession *)session;
-(void)_updateSpecIfNeeded;
-(BOOL)pu_wantsToolbarVisible;
-(void)_setNeedsUpdate;
-(void)dealloc;
@end
