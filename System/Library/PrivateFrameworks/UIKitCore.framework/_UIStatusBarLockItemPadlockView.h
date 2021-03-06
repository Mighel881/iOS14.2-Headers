/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIImageView, UIStatusBarLockItemView, NSString;

@interface _UIStatusBarLockItemPadlockView : UIView <CAAnimationDelegate> {

	UIImageView* _bodyView;
	UIImageView* _shackleView;
	/*^block*/id _completionBlock;
	UIStatusBarLockItemView* _owner;

}

@property (nonatomic,retain) UIImageView * bodyView;                              //@synthesize bodyView=_bodyView - In the implementation block
@property (nonatomic,retain) UIImageView * shackleView;                           //@synthesize shackleView=_shackleView - In the implementation block
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic,__weak) UIStatusBarLockItemView * owner;              //@synthesize owner=_owner - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionBlock;
-(void)setOwner:(UIStatusBarLockItemView *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(UIStatusBarLockItemView *)owner;
-(UIImageView *)bodyView;
-(void)setBodyView:(UIImageView *)arg1 ;
-(UIImageView *)shackleView;
-(void)reset;
-(void)setShackleView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 owner:(id)arg2 ;
-(void)jiggleCompletionBlock:(/*^block*/id)arg1 ;
-(void)animateUnlockCompletionBlock:(/*^block*/id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCompletionBlock:(id)arg1 ;
@end

