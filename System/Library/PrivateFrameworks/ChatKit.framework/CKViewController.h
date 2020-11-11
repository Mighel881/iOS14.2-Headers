/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@interface CKViewController : UIViewController {

	BOOL _appeared;
	BOOL _deferredAppeared;
	BOOL _appearing;
	BOOL _dissapearing;

}

@property (assign,nonatomic) BOOL appeared;                      //@synthesize appeared=_appeared - In the implementation block
@property (assign,nonatomic) BOOL deferredAppeared;              //@synthesize deferredAppeared=_deferredAppeared - In the implementation block
@property (assign,nonatomic) BOOL appearing;                     //@synthesize appearing=_appearing - In the implementation block
@property (assign,nonatomic) BOOL dissapearing;                  //@synthesize dissapearing=_dissapearing - In the implementation block
-(void)significantTimeChange;
-(void)prepareForResume;
-(void)prepareForSuspend;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setAppeared:(BOOL)arg1 ;
-(BOOL)dissapearing;
-(void)parentControllerDidResume:(BOOL)arg1 animating:(BOOL)arg2 ;
-(void)setDissapearing:(BOOL)arg1 ;
-(void)setDeferredAppeared:(BOOL)arg1 ;
-(void)childViewControllersPerform:(SEL)arg1 ;
-(BOOL)appearing;
-(BOOL)appeared;
-(void)setAppearing:(BOOL)arg1 ;
-(void)systemApplicationWillEnterForeground;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)parentControllerDidBecomeActive;
-(void)performResumeDeferredSetup;
-(BOOL)deferredAppeared;
-(void)viewDidAppearDeferredSetup;
@end
