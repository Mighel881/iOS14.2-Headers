/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVContainerCollectionViewCell.h>
#import <TVMLKit/TVAuxiliaryViewSelecting.h>

@protocol TVAuxiliaryViewSelecting, TVCollectionViewLockupCellDelegate;
@class UIView, NSString;

@interface _TVCollectionViewLockupCell : TVContainerCollectionViewCell <TVAuxiliaryViewSelecting> {

	BOOL _pressIsAnimating;
	UIView*<TVAuxiliaryViewSelecting> __selectingView;
	BOOL _unpressOnEndAnimating;
	struct {
		BOOL respondsToDidUnfocus;
		BOOL respondsToDidSelect;
		BOOL respondsToLayeredImageContainerLayerWithinCollectionViewCell;
	}  _delegateFlags;
	id<TVCollectionViewLockupCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVCollectionViewLockupCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<TVCollectionViewLockupCellDelegate>)delegate;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(void)setDelegate:(id<TVCollectionViewLockupCellDelegate>)arg1 ;
-(id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2 ;
-(BOOL)_descendantsShouldHighlight;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(void)_handleSelect;
-(id)_selectingView;
-(id)layeredImageContainerLayer;
-(id)selectingView;
-(void)_clearPressState;
-(void)_showPressState;
@end
