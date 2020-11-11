/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKCircularSmallRingComplicationView.h>

@protocol NTKComplicationImageView;
@class UIView, CLKProgressProvider, NSNumber;

@interface NTKCircularSmallRingImageComplicationView : NTKCircularSmallRingComplicationView {

	UIView*<NTKComplicationImageView> _imageView;
	CLKProgressProvider* _progressProvider;
	NSNumber* _progressUpdateToken;

}
+(BOOL)handlesComplicationTemplate:(id)arg1 ;
+(BOOL)supportsComplicationFamily:(long long)arg1 ;
+(double)_imageScaleForTemplate:(id)arg1 ;
-(void)layoutSubviews;
-(void)_enumerateForegroundColoringViewsWithBlock:(/*^block*/id)arg1 ;
-(void)updateRingWithProgressProvider:(id)arg1 ;
-(void)_updateForTemplateChange;
@end
