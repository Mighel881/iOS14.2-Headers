/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <UIKitCore/UIStackView.h>

@class NSMutableArray;

@interface OBStackedIconTextList : UIStackView {

	double _itemSpacing;
	NSMutableArray* _entries;
	double _iconTextPadding;
	unsigned long long _dataDetectorTypes;

}

@property (assign,nonatomic) double iconTextPadding;                            //@synthesize iconTextPadding=_iconTextPadding - In the implementation block
@property (assign,nonatomic) unsigned long long dataDetectorTypes;              //@synthesize dataDetectorTypes=_dataDetectorTypes - In the implementation block
-(id)viewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(id)viewForFirstBaselineLayout;
-(unsigned long long)dataDetectorTypes;
-(void)addEntryWithIcon:(id)arg1 iconSize:(CGSize)arg2 text:(id)arg3 ;
-(double)iconTextPadding;
-(void)setIconTextPadding:(double)arg1 ;
-(void)addEntryWithIcon:(id)arg1 iconSize:(CGSize)arg2 attributedText:(id)arg3 ;
@end

