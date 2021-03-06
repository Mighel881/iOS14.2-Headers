/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITapGestureRecognizer.h>

@protocol UIFocusedInterfaceActionPressDelegate;
@class UIInterfaceActionGroupView, UIInterfaceAction;

@interface _UIInterfaceActionSelectByPressGestureRecognizer : UITapGestureRecognizer {

	id<UIFocusedInterfaceActionPressDelegate> _pressDelegate;
	UIInterfaceActionGroupView* _actionGroupView;
	UIInterfaceAction* _interfaceActionOnPressBegan;

}

@property (assign,nonatomic,__weak) UIInterfaceAction * interfaceActionOnPressBegan;                      //@synthesize interfaceActionOnPressBegan=_interfaceActionOnPressBegan - In the implementation block
@property (assign,nonatomic,__weak) id<UIFocusedInterfaceActionPressDelegate> pressDelegate;              //@synthesize pressDelegate=_pressDelegate - In the implementation block
@property (assign,nonatomic,__weak) UIInterfaceActionGroupView * actionGroupView;                         //@synthesize actionGroupView=_actionGroupView - In the implementation block
-(id)initWithFocusedInterfaceActionPressDelegate:(id)arg1 ;
-(void)reset;
-(void)setInterfaceActionOnPressBegan:(UIInterfaceAction *)arg1 ;
-(id<UIFocusedInterfaceActionPressDelegate>)pressDelegate;
-(void)pressesBegan:(id)arg1 withEvent:(id)arg2 ;
-(UIInterfaceAction *)interfaceActionOnPressBegan;
-(UIInterfaceActionGroupView *)actionGroupView;
-(void)setPressDelegate:(id<UIFocusedInterfaceActionPressDelegate>)arg1 ;
-(void)_gestureChanged:(id)arg1 ;
-(void)setActionGroupView:(UIInterfaceActionGroupView *)arg1 ;
-(void)pressesEnded:(id)arg1 withEvent:(id)arg2 ;
@end

