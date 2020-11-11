/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CardKit/CardKit-Structs.h>
#import <CardKit/_CRKHitTestPassThroughView.h>

@class UILabel, UIColor, NSString;

@interface _CRKDebugOverlayView : _CRKHitTestPassThroughView {

	UILabel* _label;
	UIColor* _color;
	NSString* _debugText;

}

@property (nonatomic,copy) UIColor * color;                   //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * debugText;              //@synthesize debugText=_debugText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(void)layoutSubviews;
-(NSString *)debugText;
-(void)setDebugText:(NSString *)arg1 ;
-(UIColor *)color;
@end
