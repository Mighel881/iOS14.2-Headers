/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthVisualization.framework/HealthVisualization
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthVisualization/HealthVisualization-Structs.h>
#import <UIKitCore/UIView.h>

@class NSDate, NSString;

@interface HealthVisualization.HighlightCalendarDayView : UIView {

	 dayLabel;
	 todayIndicatorLayer;
	 ringsRenderer;
	 activityRingsView;

}

@property (readonly,nonatomic) NSDate * axDate; 
@property (readonly,nonatomic) long long axProbability; 
@property (readonly,nonatomic) NSString * axProjectionKind; 
@property (readonly,nonatomic) long long axCircleState; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(NSDate *)axDate;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)axProbability;
-(NSString *)axProjectionKind;
-(long long)axCircleState;
@end

