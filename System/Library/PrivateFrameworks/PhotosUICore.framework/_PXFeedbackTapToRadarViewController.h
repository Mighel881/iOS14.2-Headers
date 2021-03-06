/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol _PXFeedbackTapToRadarViewControllerDelegate;
@class UISwitch, UISegmentedControl, UILabel;

@interface _PXFeedbackTapToRadarViewController : UIViewController {

	UISwitch* _screenshotSwitch;
	UISwitch* _diagnoseSwitch;
	id<_PXFeedbackTapToRadarViewControllerDelegate> _delegate;
	UISegmentedControl* _segmentedControl;
	UILabel* _routesDescriptionLabel;

}

@property (nonatomic,retain) UISwitch * screenshotSwitch;                                           //@synthesize screenshotSwitch=_screenshotSwitch - In the implementation block
@property (nonatomic,retain) UISwitch * diagnoseSwitch;                                             //@synthesize diagnoseSwitch=_diagnoseSwitch - In the implementation block
@property (nonatomic,retain) id<_PXFeedbackTapToRadarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UISegmentedControl * segmentedControl;                                 //@synthesize segmentedControl=_segmentedControl - In the implementation block
@property (nonatomic,retain) UILabel * routesDescriptionLabel;                                      //@synthesize routesDescriptionLabel=_routesDescriptionLabel - In the implementation block
-(id<_PXFeedbackTapToRadarViewControllerDelegate>)delegate;
-(void)setDelegate:(id<_PXFeedbackTapToRadarViewControllerDelegate>)arg1 ;
-(void)viewDidLoad;
-(UISwitch *)screenshotSwitch;
-(void)_didSelectCancelButton:(id)arg1 ;
-(void)_didSelectFileRadarButton:(id)arg1 ;
-(void)setScreenshotSwitch:(UISwitch *)arg1 ;
-(UISwitch *)diagnoseSwitch;
-(void)setDiagnoseSwitch:(UISwitch *)arg1 ;
-(UILabel *)routesDescriptionLabel;
-(void)setRoutesDescriptionLabel:(UILabel *)arg1 ;
-(UISegmentedControl *)segmentedControl;
-(void)setSegmentedControl:(UISegmentedControl *)arg1 ;
@end

