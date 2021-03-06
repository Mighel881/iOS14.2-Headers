/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VUIAppDocumentServiceViewController.h>

@class VUIInAppMessagingMessageTargetHandler, _TVStackTemplateController, UIVisualEffectView;

@interface VUICanvasAppDocumentServiceViewController : VUIAppDocumentServiceViewController {

	VUIInAppMessagingMessageTargetHandler* _iamMessageTarget;
	BOOL _iamBannerEnabled;
	BOOL _navBarHidden;
	_TVStackTemplateController* _stackTemplate;
	UIVisualEffectView* _statusBarGradientView;

}

@property (assign,nonatomic,__weak) _TVStackTemplateController * stackTemplate;              //@synthesize stackTemplate=_stackTemplate - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * statusBarGradientView;                     //@synthesize statusBarGradientView=_statusBarGradientView - In the implementation block
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setStatusBarGradientView:(UIVisualEffectView *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UIVisualEffectView *)statusBarGradientView;
-(void)dealloc;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithDocumentServiceRequest:(id)arg1 loadImmediately:(BOOL)arg2 documentRef:(id)arg3 viewControllerIdentifier:(id)arg4 viewControllerDocumentIdentifier:(id)arg5 ;
-(void)_updateNavigationBarWithDocument:(id)arg1 ;
-(void)didCompleteDocumentCreationWithStatus:(long long)arg1 errorDictionary:(id)arg2 ;
-(void)didHostTemplateViewController:(id)arg1 usedTransitions:(BOOL)arg2 ;
-(_TVStackTemplateController *)stackTemplate;
-(void)setStackTemplate:(_TVStackTemplateController *)arg1 ;
@end

