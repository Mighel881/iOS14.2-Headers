/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAVClippingTableViewCell.h>
#import <libobjc.A.dylib/MPAVRoutingThemeableCellView.h>

@protocol MPAVRoutingTableViewCellDelegate;
@class UIImageView, UILabel, NSTimer, UIActivityIndicatorView, UIView, MPVolumeSlider, MPAVRoutingTableViewCellSubtitleTextState, NSString;

@interface MPAVRoutingTableViewCell : MPAVClippingTableViewCell <MPAVRoutingThemeableCellView> {

	UIImageView* _iconImageView;
	UILabel* _routeNameLabel;
	UILabel* _subtitleTextLabel;
	NSTimer* _subtitleTextUpdateTimer;
	UIActivityIndicatorView* _spinnerView;
	UIImageView* _smartAudioImageView;
	UIImageView* _checkmarkImageView;
	UIImageView* _chevronImageView;
	UIView* _expandTargetView;
	BOOL _mirroringSwitchVisible;
	BOOL _pendingSelection;
	BOOL _isDisplayedAsPicked;
	BOOL _useSmartAudioCheckmarkStyle;
	BOOL _provideOwnSeparator;
	BOOL _showingVolumeSlider;
	id<MPAVRoutingTableViewCellDelegate> _delegate;
	unsigned long long _mirroringStyle;
	unsigned long long _iconStyle;
	double _subtitleViewAlpha;
	MPVolumeSlider* _volumeSlider;
	MPAVRoutingTableViewCellSubtitleTextState* _subtitleTextState;

}

@property (nonatomic,retain) MPAVRoutingTableViewCellSubtitleTextState * subtitleTextState;              //@synthesize subtitleTextState=_subtitleTextState - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVRoutingTableViewCellDelegate> delegate;                       //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL mirroringSwitchVisible;                                                //@synthesize mirroringSwitchVisible=_mirroringSwitchVisible - In the implementation block
@property (assign,nonatomic) unsigned long long mirroringStyle;                                          //@synthesize mirroringStyle=_mirroringStyle - In the implementation block
@property (assign,nonatomic) unsigned long long iconStyle;                                               //@synthesize iconStyle=_iconStyle - In the implementation block
@property (assign,getter=isPendingSelection,nonatomic) BOOL pendingSelection;                            //@synthesize pendingSelection=_pendingSelection - In the implementation block
@property (assign,nonatomic) BOOL isDisplayedAsPicked;                                                   //@synthesize isDisplayedAsPicked=_isDisplayedAsPicked - In the implementation block
@property (assign,nonatomic) BOOL useSmartAudioCheckmarkStyle;                                           //@synthesize useSmartAudioCheckmarkStyle=_useSmartAudioCheckmarkStyle - In the implementation block
@property (assign,nonatomic) BOOL provideOwnSeparator;                                                   //@synthesize provideOwnSeparator=_provideOwnSeparator - In the implementation block
@property (assign,nonatomic) double subtitleViewAlpha;                                                   //@synthesize subtitleViewAlpha=_subtitleViewAlpha - In the implementation block
@property (nonatomic,retain) MPVolumeSlider * volumeSlider;                                              //@synthesize volumeSlider=_volumeSlider - In the implementation block
@property (assign,getter=isShowingVolumeSlider,nonatomic) BOOL showingVolumeSlider;                      //@synthesize showingVolumeSlider=_showingVolumeSlider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)iconView;
-(void)_handleContentSizeCategoryDidChangeNotification:(id)arg1 ;
-(void)setTintColor:(id)arg1 ;
-(id)separatorView;
-(BOOL)isPendingSelection;
-(void)setSubtitleTextState:(MPAVRoutingTableViewCellSubtitleTextState *)arg1 ;
-(void)_configureLabel:(id)arg1 ;
-(id)volumeView;
-(BOOL)isDisplayedAsPicked;
-(void)setPendingSelection:(BOOL)arg1 ;
-(id)_pairedDeviceTextForRoute:(id)arg1 ;
-(id<MPAVRoutingTableViewCellDelegate>)delegate;
-(BOOL)useSmartAudioCheckmarkStyle;
-(id)_iconImageForRoutes:(id)arg1 ;
-(void)_updateSpinnerColor;
-(id)titleView;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)_checkmarkImageForSmartAudio;
-(void)updateForEndpoint:(id)arg1 routeItem:(id)arg2 inferLocalizedModelName:(BOOL)arg3 ;
-(id)_checkmarkAccessibilityLabelForSmartAudio;
-(void)setShowingVolumeSlider:(BOOL)arg1 ;
-(void)setIconStyle:(unsigned long long)arg1 ;
-(void)setAccessoryType:(long long)arg1 ;
-(void)setSubtitleViewAlpha:(double)arg1 ;
-(unsigned long long)iconStyle;
-(void)setDelegate:(id<MPAVRoutingTableViewCellDelegate>)arg1 ;
-(double)subtitleViewAlpha;
-(void)layoutSubviews;
-(void)setIsDisplayedAsPicked:(BOOL)arg1 ;
-(void)didTapToExpand;
-(MPVolumeSlider *)volumeSlider;
-(void)setMirroringSwitchVisible:(BOOL)arg1 ;
-(BOOL)_shouldShowSeparateBatteryPercentagesForBatteryLevel:(id)arg1 ;
-(MPAVRoutingTableViewCellSubtitleTextState *)subtitleTextState;
-(id)_batteryTextForRoute:(id)arg1 ;
-(id)subtitleView;
-(id)_iconImageForRoute:(id)arg1 ;
-(BOOL)provideOwnSeparator;
-(void)prepareForReuse;
-(void)setMirroringStyle:(unsigned long long)arg1 ;
-(void)setUseSmartAudioCheckmarkStyle:(BOOL)arg1 ;
-(BOOL)mirroringSwitchVisible;
-(void)_animateSubtitleLabelToNextAvailableText;
-(void)_updateAccessory;
-(void)setProvideOwnSeparator:(BOOL)arg1 ;
-(BOOL)isShowingVolumeSlider;
-(void)_configureDetailLabel:(id)arg1 ;
-(void)_updateSubtitleTextLabelForRouteItem:(id)arg1 ;
-(unsigned long long)mirroringStyle;
-(id)_checkmarkImageNameForSmartAudio;
-(void)dealloc;
-(void)setVolumeSlider:(MPVolumeSlider *)arg1 ;
@end
