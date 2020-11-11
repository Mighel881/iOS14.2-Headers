/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthToolbox/HealthToolbox-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UILabel, NSPersonNameComponentsFormatter;

@interface WDProfileHeaderView : UIView {

	UIView* _avatarView;
	UILabel* _nameLabel;
	NSPersonNameComponentsFormatter* _nameFormatter;

}

@property (nonatomic,retain) UILabel * nameLabel;                                          //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) NSPersonNameComponentsFormatter * nameFormatter;              //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,retain) UIView * avatarView;                                          //@synthesize avatarView=_avatarView - In the implementation block
@property (assign,getter=isNameHidden,nonatomic) BOOL nameHidden; 
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setNameLabel:(UILabel *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(UIView *)avatarView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAvatarView:(UIView *)arg1 ;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 ;
-(UILabel *)nameLabel;
-(void)setNameHidden:(BOOL)arg1 ;
-(void)_updateFont;
-(NSPersonNameComponentsFormatter *)nameFormatter;
-(void)setNameFormatter:(NSPersonNameComponentsFormatter *)arg1 ;
-(BOOL)isNameHidden;
@end
