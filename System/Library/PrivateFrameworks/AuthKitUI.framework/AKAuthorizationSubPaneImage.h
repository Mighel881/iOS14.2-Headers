/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthKitUI/AKAuthorizationSubPane.h>

@class UIImageView, NSArray, UIImage;

@interface AKAuthorizationSubPaneImage : AKAuthorizationSubPane {

	UIImageView* _imageView;
	NSArray* _imageViewConstraints;

}

@property (nonatomic,readonly) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSArray * imageViewConstraints;              //@synthesize imageViewConstraints=_imageViewConstraints - In the implementation block
+(id)_imageViewWithImage:(id)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(UIImageView *)imageView;
-(NSArray *)imageViewConstraints;
-(void)setImageViewConstraints:(NSArray *)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)addToStackView:(id)arg1 context:(id)arg2 ;
-(void)addToConstraints:(id)arg1 context:(id)arg2 ;
@end
