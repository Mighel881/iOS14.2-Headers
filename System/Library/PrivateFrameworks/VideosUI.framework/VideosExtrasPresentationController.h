/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <UIKitCore/UIPresentationController.h>

@class UIView;

@interface VideosExtrasPresentationController : UIPresentationController {

	UIView* _extrasMenuBarView;
	CGRect _extrasMenuBarFrame;

}

@property (nonatomic,retain) UIView * extrasMenuBarView;              //@synthesize extrasMenuBarView=_extrasMenuBarView - In the implementation block
@property (assign,nonatomic) CGRect extrasMenuBarFrame;               //@synthesize extrasMenuBarFrame=_extrasMenuBarFrame - In the implementation block
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionWillBegin;
-(void)dismissalTransitionDidEnd:(BOOL)arg1 ;
-(void)presentationTransitionDidEnd:(BOOL)arg1 ;
-(UIView *)extrasMenuBarView;
-(CGRect)extrasMenuBarFrame;
-(id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 extrasMenuBarView:(id)arg3 extrasmenuBarFrame:(CGRect)arg4 ;
-(void)setExtrasMenuBarFrame:(CGRect)arg1 ;
-(void)setExtrasMenuBarView:(UIView *)arg1 ;
@end

