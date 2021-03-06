/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowUI/WorkflowUI-Structs.h>
#import <WorkflowUI/WFIconView.h>

@class WFWorkflowIconDrawer;

@interface WFIconComposePreviewView : WFIconView {

	WFWorkflowIconDrawer* _iconDrawer;

}

@property (nonatomic,retain) WFWorkflowIconDrawer * iconDrawer;              //@synthesize iconDrawer=_iconDrawer - In the implementation block
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setIcon:(id)arg1 ;
-(void)redrawIcon;
-(WFWorkflowIconDrawer *)iconDrawer;
-(void)setIconDrawer:(WFWorkflowIconDrawer *)arg1 ;
@end

