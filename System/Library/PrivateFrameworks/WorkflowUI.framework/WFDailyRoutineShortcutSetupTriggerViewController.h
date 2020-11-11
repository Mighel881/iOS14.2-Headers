/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OnBoardingKit/OBWelcomeController.h>

@protocol WFDailyRoutineShortcutSetupTriggerViewControllerDelegate;
@class WFDailyRoutineShortcutSetupTriggerBuilder;

@interface WFDailyRoutineShortcutSetupTriggerViewController : OBWelcomeController {

	id<WFDailyRoutineShortcutSetupTriggerViewControllerDelegate> _delegate;
	WFDailyRoutineShortcutSetupTriggerBuilder* _trigger;

}

@property (assign,nonatomic,__weak) id<WFDailyRoutineShortcutSetupTriggerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFDailyRoutineShortcutSetupTriggerBuilder * trigger;                                     //@synthesize trigger=_trigger - In the implementation block
-(WFDailyRoutineShortcutSetupTriggerBuilder *)trigger;
-(id<WFDailyRoutineShortcutSetupTriggerViewControllerDelegate>)delegate;
-(void)setDelegate:(id<WFDailyRoutineShortcutSetupTriggerViewControllerDelegate>)arg1 ;
-(id)initWithTrigger:(id)arg1 ;
-(void)didSelectAddTriggerButton;
-(void)didSelectSkipButton;
@end
