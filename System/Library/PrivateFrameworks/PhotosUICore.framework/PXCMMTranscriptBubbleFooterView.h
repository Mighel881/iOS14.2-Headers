/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, UIImageView, NSString;

@interface PXCMMTranscriptBubbleFooterView : UIView {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UIImageView* _chevronImageView;

}

@property (nonatomic,copy) NSString * primaryText; 
@property (nonatomic,copy) NSString * secondaryText; 
@property (assign,nonatomic) BOOL chevronIsHidden; 
+(double)desiredHeight;
+(double)_primaryToSecondaryBaselineSpacing;
+(double)_topToPrimaryBaselineSpacing;
+(double)_secondaryBaselineToBottomSpacing;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)secondaryText;
-(NSString *)primaryText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)chevronIsHidden;
-(void)setChevronIsHidden:(BOOL)arg1 ;
@end

