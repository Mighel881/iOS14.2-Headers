/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol HUProvidesMosaicFrames;
@class HUMosaicLayoutGeometry, NSMutableArray;

@interface HUCCFakeMosaicGridView : UIView {

	id<HUProvidesMosaicFrames> _frameDelegate;
	HUMosaicLayoutGeometry* _mosaicLayoutGeometry;
	NSMutableArray* _fakeCellLayers;
	CGRect _contentBounds;

}

@property (nonatomic,retain) NSMutableArray * fakeCellLayers;                              //@synthesize fakeCellLayers=_fakeCellLayers - In the implementation block
@property (assign,nonatomic) CGRect contentBounds;                                         //@synthesize contentBounds=_contentBounds - In the implementation block
@property (assign,nonatomic,__weak) id<HUProvidesMosaicFrames> frameDelegate;              //@synthesize frameDelegate=_frameDelegate - In the implementation block
@property (nonatomic,retain) HUMosaicLayoutGeometry * mosaicLayoutGeometry;                //@synthesize mosaicLayoutGeometry=_mosaicLayoutGeometry - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(void)setFrameDelegate:(id<HUProvidesMosaicFrames>)arg1 ;
-(id<HUProvidesMosaicFrames>)frameDelegate;
-(void)setContentBounds:(CGRect)arg1 ;
-(CGRect)contentBounds;
-(HUMosaicLayoutGeometry *)mosaicLayoutGeometry;
-(NSMutableArray *)fakeCellLayers;
-(void)setMosaicLayoutGeometry:(HUMosaicLayoutGeometry *)arg1 ;
-(void)setFakeCellLayers:(NSMutableArray *)arg1 ;
@end
