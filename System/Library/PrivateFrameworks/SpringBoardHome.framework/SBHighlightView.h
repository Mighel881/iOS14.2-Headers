/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView;

@interface SBHighlightView : UIView {

	UIImageView* _highlight;
	double _highlightAlpha;
	double _highlightHeight;

}

@property (nonatomic,readonly) double highlightAlpha;               //@synthesize highlightAlpha=_highlightAlpha - In the implementation block
@property (nonatomic,readonly) double highlightHeight;              //@synthesize highlightHeight=_highlightHeight - In the implementation block
+(id)_highlightImageWithHeight:(double)arg1 alpha:(double)arg2 ;
+(id)imageCache;
-(double)highlightHeight;
-(double)highlightAlpha;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 highlightAlpha:(double)arg2 highlightHeight:(double)arg3 ;
@end
