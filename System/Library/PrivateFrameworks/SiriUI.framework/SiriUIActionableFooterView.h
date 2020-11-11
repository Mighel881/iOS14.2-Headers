/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIReusableFooterView.h>

@protocol SiriUIActionableFooterViewDelegate;
@class UIButton, SiriUIKeyline, SiriUISnippetViewController, NSString;

@interface SiriUIActionableFooterView : SiriUIReusableFooterView {

	UIButton* _button;
	SiriUIKeyline* _keyline;
	BOOL _hasKeyline;
	SiriUISnippetViewController* _snippetViewController;
	id<SiriUIActionableFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUIActionableFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL hasKeyline;                                                     //@synthesize hasKeyline=_hasKeyline - In the implementation block
+(double)defaultHeight;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(id<SiriUIActionableFooterViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUIActionableFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_buttonTapped:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)snippetViewController;
-(void)setSnippetViewController:(id)arg1 ;
-(void)setHasKeyline:(BOOL)arg1 ;
-(BOOL)hasKeyline;
@end
