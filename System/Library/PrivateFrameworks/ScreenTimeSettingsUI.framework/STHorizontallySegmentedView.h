/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class NSArray, NSNumber, NSMutableArray;

@interface STHorizontallySegmentedView : UIView {

	BOOL _useVibrancy;
	BOOL _truncateLabels;
	NSArray* _segmentItems;
	NSNumber* _numberOfLines;
	unsigned long long _maximumNumberOfLines;
	double _previousWidth;
	NSMutableArray* _segmentViews;
	NSArray* _segmentConstraints;

}

@property (nonatomic,retain) NSNumber * numberOfLines;                     //@synthesize numberOfLines=_numberOfLines - In the implementation block
@property (readonly) unsigned long long maximumNumberOfLines;              //@synthesize maximumNumberOfLines=_maximumNumberOfLines - In the implementation block
@property (readonly) BOOL useVibrancy;                                     //@synthesize useVibrancy=_useVibrancy - In the implementation block
@property (readonly) BOOL truncateLabels;                                  //@synthesize truncateLabels=_truncateLabels - In the implementation block
@property (assign,nonatomic) double previousWidth;                         //@synthesize previousWidth=_previousWidth - In the implementation block
@property (nonatomic,readonly) NSMutableArray * segmentViews;              //@synthesize segmentViews=_segmentViews - In the implementation block
@property (nonatomic,copy) NSArray * segmentConstraints;                   //@synthesize segmentConstraints=_segmentConstraints - In the implementation block
@property (nonatomic,copy) NSArray * segmentItems;                         //@synthesize segmentItems=_segmentItems - In the implementation block
-(BOOL)useVibrancy;
-(id)init;
-(void)setNumberOfLines:(NSNumber *)arg1 ;
-(NSNumber *)numberOfLines;
-(id)initWithVibrancy:(BOOL)arg1 maximumNumberOfLines:(unsigned long long)arg2 truncateLabels:(BOOL)arg3 ;
-(void)setSegmentItems:(NSArray *)arg1 ;
-(void)setPreviousWidth:(double)arg1 ;
-(NSMutableArray *)segmentViews;
-(unsigned long long)maximumNumberOfLines;
-(void)layoutSubviews;
-(void)_stHorizontallySegmentedViewCommonInit;
-(NSArray *)segmentConstraints;
-(BOOL)truncateLabels;
-(NSArray *)segmentItems;
-(id)initWithCoder:(id)arg1 ;
-(void)_setUpConstraints;
-(double)previousWidth;
-(void)setSegmentConstraints:(NSArray *)arg1 ;
@end

