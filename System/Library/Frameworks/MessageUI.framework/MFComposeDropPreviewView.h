/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIBezierPath, UIImage, UIImageView;

@interface MFComposeDropPreviewView : UIView {

	UIView* _previewView;
	UIBezierPath* _previewClippingPath;
	UIImage* _finalImage;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * previewView;                            //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UIBezierPath * previewClippingPath;              //@synthesize previewClippingPath=_previewClippingPath - In the implementation block
@property (nonatomic,retain) UIImage * finalImage;                            //@synthesize finalImage=_finalImage - In the implementation block
-(void)setPreviewView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIBezierPath *)previewClippingPath;
-(void)setPreviewClippingPath:(UIBezierPath *)arg1 ;
-(void)setFinalImage:(UIImage *)arg1 ;
-(UIImage *)finalImage;
-(UIView *)previewView;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
@end

