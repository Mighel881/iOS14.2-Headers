/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUQuickControlViewController.h>

@class HUQuickControlCollectionViewController, HFTemperatureThresholdControlItem, HFChildServiceControlItem;

@interface HUQuickControlFaucetPanelViewController : HUQuickControlViewController {

	HUQuickControlCollectionViewController* _collectionViewController;

}

@property (nonatomic,readonly) HUQuickControlCollectionViewController * collectionViewController;              //@synthesize collectionViewController=_collectionViewController - In the implementation block
@property (nonatomic,readonly) HFControlItem*<HFPrimaryStateWriter> primaryStateControlItem; 
@property (nonatomic,readonly) HFTemperatureThresholdControlItem * temperatureControlItem; 
@property (nonatomic,readonly) HFChildServiceControlItem * childValvesControlItem; 
+(id)controlItemPredicate;
+(id)_primaryStatePredicate;
+(id)_temperaturePredicate;
+(id)_childValvesPredicate;
-(HUQuickControlCollectionViewController *)collectionViewController;
-(HFControlItem*<HFPrimaryStateWriter>)primaryStateControlItem;
-(void)viewDidLoad;
-(id)initWithControlItems:(id)arg1 home:(id)arg2 itemUpdater:(id)arg3 ;
-(id)childQuickControlContentViewControllers;
-(id)overrideStatusText;
-(HFTemperatureThresholdControlItem *)temperatureControlItem;
-(HFChildServiceControlItem *)childValvesControlItem;
-(id)_controlItemMatchingPredicate:(id)arg1 ;
@end

