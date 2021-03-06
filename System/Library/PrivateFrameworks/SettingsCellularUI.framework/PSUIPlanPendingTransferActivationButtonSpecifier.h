/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSSpecifier.h>

@class CTCellularPlanPendingTransfer, CTCellularPlanManager;

@interface PSUIPlanPendingTransferActivationButtonSpecifier : PSSpecifier {

	CTCellularPlanPendingTransfer* _plan;
	CTCellularPlanManager* _cellularPlanManager;

}

@property (nonatomic,retain) CTCellularPlanPendingTransfer * plan;                     //@synthesize plan=_plan - In the implementation block
@property (nonatomic,retain) CTCellularPlanManager * cellularPlanManager;              //@synthesize cellularPlanManager=_cellularPlanManager - In the implementation block
-(CTCellularPlanManager *)cellularPlanManager;
-(void)setCellularPlanManager:(CTCellularPlanManager *)arg1 ;
-(void)setPlan:(CTCellularPlanPendingTransfer *)arg1 ;
-(CTCellularPlanPendingTransfer *)plan;
-(id)initWithListController:(id)arg1 planPendingTransfer:(id)arg2 ;
-(void)setSpecifierProperties;
-(void)activatePlanPendingTransfer:(id)arg1 ;
@end

