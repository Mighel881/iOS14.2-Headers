/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@protocol SBWindowedAccessoryViewDelegate;
@class UIColor, UIButton;

@interface SBWindowedAccessoryView : UIView {

	id<SBWindowedAccessoryViewDelegate> _delegate;
	UIColor* _backgroundColor;
	UIButton* _forceDetachWindowedAcessoryButton;

}

@property (nonatomic,retain) UIButton * forceDetachWindowedAcessoryButton;                     //@synthesize forceDetachWindowedAcessoryButton=_forceDetachWindowedAcessoryButton - In the implementation block
@property (assign,nonatomic,__weak) id<SBWindowedAccessoryViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                        //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<SBWindowedAccessoryViewDelegate>)delegate;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(void)setDelegate:(id<SBWindowedAccessoryViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_forceDetachWindowedAcessoryButtonTapped:(id)arg1 ;
-(UIButton *)forceDetachWindowedAcessoryButton;
-(void)setForceDetachWindowedAcessoryButton:(UIButton *)arg1 ;
@end

