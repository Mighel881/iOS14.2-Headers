/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>

@class UIImageView, UILabel;

@interface PSBadgedTableCell : PSTableCell {

	UIImageView* _badgeImageView;
	UILabel* _badgeNumberLabel;
	long long _badgeInt;

}
+(double)badgePadding;
+(id)unreadBubbleImage;
+(id)badgeNumberLabelTextColor;
+(id)reuseIdentifierForClassAndType:(long long)arg1 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)badgeWithInteger:(long long)arg1 ;
-(BOOL)_shouldUseRoundStyle;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)resetLocale;
-(void)dealloc;
@end
