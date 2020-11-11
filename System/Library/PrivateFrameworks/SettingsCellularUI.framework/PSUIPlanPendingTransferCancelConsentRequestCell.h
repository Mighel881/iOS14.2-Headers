/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSTableCell.h>

@class CTCellularPlanPendingTransfer, CTCellularPlanManager, UIButton, UILabel;

@interface PSUIPlanPendingTransferCancelConsentRequestCell : PSTableCell {

	CTCellularPlanPendingTransfer* _planPendingTransfer;
	CTCellularPlanManager* _cellularPlanManager;
	UIButton* _cancelButton;
	UILabel* _rightMargin;
	UILabel* _requestSentLabel;

}

@property (nonatomic,retain) CTCellularPlanPendingTransfer * planPendingTransfer;              //@synthesize planPendingTransfer=_planPendingTransfer - In the implementation block
@property (nonatomic,retain) CTCellularPlanManager * cellularPlanManager;                      //@synthesize cellularPlanManager=_cellularPlanManager - In the implementation block
@property (nonatomic,retain) UIButton * cancelButton;                                          //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,retain) UILabel * rightMargin;                                            //@synthesize rightMargin=_rightMargin - In the implementation block
@property (nonatomic,retain) UILabel * requestSentLabel;                                       //@synthesize requestSentLabel=_requestSentLabel - In the implementation block
-(UIButton *)cancelButton;
-(void)setCancelButton:(UIButton *)arg1 ;
-(CTCellularPlanManager *)cellularPlanManager;
-(void)setCellularPlanManager:(CTCellularPlanManager *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)cancelPressed;
-(void)setRightMargin:(UILabel *)arg1 ;
-(UILabel *)rightMargin;
-(CTCellularPlanPendingTransfer *)planPendingTransfer;
-(void)setPlanPendingTransfer:(CTCellularPlanPendingTransfer *)arg1 ;
-(UILabel *)requestSentLabel;
-(void)setRequestSentLabel:(UILabel *)arg1 ;
@end
