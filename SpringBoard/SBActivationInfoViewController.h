//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/STTelephonyStateObserver-Protocol.h>
#import <SpringBoard/UITableViewDataSource-Protocol.h>
#import <SpringBoard/UITableViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UITableView, UIView;

@interface SBActivationInfoViewController : UIViewController <STTelephonyStateObserver, UITableViewDataSource, UITableViewDelegate>
{
    NSString *_meid;
    NSString *_serial;
    NSArray *_mobileEquipmentInfo;
    NSArray *_mobileSubscriptionInfo;
    UIView *_containerView;
    UITableView *_activationInfoTableView;
    NSLayoutConstraint *_activationInfoTableViewHeight;
    UIButton *_regulatoryInfoButton;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIButton *regulatoryInfoButton; // @synthesize regulatoryInfoButton=_regulatoryInfoButton;
@property(readonly) Class superclass;
@end

