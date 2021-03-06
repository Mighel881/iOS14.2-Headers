/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Health/FeedItemPlugins/MenstrualCyclesAppPlugin.healthplugin/MenstrualCyclesAppPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MenstrualCyclesAppPlugin/MenstrualCyclesAppPlugin-Structs.h>
#import <UIKitCore/UICollectionViewLayout.h>

@interface MenstrualCyclesAppPlugin.CycleTimelineCollectionViewLayout : UICollectionViewLayout {

	 config;
	 itemHeight;
	 contentSize;
	 zoomAreaOffset;
	 zoomArea;
	 computedAttributes;

}

@property (readonly,nonatomic) BOOL flipsHorizontallyInOppositeLayoutDirection; 
@property (readonly,nonatomic) CGSize collectionViewContentSize; 
+(Class)layoutAttributesClass;
+(Class)invalidationContextClass;
-(void)invalidateLayoutWithContext:(id)arg1 ;
-(void)prepareLayout;
-(id)layoutAttributesForItemAtIndexPath:(id)arg1 ;
-(CGSize)collectionViewContentSize;
-(id)layoutAttributesForElementsInRect:(CGRect)arg1 ;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 ;
-(id)init;
-(id)invalidationContextForBoundsChange:(CGRect)arg1 ;
-(CGPoint)targetContentOffsetForProposedContentOffset:(CGPoint)arg1 withScrollingVelocity:(CGPoint)arg2 ;
-(BOOL)flipsHorizontallyInOppositeLayoutDirection;
-(id)initWithCoder:(id)arg1 ;
@end

