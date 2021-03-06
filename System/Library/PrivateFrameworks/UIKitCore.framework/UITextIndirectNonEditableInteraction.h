/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextIndirectEditableInteraction.h>
#import <UIKitCore/_UIKeyboardTextSelectionGestureControllerDelegate.h>

@class _UIKeyboardTextSelectionController, UIKeyboardTaskQueue, NSString;

@interface UITextIndirectNonEditableInteraction : UITextIndirectEditableInteraction <_UIKeyboardTextSelectionGestureControllerDelegate> {

	_UIKeyboardTextSelectionController* _textSelectionController;

}

@property (nonatomic,readonly) UIKeyboardTaskQueue * taskQueue; 
@property (nonatomic,readonly) _UIKeyboardTextSelectionController * textSelectionController; 
@property (nonatomic,readonly) double timestampOfLastTouchesEnded; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithView:(id)arg1 ;
-(void)_setupControllersIfNecessaryWithView:(id)arg1 ;
-(_UIKeyboardTextSelectionController *)textSelectionController;
-(UIKeyboardTaskQueue *)taskQueue;
-(void)willBeginGesture;
-(void)finishSetup;
-(void)didEndGesture;
-(BOOL)shouldAllowWithTouchTypes:(id)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
-(void)dealloc;
-(BOOL)shouldAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
@end

