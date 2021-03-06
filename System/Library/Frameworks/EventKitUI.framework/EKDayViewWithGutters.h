/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class EKDayAllDayView, UIView, EKDayView;

@interface EKDayViewWithGutters : UIView {

	EKDayAllDayView* _leftAllDayView;
	EKDayAllDayView* _rightAllDayView;
	long long _targetSizeClass;
	UIView* _leftGutter;
	UIView* _rightGutter;
	EKDayView* _dayView;
	double _gutterWidth;
	double _allDayHeight;

}

@property (nonatomic,readonly) UIView * leftGutter;               //@synthesize leftGutter=_leftGutter - In the implementation block
@property (nonatomic,readonly) UIView * rightGutter;              //@synthesize rightGutter=_rightGutter - In the implementation block
@property (nonatomic,retain) EKDayView * dayView;                 //@synthesize dayView=_dayView - In the implementation block
@property (assign,nonatomic) double gutterWidth;                  //@synthesize gutterWidth=_gutterWidth - In the implementation block
@property (assign,nonatomic) double allDayHeight;                 //@synthesize allDayHeight=_allDayHeight - In the implementation block
-(void)setGutterWidth:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 dayView:(id)arg2 sizeClass:(long long)arg3 ;
-(double)gutterWidth;
-(UIView *)rightGutter;
-(void)setDayView:(EKDayView *)arg1 ;
-(id)_createAllDayView;
-(EKDayView *)dayView;
-(void)setAllDayHeight:(double)arg1 ;
-(UIView *)leftGutter;
-(double)allDayHeight;
@end

