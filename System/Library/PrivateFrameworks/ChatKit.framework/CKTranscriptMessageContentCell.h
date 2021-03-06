/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKPhoneTranscriptMessageCell.h>

@class NSAttributedString, UILabel, UIView;

@interface CKTranscriptMessageContentCell : CKPhoneTranscriptMessageCell {

	BOOL _drawerWasVisible;
	BOOL _drawerTextChanged;
	NSAttributedString* _drawerText;
	long long _animationPauseReasons;
	UILabel* _drawerLabel;
	CGSize _messageDisplayViewRequestedSize;
	CGSize _drawerTextSize;

}

@property (nonatomic,retain) UILabel * drawerLabel;                               //@synthesize drawerLabel=_drawerLabel - In the implementation block
@property (assign,nonatomic) BOOL drawerWasVisible;                               //@synthesize drawerWasVisible=_drawerWasVisible - In the implementation block
@property (assign,nonatomic) BOOL drawerTextChanged;                              //@synthesize drawerTextChanged=_drawerTextChanged - In the implementation block
@property (assign,nonatomic) CGSize drawerTextSize;                               //@synthesize drawerTextSize=_drawerTextSize - In the implementation block
@property (readonly) CGRect drawerLabelFrame; 
@property (nonatomic,copy) NSAttributedString * drawerText;                       //@synthesize drawerText=_drawerText - In the implementation block
@property (assign,nonatomic) CGSize messageDisplayViewRequestedSize;              //@synthesize messageDisplayViewRequestedSize=_messageDisplayViewRequestedSize - In the implementation block
@property (assign,nonatomic) long long animationPauseReasons;                     //@synthesize animationPauseReasons=_animationPauseReasons - In the implementation block
@property (readonly) UIView * messageDisplayView; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)configureForChatItem:(id)arg1 context:(id)arg2 ;
-(NSAttributedString *)drawerText;
-(UILabel *)drawerLabel;
-(BOOL)drawerWasVisible;
-(void)layoutSubviewsForDrawer;
-(void)setDrawerWasVisible:(BOOL)arg1 ;
-(BOOL)drawerTextChanged;
-(void)setDrawerTextSize:(CGSize)arg1 ;
-(void)setDrawerTextChanged:(BOOL)arg1 ;
-(CGSize)drawerTextSize;
-(void)layoutSubviewsForAlignmentContents;
-(CGRect)drawerLabelFrame;
-(CGRect)messageDisplayViewFrame:(CGRect)arg1 inContainerFrame:(CGRect)arg2 ;
-(void)setDrawerText:(NSAttributedString *)arg1 ;
-(CGSize)messageDisplayViewRequestedSize;
-(void)setMessageDisplayViewRequestedSize:(CGSize)arg1 ;
-(long long)animationPauseReasons;
-(void)setDrawerLabel:(UILabel *)arg1 ;
-(void)setAnimationPauseReasons:(long long)arg1 ;
-(void)willLayoutDrawerLabelFrame:(CGRect*)arg1 ;
-(UIView *)messageDisplayView;
@end

