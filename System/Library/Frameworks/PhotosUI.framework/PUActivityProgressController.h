/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PUActivityProgressViewController, UIAlertController, UIView, NSString, UIWindow, NSProgress;

@interface PUActivityProgressController : NSObject {

	PUActivityProgressViewController* _progressViewController;
	UIAlertController* _alertController;
	UIView* _containerView;
	UIView* _dimmingView;
	UIView* _progressContainerView;
	double _whenDidShow;
	BOOL _didShow;
	BOOL _didHide;
	NSString* _title;
	UIWindow* _window;
	/*^block*/id _cancellationHandler;
	NSProgress* _progress;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (assign,nonatomic,__weak) UIWindow * window;              //@synthesize window=_window - In the implementation block
@property (nonatomic,copy) id cancellationHandler;                  //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                 //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)cancellationHandler;
-(id)init;
-(BOOL)isCancelled;
-(void)setFractionCompleted:(double)arg1 ;
-(id)_newProgressContainerView;
-(void)_updateFractionCompletedFromProgress;
-(void)showAnimated:(BOOL)arg1 allowDelay:(BOOL)arg2 ;
-(void)hideAnimated:(BOOL)arg1 allowDelay:(BOOL)arg2 ;
-(NSProgress *)progress;
-(void)setCancellationHandler:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(UIWindow *)window;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)dealloc;
@end

