/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthUI/HealthUI-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, UIBezierPath, NSMutableArray, CAShapeLayer;

@interface HKElectrocardiogramGridView : UIView {

	NSArray* _grids;
	UIBezierPath* _controlSignalPath;
	NSMutableArray* _gridLayers;
	CAShapeLayer* _controlSignalLayer;
	CGSize _unitSize;

}

@property (nonatomic,retain) NSMutableArray * gridLayers;                    //@synthesize gridLayers=_gridLayers - In the implementation block
@property (nonatomic,retain) NSArray * grids;                                //@synthesize grids=_grids - In the implementation block
@property (nonatomic,retain) CAShapeLayer * controlSignalLayer;              //@synthesize controlSignalLayer=_controlSignalLayer - In the implementation block
@property (assign,nonatomic) CGSize unitSize;                                //@synthesize unitSize=_unitSize - In the implementation block
@property (nonatomic,readonly) CGSize majorGridSize; 
@property (nonatomic,retain) UIBezierPath * controlSignalPath;               //@synthesize controlSignalPath=_controlSignalPath - In the implementation block
-(NSArray *)grids;
-(void)layoutSubviews;
-(CGSize)unitSize;
-(void)_createLayers;
-(NSMutableArray *)gridLayers;
-(CAShapeLayer *)controlSignalLayer;
-(void)setControlSignalLayer:(CAShapeLayer *)arg1 ;
-(UIBezierPath *)controlSignalPath;
-(id)initWithUnitSize:(CGSize)arg1 grids:(id)arg2 ;
-(void)setUnitSize:(CGSize)arg1 ;
-(CGSize)majorGridSize;
-(void)setControlSignalPath:(UIBezierPath *)arg1 ;
-(void)setGrids:(NSArray *)arg1 ;
-(void)setGridLayers:(NSMutableArray *)arg1 ;
@end
