/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIView.h>

@class WFAction;

@interface WFModuleHeadingView : UIView {

	WFAction* _accessibilityAnnouncementAction;

}

@property (assign,nonatomic,__weak) WFAction * accessibilityAnnouncementAction;              //@synthesize accessibilityAnnouncementAction=_accessibilityAnnouncementAction - In the implementation block
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)accessibilityActivate;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(WFAction *)accessibilityAnnouncementAction;
-(void)setAccessibilityAnnouncementAction:(WFAction *)arg1 ;
@end
