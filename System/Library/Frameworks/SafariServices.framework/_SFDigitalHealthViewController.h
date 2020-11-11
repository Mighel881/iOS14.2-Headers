/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIViewController.h>

@protocol _SFDigitalHealthViewControllerDelegate;
@class NSURL, STBlockingViewController;

@interface _SFDigitalHealthViewController : UIViewController {

	NSURL* _url;
	STBlockingViewController* _blockingViewController;
	id<_SFDigitalHealthViewControllerDelegate> _digitalHealthViewControllerDelegate;
	double _additionalVerticalSafeAreaMargin;

}

@property (assign,nonatomic,__weak) id<_SFDigitalHealthViewControllerDelegate> digitalHealthViewControllerDelegate;              //@synthesize digitalHealthViewControllerDelegate=_digitalHealthViewControllerDelegate - In the implementation block
@property (assign,nonatomic) double additionalVerticalSafeAreaMargin;                                                            //@synthesize additionalVerticalSafeAreaMargin=_additionalVerticalSafeAreaMargin - In the implementation block
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_blockingViewDidHide:(id)arg1 ;
-(void)_updateCurrentLockViewControllerInsetsHorizontalForSizeClass:(long long)arg1 ;
-(id)showBlockingViewControllerForURL:(id)arg1 withPolicy:(long long)arg2 animated:(BOOL)arg3 ;
-(void)hideBlockingViewControllerWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setAdditionalVerticalSafeAreaMargin:(double)arg1 ;
-(id<_SFDigitalHealthViewControllerDelegate>)digitalHealthViewControllerDelegate;
-(void)setDigitalHealthViewControllerDelegate:(id<_SFDigitalHealthViewControllerDelegate>)arg1 ;
-(double)additionalVerticalSafeAreaMargin;
@end
