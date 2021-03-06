/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ChatKit/ChatKit-Structs.h>
#import <ChatKit/CKPinnedConversationTailedActivityItemView.h>

@class CKPinnedConversationMediaObjectActivityItem, UIImageView, NSLayoutConstraint;

@interface CKPinnedConversationMediaObjectBubble : CKPinnedConversationTailedActivityItemView {

	double _pillCornerRadius;
	long long _activityItemViewContentScale;
	CKPinnedConversationMediaObjectActivityItem* _mediaObjectActivityItem;
	UIImageView* _imageView;
	NSLayoutConstraint* _imageViewWidthConstraint;
	NSLayoutConstraint* _imageViewHeightConstraint;

}

@property (nonatomic,retain) UIImageView * imageView;                                                              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewWidthConstraint;                                        //@synthesize imageViewWidthConstraint=_imageViewWidthConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * imageViewHeightConstraint;                                       //@synthesize imageViewHeightConstraint=_imageViewHeightConstraint - In the implementation block
@property (nonatomic,readonly) CKPinnedConversationMediaObjectActivityItem * mediaObjectActivityItem;              //@synthesize mediaObjectActivityItem=_mediaObjectActivityItem - In the implementation block
-(id)_previewImage;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(void)setActivityItem:(id)arg1 ;
-(void)setParentAvatarViewSize:(CGSize)arg1 ;
-(BOOL)supportsActivityItemViewContentScale;
-(long long)activityItemViewContentScale;
-(void)setActivityItemViewContentScale:(long long)arg1 ;
-(BOOL)supportsAlignmentWithOriginationSubAvatarFrame;
-(BOOL)isSticker;
-(CGSize)_imageViewSize;
-(void)_updateMediaObjectPreview;
-(void)_updatePillCornerRadius;
-(long long)contentViewContentMode;
-(void)_updateImageViewSizeConstraints;
-(BOOL)isAnimojiVideo;
-(id)initWithMediaObjectActivityItem:(id)arg1 ;
-(UIEdgeInsets)contentViewPadding;
-(double)contentViewHorizontalInsetForPillCornerRadius;
-(CKPinnedConversationMediaObjectActivityItem *)mediaObjectActivityItem;
-(NSLayoutConstraint *)imageViewWidthConstraint;
-(void)setImageViewWidthConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)imageViewHeightConstraint;
-(void)setImageViewHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(double)pillCornerRadius;
@end

