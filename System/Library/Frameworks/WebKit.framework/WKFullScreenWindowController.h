/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@class WKWebView, UIView, NSString;

@interface WKFullScreenWindowController : NSObject <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate> {

	RetainPtr<WKFullScreenPlaceholderView>* _webViewPlaceholder;
	long long _fullScreenState;
	WKWebViewState _viewState;
	RetainPtr<UIWindow>* _window;
	RetainPtr<UIViewController>* _rootViewController;
	RefPtr<WebKit::GenericCallback<>, WTF::DumbPtrTraits<WebKit::GenericCallback<> > >* _repaintCallback;
	RetainPtr<UIViewController>* _viewControllerForPresentation;
	RetainPtr<WKFullScreenViewController>* _fullscreenViewController;
	RetainPtr<UISwipeGestureRecognizer>* _startDismissGestureRecognizer;
	RetainPtr<UIPanGestureRecognizer>* _interactivePanDismissGestureRecognizer;
	RetainPtr<UIPinchGestureRecognizer>* _interactivePinchDismissGestureRecognizer;
	RetainPtr<WKFullScreenInteractiveTransition>* _interactiveDismissTransitionCoordinator;
	WKFullScreenWindowControllerVideoFullscreenModelClient* _videoFullscreenClient;
	BOOL _inPictureInPicture;
	BOOL _returnToFullscreenFromPictureInPicture;
	CGRect _initialFrame;
	CGRect _finalFrame;
	RetainPtr<NSString>* _EVOrganizationName;
	BOOL _EVOrganizationNameIsValid;
	BOOL _inInteractiveDismiss;
	BOOL _exitRequested;
	BOOL _enterRequested;
	BOOL _exitingFullScreen;
	RetainPtr<id>* _notificationListener;
	WKWebView* __webView;

}

@property (assign,nonatomic,__weak) WKWebView * _webView;                       //@synthesize _webView=__webView - In the implementation block
@property (nonatomic,retain,readonly) UIView * webViewPlaceholder; 
@property (nonatomic,readonly) BOOL isFullScreen; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isFullScreen;
-(WebFullScreenManagerProxy*)_manager;
-(void)close;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(id)interactionControllerForDismissal:(id)arg1 ;
-(BOOL)_isSecure;
-(WKWebView *)_webView;
-(void)enterFullScreen;
-(void)exitFullScreen;
-(void)beganEnterFullScreenWithInitialFrame:(CGRect)arg1 finalFrame:(CGRect)arg2 ;
-(void)beganExitFullScreenWithInitialFrame:(CGRect)arg1 finalFrame:(CGRect)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(SecTrustRef)_serverTrust;
-(id)initWithWebView:(id)arg1 ;
-(void)videoControlsManagerDidChange;
-(void)set_webView:(WKWebView *)arg1 ;
-(void)webViewDidRemoveFromSuperviewWhileInFullscreen;
-(void)requestExitFullScreen;
-(UIView *)webViewPlaceholder;
-(void)placeholderWillMoveToSuperview:(id)arg1 ;
-(void)_invalidateEVOrganizationName;
-(void)_updateLocationInfo;
-(void)_startToDismissFullscreenChanged:(id)arg1 ;
-(void)_interactiveDismissChanged:(id)arg1 ;
-(void)_interactivePinchDismissChanged:(id)arg1 ;
-(void)_exitFullscreenImmediately;
-(void)_dismissFullscreenViewController;
-(void)requestEnterFullScreen;
-(void)_completedExitFullScreen;
-(id)_EVOrganizationName;
-(void)willEnterPictureInPicture;
-(void)didEnterPictureInPicture;
-(void)failedToEnterPictureInPicture;
-(void)prepareToExitPictureInPicture;
-(void)didExitPictureInPicture;
-(void)dealloc;
@end
