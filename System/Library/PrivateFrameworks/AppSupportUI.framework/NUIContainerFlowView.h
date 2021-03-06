/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppSupportUI/AppSupportUI-Structs.h>
#import <AppSupportUI/NUIContainerView.h>
#import <libobjc.A.dylib/_NUIFlowArrangementContainer.h>

@class NSString;

@interface NUIContainerFlowView : NUIContainerView <_NUIFlowArrangementContainer> {

	NUIFlowArrangement* _arrangement;
	struct {
		unsigned horzAlign : 8;
		unsigned vertAlign : 8;
	}  _flowFlags;

}

@property (assign,nonatomic) long long numberOfColumns; 
@property (assign,nonatomic) long long horizontalAlignment; 
@property (assign,nonatomic) long long verticalAlignment; 
@property (nonatomic,readonly) long long horizontalDistribution; 
@property (nonatomic,readonly) long long verticalDistribution; 
@property (assign,nonatomic) double rowSpacing; 
@property (assign,nonatomic) double columnSpacing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)containerFlowViewWithArrangedSubviews:(id)arg1 ;
-(id)calculateViewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(long long)horizontalDistribution;
-(void)setNumberOfColumns:(long long)arg1 ;
-(void)setVerticalAlignment:(long long)arg1 ;
-(void)setColumnSpacing:(double)arg1 ;
-(long long)verticalDistribution;
-(long long)numberOfColumns;
-(id)initWithArrangedSubviews:(id)arg1 ;
-(long long)verticalAlignment;
-(void)setBaselineRelativeArrangement:(BOOL)arg1 ;
-(CGSize)calculateArrangedSizeFittingSize:(CGSize)arg1 ;
-(double)rowSpacing;
-(BOOL)isLayoutSizeDependentOnPerpendicularAxis;
-(void)setRowSpacing:(double)arg1 ;
-(void)setHorizontalAlignment:(long long)arg1 ;
-(BOOL)setNeedsInvalidation:(long long)arg1 ;
-(void)populateFlowArrangementCells:(vector<_NUIFlowArrangementCell, std::__1::allocator<_NUIFlowArrangementCell> >*)arg1 ;
-(long long)horizontalAlignment;
-(id)arrangedDescription;
-(id)calculateViewForFirstBaselineLayout;
-(double)columnSpacing;
-(id)debugDictionary;
-(void)dealloc;
-(void)layoutArrangedSubviewsInBounds:(CGRect)arg1 ;
@end

