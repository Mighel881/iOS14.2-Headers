/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface EKCurrentTimeMarkerView : UIView {

	BOOL _showsThumb;
	BOOL _showsLine;
	UILabel* _currentTimeLabel;

}

@property (nonatomic,retain) UILabel * currentTimeLabel;              //@synthesize currentTimeLabel=_currentTimeLabel - In the implementation block
@property (assign,nonatomic) BOOL showsThumb;                         //@synthesize showsThumb=_showsThumb - In the implementation block
@property (assign,nonatomic) BOOL showsLine;                          //@synthesize showsLine=_showsLine - In the implementation block
@property (nonatomic,readonly) double markerWidth; 
@property (nonatomic,readonly) double markerMidHeight; 
@property (nonatomic,readonly) CGRect currentTimeFrame; 
+(double)_spacingAdjustmentFontSize;
+(id)timeMarkerFontForSizeClass:(long long)arg1 ;
-(void)_updateTimeLabelColor;
-(id)initWithFrame:(CGRect)arg1 sizeClass:(long long)arg2 ;
-(BOOL)showsLine;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateTime;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)currentTimeFrame;
-(CGRect)_lineFrame;
-(void)_updateTimeWithForce:(BOOL)arg1 ;
-(void)setShowsLine:(BOOL)arg1 ;
-(void)setCurrentTimeLabel:(UILabel *)arg1 ;
-(UILabel *)currentTimeLabel;
-(BOOL)showsThumb;
-(double)markerWidth;
-(void)setShowsThumb:(BOOL)arg1 ;
-(double)markerMidHeight;
-(void)invalidateFonts;
@end
