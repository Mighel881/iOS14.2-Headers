/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, CLKDevice;

@interface NTKRoundedCornerOverlayView : UIView {

	double _cornerRadius;
	UIImageView* _upperLeftCorner;
	UIImageView* _upperRightCorner;
	UIImageView* _bottomLeftCorner;
	UIImageView* _bottomRightCorner;
	CLKDevice* _device;

}
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 forDeviceCornerRadius:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 cornerRadius:(double)arg3 ;
@end

