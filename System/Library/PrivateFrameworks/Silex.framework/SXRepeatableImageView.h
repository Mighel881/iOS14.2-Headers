/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXImageView.h>

@class UIImage;

@interface SXRepeatableImageView : SXImageView {

	UIImage* _repeatingImage;

}

@property (nonatomic,retain) UIImage * repeatingImage;              //@synthesize repeatingImage=_repeatingImage - In the implementation block
-(void)setImage:(id)arg1 ;
-(id)image;
-(BOOL)isAccessibilityElement;
-(void)setRepeatingImage:(UIImage *)arg1 ;
-(UIImage *)repeatingImage;
@end
