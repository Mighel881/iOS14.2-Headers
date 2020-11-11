/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileLookup.framework/MobileLookup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@interface MLUBlurryView : UIView {

	BOOL _hasActivated;
	BOOL _shouldRasterizeForTransition;

}

@property (assign) double blurRadius; 
@property (assign,nonatomic) BOOL shouldRasterizeForTransition;              //@synthesize shouldRasterizeForTransition=_shouldRasterizeForTransition - In the implementation block
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(double)blurRadius;
-(void)setShouldRasterizeForTransition:(BOOL)arg1 ;
-(BOOL)shouldRasterizeForTransition;
-(void)_activateBlurring;
-(void)setBlurRadius:(double)arg1 ;
@end
