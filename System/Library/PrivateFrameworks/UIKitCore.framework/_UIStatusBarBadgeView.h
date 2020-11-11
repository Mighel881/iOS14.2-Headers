/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>

@class UILabel, NSArray, NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarBadgeView : UIView <_UIStatusBarDisplayable> {

	UILabel* _label;
	NSArray* _constraintsWithConstant;

}

@property (nonatomic,retain) UILabel * label;                                                        //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSArray * constraintsWithConstant;                                      //@synthesize constraintsWithConstant=_constraintsWithConstant - In the implementation block
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setText:(NSString *)arg1 ;
-(void)applyStyleAttributes:(id)arg1 ;
-(UILabel *)label;
-(id)viewForLastBaselineLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)text;
-(NSArray *)constraintsWithConstant;
-(void)setConstraintsWithConstant:(NSArray *)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
@end
