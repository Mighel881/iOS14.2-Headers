/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@class PSLegendColorView, UILabel, UIColor, NSString;

@interface PSCapacityBarLegendView : UIView {

	PSLegendColorView* _legendColor;
	UILabel* _legendLabel;

}

@property (nonatomic,retain) UIColor * color; 
@property (nonatomic,retain) NSString * text; 
@property (nonatomic,retain) UIColor * textColor; 
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)createConstraints;
-(id)initWithCapacityBarCategory:(id)arg1 ;
-(UIColor *)color;
@end
