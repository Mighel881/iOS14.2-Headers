/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class CAGradientLayer;

@interface AVStatusBarBackgroundGradientViewSubview : UIView {

	double _gradientOpacity;

}

@property (nonatomic,readonly) CAGradientLayer * layer; 
@property (assign,nonatomic) double gradientOpacity;                 //@synthesize gradientOpacity=_gradientOpacity - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)gradientOpacity;
-(void)setGradientOpacity:(double)arg1 ;
@end
