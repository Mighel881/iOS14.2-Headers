/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <AVKit/AVPlaybackControlsViewItem.h>

@class AVLayoutItemAttributes, AVButton, UIActivityIndicatorView, NSString;

@interface AVLoadingButtonView : UIView <AVPlaybackControlsViewItem> {

	BOOL _removed;
	BOOL _included;
	BOOL _hasFullScreenAppearance;
	BOOL _hasAlternateAppearance;
	BOOL _collapsedOrExcluded;
	BOOL _collapsed;
	BOOL _showsLoadingIndicator;
	AVLayoutItemAttributes* _layoutAttributes;
	AVButton* _button;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;                           //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,readonly) AVButton * button;                                                  //@synthesize button=_button - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator;                                           //@synthesize showsLoadingIndicator=_showsLoadingIndicator - In the implementation block
@property (assign,nonatomic) CGSize extrinsicContentSize; 
@property (assign,getter=isRemoved,nonatomic) BOOL removed;                                        //@synthesize removed=_removed - In the implementation block
@property (assign,getter=isCollapsed,nonatomic) BOOL collapsed;                                    //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isIncluded,nonatomic) BOOL included;                                      //@synthesize included=_included - In the implementation block
@property (getter=isCollapsedOrExcluded,nonatomic,readonly) BOOL collapsedOrExcluded;              //@synthesize collapsedOrExcluded=_collapsedOrExcluded - In the implementation block
@property (assign,nonatomic) BOOL hasAlternateAppearance;                                          //@synthesize hasAlternateAppearance=_hasAlternateAppearance - In the implementation block
@property (assign,nonatomic) BOOL hasFullScreenAppearance;                                         //@synthesize hasFullScreenAppearance=_hasFullScreenAppearance - In the implementation block
@property (nonatomic,readonly) AVLayoutItemAttributes * layoutAttributes;                          //@synthesize layoutAttributes=_layoutAttributes - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRemoved:(BOOL)arg1 ;
-(BOOL)isCollapsed;
-(id)initWithTitle:(id)arg1 ;
-(void)setExtrinsicContentSize:(CGSize)arg1 ;
-(AVButton *)button;
-(CGSize)intrinsicContentSize;
-(void)_updateLayoutItem;
-(BOOL)isIncluded;
-(CGSize)extrinsicContentSize;
-(BOOL)isRemoved;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(void)setCollapsed:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)setHasAlternateAppearance:(BOOL)arg1 ;
-(void)layoutAttributesDidChange;
-(BOOL)hasFullScreenAppearance;
-(BOOL)hasAlternateAppearance;
-(void)setHasFullScreenAppearance:(BOOL)arg1 ;
-(void)setIncluded:(BOOL)arg1 ;
-(BOOL)isCollapsedOrExcluded;
-(AVLayoutItemAttributes *)layoutAttributes;
@end
