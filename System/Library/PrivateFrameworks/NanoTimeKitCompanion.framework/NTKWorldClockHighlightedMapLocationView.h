/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKWorldClockMapLocationView.h>

@class UIColor;

@interface NTKWorldClockHighlightedMapLocationView : NTKWorldClockMapLocationView {

	UIColor* _fillColor;
	double _strokeWidth;

}

@property (assign,nonatomic) double strokeWidth;               //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(void)drawRect:(CGRect)arg1 ;
-(void)setStrokeWidth:(double)arg1 ;
-(double)strokeWidth;
-(id)initWithFrame:(CGRect)arg1 fillColor:(id)arg2 andStrokeWidth:(double)arg3 ;
@end

