/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UserNotificationsUIKit/UserNotificationsUIKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NCToggleControlDelegate.h>
#import <libobjc.A.dylib/NCLegibilitySettingsAdjusting.h>
#import <libobjc.A.dylib/PLContentSizeCategoryAdjusting.h>

@protocol NCNotificationListSectionHeaderViewDelegate;
@class NCToggleControl, NSString, NCNotificationListHeaderTitleView, _UILegibilitySettings, UIControl;

@interface NCNotificationListSectionHeaderView : UIView <NCToggleControlDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting> {

	NCToggleControl* _clearButton;
	BOOL _adjustsFontForContentSizeCategory;
	NSString* _preferredContentSizeCategory;
	id<NCNotificationListSectionHeaderViewDelegate> _delegate;
	NSString* _sectionIdentifier;
	NSString* _title;
	NSString* _materialGroupNameBase;
	NCNotificationListHeaderTitleView* _headerTitleView;
	_UILegibilitySettings* _legibilitySettings;

}

@property (nonatomic,retain) NCNotificationListHeaderTitleView * headerTitleView;                          //@synthesize headerTitleView=_headerTitleView - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                   //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic,__weak) id<NCNotificationListSectionHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * sectionIdentifier;                                                   //@synthesize sectionIdentifier=_sectionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * materialGroupNameBase;                                               //@synthesize materialGroupNameBase=_materialGroupNameBase - In the implementation block
@property (nonatomic,readonly) UIControl * clearButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * preferredContentSizeCategory;                                        //@synthesize preferredContentSizeCategory=_preferredContentSizeCategory - In the implementation block
@property (assign,nonatomic) BOOL adjustsFontForContentSizeCategory;                                       //@synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory - In the implementation block
+(double)headerHeightWithWidth:(double)arg1 title:(id)arg2 ;
+(CGSize)_clearButtonPreferredSize;
-(id)_legibilitySettings;
-(void)setAdjustsFontForContentSizeCategory:(BOOL)arg1 ;
-(void)_contentSizeCategoryDidChange;
-(_UILegibilitySettings *)legibilitySettings;
-(BOOL)adjustsFontForContentSizeCategory;
-(BOOL)adjustForContentSizeCategoryChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<NCNotificationListSectionHeaderViewDelegate>)delegate;
-(NSString *)sectionIdentifier;
-(void)adjustForLegibilitySettingsChange:(id)arg1 ;
-(void)setPreferredContentSizeCategory:(NSString *)arg1 ;
-(NSString *)materialGroupNameBase;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDelegate:(id<NCNotificationListSectionHeaderViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(void)setHeaderTitleView:(NCNotificationListHeaderTitleView *)arg1 ;
-(NCNotificationListHeaderTitleView *)headerTitleView;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(NSString *)preferredContentSizeCategory;
-(UIControl *)clearButton;
-(void)setMaterialGroupNameBase:(NSString *)arg1 ;
-(void)resetClearButtonStateAnimated:(BOOL)arg1 ;
-(void)_configureClearButtonIfNecessary;
-(void)_configureHeaderTitleViewIfNecessary;
-(void)_layoutClearButton;
-(void)_layoutHeaderTitleView;
-(void)_resetClearButtonStateAnimated:(BOOL)arg1 ;
-(BOOL)dismissModalFullScreenIfNeeded;
-(void)_updateHeaderTitleViewWithLegibilitySettings:(id)arg1 ;
-(void)_handleClearButtonTouchUpInside:(id)arg1 ;
-(void)_handleClearButtonPrimaryActionTriggered:(id)arg1 ;
-(void)_handleClearAll:(id)arg1 ;
-(id)containerViewForToggleControlClickInteractionPresentedContent:(id)arg1 ;
-(void)toggleControlDidBeginClickInteraction:(id)arg1 ;
-(void)toggleControlDidPresentClickInteractionPresentedContent:(id)arg1 ;
-(void)toggleControlDidDismssClickInteractionPresentedContent:(id)arg1 ;
@end

