/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class WFAutomationTypeExplanationPlatterView;

@interface WFAutomationEmptyStateCell : UITableViewCell {

	WFAutomationTypeExplanationPlatterView* _automationTypeView;

}

@property (nonatomic,readonly) WFAutomationTypeExplanationPlatterView * automationTypeView;              //@synthesize automationTypeView=_automationTypeView - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(void)configureForAutomationType:(unsigned long long)arg1 buttonTarget:(id)arg2 action:(SEL)arg3 ;
-(WFAutomationTypeExplanationPlatterView *)automationTypeView;
@end
