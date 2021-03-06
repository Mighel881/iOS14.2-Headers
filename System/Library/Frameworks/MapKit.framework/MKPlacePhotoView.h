/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MapKit-Structs.h>
#import <UIKitCore/UIScrollView.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UIImageView, UIImage, NSString;

@interface MKPlacePhotoView : UIScrollView <UIScrollViewDelegate> {

	BOOL _isZoomed;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;               //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) BOOL isZoomed;                         //@synthesize isZoomed=_isZoomed - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isZoomed;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)zoomWithGestureRecognizer:(id)arg1 ;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(id)initWithImage:(id)arg1 ;
-(void)setIsZoomed:(BOOL)arg1 ;
@end

