/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, CAShapeLayer;

@interface _PKHueSpectrumView : UIView {

	BOOL _isCompact;
	BOOL _isEmbossed;
	BOOL _isSelected;
	UIImageView* _imageView;
	CAShapeLayer* _maskLayer;

}

@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * maskLayer;              //@synthesize maskLayer=_maskLayer - In the implementation block
@property (assign,nonatomic) BOOL isCompact;                        //@synthesize isCompact=_isCompact - In the implementation block
@property (assign,nonatomic) BOOL isEmbossed;                       //@synthesize isEmbossed=_isEmbossed - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                       //@synthesize isSelected=_isSelected - In the implementation block
+(id)colorWheelImage:(BOOL)arg1 ;
-(void)setIsSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isSelected;
-(CAShapeLayer *)maskLayer;
-(BOOL)isCompact;
-(void)layoutSubviews;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(void)setIsCompact:(BOOL)arg1 ;
-(void)setMaskLayer:(CAShapeLayer *)arg1 ;
-(void)setIsEmbossed:(BOOL)arg1 ;
-(BOOL)isEmbossed;
@end
