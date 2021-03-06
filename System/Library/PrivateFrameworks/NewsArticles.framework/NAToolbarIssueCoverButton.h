/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsArticles.framework/NewsArticles
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsArticles/NewsArticles-Structs.h>
#import <UIKitCore/UIButton.h>

@interface NAToolbarIssueCoverButton : UIButton {

	 coverView;
	 highlightView;
	 highlightColor;

}

@property (assign,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) CGRect accessibilityFrame; 
+(void)updateBarButtonItemWidth:(id)arg1 in:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)accessibilityFrame;
-(BOOL)isHighlighted;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

