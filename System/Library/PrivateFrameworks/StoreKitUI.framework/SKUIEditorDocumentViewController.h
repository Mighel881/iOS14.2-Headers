/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIEditorTemplateViewDelegate.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@class SKUIButtonViewElement, SKUIEditorTemplateView, SKUIViewElementLayoutContext, SKUIEditorTemplateViewElement, NSString;

@interface SKUIEditorDocumentViewController : SKUIViewController <SKUIEditorTemplateViewDelegate, SKUIDocumentViewController> {

	SKUIButtonViewElement* _doneButtonElement;
	SKUIEditorTemplateView* _editorView;
	BOOL _isTextChanged;
	CGRect _keyboardFrame;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUIButtonViewElement* _resetButtonElement;
	SKUIEditorTemplateViewElement* _templateElement;
	CGRect _toolbarFrame;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_backgroundColor;
-(void)viewWillLayoutSubviews;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_cancelButtonAction;
-(void)_doneButtonAction;
-(void)loadView;
-(id)_layoutContext;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(void)didChangeTextInEditorTemplateView:(id)arg1 ;
-(void)_sendDoneEventAndDismissWithText:(id)arg1 ;
-(void)_updateBiographyWithText:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)_sendCancelEventAndDismiss;
-(void)_updateEditorViewInset;
-(void)_layoutNavigation;
-(void)_layoutEditorView;
-(void)_resetButtonAction;
-(void)_resetTextView;
-(void)_authenticateOnCompletion:(/*^block*/id)arg1 ;
-(id)_locateFirstButtonWithType:(long long)arg1 inChildrenOfElement:(id)arg2 ;
@end

