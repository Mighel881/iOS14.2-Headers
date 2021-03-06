/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UIView.h>

@protocol PXContentFilterFooterViewDelegate;
@class PXContentFilterState, UILabel, UIButton;

@interface PXContentFilterFooterView : UIView {

	PXContentFilterState* _filterState;
	UILabel* _captionLabel;
	UIButton* _filterButton;
	id<PXContentFilterFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PXContentFilterFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) PXContentFilterState * filterState;                                 //@synthesize filterState=_filterState - In the implementation block
-(void)setFilterState:(PXContentFilterState *)arg1 ;
-(PXContentFilterState *)filterState;
-(void)_updateDisplay;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<PXContentFilterFooterViewDelegate>)delegate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setDelegate:(id<PXContentFilterFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)_showFilterUI:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
@end

