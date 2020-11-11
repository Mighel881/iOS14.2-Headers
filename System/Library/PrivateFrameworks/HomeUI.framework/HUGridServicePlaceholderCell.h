/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HUGridServiceCell.h>

@class HUGridServiceCellTextView, UIVisualEffectView, UIActivityIndicatorView, UILabel, HUIconView;

@interface HUGridServicePlaceholderCell : HUGridServiceCell {

	BOOL _shouldShowRoomName;
	BOOL _showingUpdatingState;
	HUGridServiceCellTextView* _serviceTextView;
	UIVisualEffectView* _descriptionLabelEffectView;
	UIActivityIndicatorView* _activityIndicator;
	UILabel* _coloredDescriptionLabel;
	HUIconView* _iconView;

}
-(id)iconView;
-(id)activityIndicator;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setActivityIndicator:(id)arg1 ;
-(void)layoutSubviews;
-(void)setIconView:(id)arg1 ;
-(void)setShouldShowRoomName:(BOOL)arg1 ;
-(void)displayStyleDidChange;
-(void)_updateSecondaryContentDisplayStyle;
-(void)_setupServiceCell;
-(unsigned long long)iconDisplayStyle;
-(id)serviceTextView;
-(id)_textConfiguration;
-(void)setServiceTextView:(id)arg1 ;
-(id)descriptionLabelEffectView;
-(void)setDescriptionLabelEffectView:(id)arg1 ;
-(BOOL)shouldShowRoomName;
-(id)coloredDescriptionLabel;
-(void)setColoredDescriptionLabel:(id)arg1 ;
-(BOOL)showingUpdatingState;
-(void)setShowingUpdatingState:(BOOL)arg1 ;
@end
