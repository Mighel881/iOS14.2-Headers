/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CNAvatarViewDelegate.h>

@protocol CKPinnedConversationViewDelegate;
@class CKConversation, NSArray, CKAvatarView, UIImage, UILabel, UIImageView, UIView, CAFilter, CKPinnedConversationActivityView, VNFaceLandmarkRegion2D, NSMutableArray, NSString;

@interface CKPinnedConversationView : UIView <CNAvatarViewDelegate> {

	BOOL _dimmed;
	BOOL _showsLiveActivity;
	BOOL _preferShortConversationName;
	BOOL _needsUnreadIndicatorLeadingEdgePadding;
	BOOL _isSelectedWithDarkAppearance;
	CKConversation* _conversation;
	NSArray* _recentMessagesInPinnedConversations;
	CKAvatarView* _avatarView;
	UIImage* _avatarSnapshot;
	UILabel* _titleLabel;
	UIImageView* _unreadIndicator;
	UIImageView* _radiantShadowImageView;
	long long _layoutStyle;
	UIView* _activityBoundingParentView;
	double _activityItemTopInset;
	id<CKPinnedConversationViewDelegate> _delegate;
	CAFilter* _dimmingFilter;
	CKPinnedConversationActivityView* _activityView;
	UIImageView* _avatarSnapshotImageView;
	VNFaceLandmarkRegion2D* _avatarMouthRegion;
	NSMutableArray* _activeActivitySuppressionReasons;

}

@property (nonatomic,retain) CAFilter * dimmingFilter;                                               //@synthesize dimmingFilter=_dimmingFilter - In the implementation block
@property (nonatomic,retain) CKAvatarView * avatarView;                                              //@synthesize avatarView=_avatarView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                   //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * unreadIndicator;                                          //@synthesize unreadIndicator=_unreadIndicator - In the implementation block
@property (nonatomic,retain) CKPinnedConversationActivityView * activityView;                        //@synthesize activityView=_activityView - In the implementation block
@property (nonatomic,retain) UIImageView * radiantShadowImageView;                                   //@synthesize radiantShadowImageView=_radiantShadowImageView - In the implementation block
@property (nonatomic,retain) UIImageView * avatarSnapshotImageView;                                  //@synthesize avatarSnapshotImageView=_avatarSnapshotImageView - In the implementation block
@property (nonatomic,retain) VNFaceLandmarkRegion2D * avatarMouthRegion;                             //@synthesize avatarMouthRegion=_avatarMouthRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * activeActivitySuppressionReasons;                      //@synthesize activeActivitySuppressionReasons=_activeActivitySuppressionReasons - In the implementation block
@property (assign,getter=isDimmed,nonatomic) BOOL dimmed;                                            //@synthesize dimmed=_dimmed - In the implementation block
@property (nonatomic,retain) CKConversation * conversation;                                          //@synthesize conversation=_conversation - In the implementation block
@property (nonatomic,copy) NSArray * recentMessagesInPinnedConversations;                            //@synthesize recentMessagesInPinnedConversations=_recentMessagesInPinnedConversations - In the implementation block
@property (assign,getter=isUnreadIndicatorHidden,nonatomic) BOOL unreadIndicatorHidden; 
@property (assign,nonatomic) BOOL showsLiveActivity;                                                 //@synthesize showsLiveActivity=_showsLiveActivity - In the implementation block
@property (getter=isSuppressingActivity,nonatomic,readonly) BOOL suppressingActivity; 
@property (assign,nonatomic) BOOL preferShortConversationName;                                       //@synthesize preferShortConversationName=_preferShortConversationName - In the implementation block
@property (assign,nonatomic) long long activityItemOriginationDirection; 
@property (nonatomic,retain) UIImage * avatarSnapshot;                                               //@synthesize avatarSnapshot=_avatarSnapshot - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                  //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) BOOL needsUnreadIndicatorLeadingEdgePadding;                            //@synthesize needsUnreadIndicatorLeadingEdgePadding=_needsUnreadIndicatorLeadingEdgePadding - In the implementation block
@property (assign,nonatomic) BOOL isSelectedWithDarkAppearance;                                      //@synthesize isSelectedWithDarkAppearance=_isSelectedWithDarkAppearance - In the implementation block
@property (assign,nonatomic,__weak) UIView * activityBoundingParentView;                             //@synthesize activityBoundingParentView=_activityBoundingParentView - In the implementation block
@property (assign,nonatomic) double activityItemTopInset;                                            //@synthesize activityItemTopInset=_activityItemTopInset - In the implementation block
@property (assign,nonatomic,__weak) id<CKPinnedConversationViewDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(UIEdgeInsets)avatarViewPadding;
+(CGSize)avatarViewSizeFittingSize:(CGSize)arg1 layoutStyle:(long long)arg2 ;
+(UIEdgeInsets)titleLabelVerticalPadding;
+(double)_maximumAvatarViewWidthFittingSize:(CGSize)arg1 ;
+(double)_preferredAvatarViewDiameterForLayoutStyle:(long long)arg1 ;
+(BOOL)_mouthRegionDetectionEnabled;
+(id)_requiredContactKeys;
+(id)_cachedMouthRegionForContact:(id)arg1 ;
+(id)_mouthRegionForContactImageCacheKeyForContact:(id)arg1 ;
+(void)_updateCachedMouthRegionIfNecessaryForContact:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_mouthRegionForContactImageCache;
+(id)_mouthRegionDetectionDispatchQueue;
+(void)_determineMouthRegionForContact:(id)arg1 completion:(/*^block*/id)arg2 ;
-(UILabel *)titleLabel;
-(void)setDimmed:(BOOL)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setLayoutStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id<CKPinnedConversationViewDelegate>)delegate;
-(id)presentingViewControllerForAvatarView:(id)arg1 ;
-(CKConversation *)conversation;
-(BOOL)isDimmed;
-(long long)layoutStyle;
-(void)_updateTitleLabelFont;
-(BOOL)isSuppressingActivity;
-(long long)activityItemOriginationDirection;
-(void)setActivityItemOriginationDirection:(long long)arg1 ;
-(void)didUpdateContentForAvatarView:(id)arg1 ;
-(void)setDelegate:(id<CKPinnedConversationViewDelegate>)arg1 ;
-(void)reapplyPreviouslyDisplayedActivitySnapshot:(id)arg1 ;
-(void)setActivityView:(CKPinnedConversationActivityView *)arg1 ;
-(void)setShowsLiveActivity:(BOOL)arg1 ;
-(void)setActivityBoundingParentView:(UIView *)arg1 ;
-(void)setActivityItemTopInset:(double)arg1 ;
-(void)setPreferShortConversationName:(BOOL)arg1 ;
-(void)setRecentMessagesInPinnedConversations:(NSArray *)arg1 ;
-(void)beginSuppressingActivityWithReason:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)endSuppressingActivityWithReason:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateActivityViewAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)layoutSubviews;
-(CKAvatarView *)avatarView;
-(void)setAvatarSnapshot:(UIImage *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)configureAsPrototypeCell;
-(void)contentSizeCategoryChanged:(id)arg1 ;
-(UIImageView *)unreadIndicator;
-(UIImageView *)radiantShadowImageView;
-(CKPinnedConversationActivityView *)activityView;
-(void)_updateAvatarView;
-(void)_updateTitleLabelColor;
-(void)_updateRadiantShadowAffineTranform;
-(void)_updateRadiantShadowImageView;
-(BOOL)_activityIsSuppressedForLayoutStyle:(long long)arg1 ;
-(void)_updateAvatarMouthRegion;
-(void)_updateUnreadIndicator;
-(UIImageView *)avatarSnapshotImageView;
-(void)dimAvatarView;
-(void)removeDimmingFilter;
-(CAFilter *)dimmingFilter;
-(void)setDimmingFilter:(CAFilter *)arg1 ;
-(CGSize)titleLabelSizeFittingSize:(CGSize)arg1 ;
-(CGSize)unreadIndicatorSize;
-(NSDirectionalEdgeInsets)unreadIndicatorMinimumPadding;
-(NSDirectionalEdgeInsets)unreadIndicatorPreferredPadding;
-(CGPoint)_centerPointOfFaceLandmarkRegion:(id)arg1 inImageOfSize:(CGSize)arg2 ;
-(BOOL)preferShortConversationName;
-(void)_updateTitleLabelWithText:(id)arg1 ;
-(double)_unreadIndicatorLeadingEdgePadding;
-(NSArray *)recentMessagesInPinnedConversations;
-(BOOL)isSelectedWithDarkAppearance;
-(id)_unreadIndicatorImage;
-(BOOL)showsLiveActivity;
-(void)setAvatarMouthRegion:(VNFaceLandmarkRegion2D *)arg1 ;
-(UIImage *)avatarSnapshot;
-(void)setUnreadIndicatorHidden:(BOOL)arg1 ;
-(BOOL)isUnreadIndicatorHidden;
-(void)setUnreadIndicator:(UIImageView *)arg1 ;
-(double)activityItemTopInset;
-(void)setRadiantShadowImageView:(UIImageView *)arg1 ;
-(BOOL)needsUnreadIndicatorLeadingEdgePadding;
-(UIView *)activityBoundingParentView;
-(void)setAvatarSnapshotImageView:(UIImageView *)arg1 ;
-(VNFaceLandmarkRegion2D *)avatarMouthRegion;
-(NSMutableArray *)activeActivitySuppressionReasons;
-(void)setActiveActivitySuppressionReasons:(NSMutableArray *)arg1 ;
-(void)didEndDisplaying;
-(void)setAvatarView:(CKAvatarView *)arg1 ;
-(void)prepareForReuse;
-(void)_updateTitleLabel;
-(id)_unreadIndicatorColor;
-(void)setNeedsUnreadIndicatorLeadingEdgePadding:(BOOL)arg1 ;
-(void)setIsSelectedWithDarkAppearance:(BOOL)arg1 ;
-(void)setUnreadIndicatorHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGRect)avatarViewFrameForSize:(CGSize)arg1 layoutStyle:(long long)arg2 ;
-(void)setConversation:(CKConversation *)arg1 ;
@end
