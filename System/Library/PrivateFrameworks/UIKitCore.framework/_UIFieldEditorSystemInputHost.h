/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIFieldEditorHost.h>

@class _UIFieldEditorSystemInputHostView, UIVisualEffectView, UISystemInputViewController;

@interface _UIFieldEditorSystemInputHost : _UIFieldEditorHost {

	_UIFieldEditorSystemInputHostView* _containerView;
	UIVisualEffectView* _backgroundEffectView;
	UISystemInputViewController* _systemInputViewController;

}

@property (nonatomic,readonly) UISystemInputViewController * _systemInputViewController;              //@synthesize systemInputViewController=_systemInputViewController - In the implementation block
-(BOOL)_isTV;
-(id)description;
-(void)layoutIfNeeded;
-(void)addFieldEditor:(id)arg1 ;
-(id)_viewForHostingFieldEditor;
-(void)_updateFieldEditorBackgroundViewLayoutForcingDefault:(BOOL)arg1 ;
-(UISystemInputViewController *)_systemInputViewController;
-(void)addPlaceholderLabel:(id)arg1 ;
-(void)removeFieldEditor;
-(void)dealloc;
@end

