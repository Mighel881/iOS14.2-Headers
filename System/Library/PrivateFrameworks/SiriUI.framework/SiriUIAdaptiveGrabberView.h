/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIControl.h>

@interface SiriUIAdaptiveGrabberView : UIControl {

	long long _style;

}

@property (assign,nonatomic) long long style;              //@synthesize style=_style - In the implementation block
+(Class)layerClass;
-(void)setStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(id)shapeLayer;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)style;
-(void)_commonInit;
-(void)setStyle:(long long)arg1 ;
-(void)_setupWithStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(id)_bezierPathForStyle:(long long)arg1 ;
@end
