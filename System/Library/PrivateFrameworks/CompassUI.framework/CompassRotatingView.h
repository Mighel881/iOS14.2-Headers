/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CompassUI.framework/CompassUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>

@interface CompassRotatingView : UIView {

	double _compassHeading;
	double _angle;

}

@property (assign,nonatomic) double compassHeading;              //@synthesize compassHeading=_compassHeading - In the implementation block
@property (nonatomic,readonly) double angle;                     //@synthesize angle=_angle - In the implementation block
-(double)angle;
-(double)compassHeading;
-(void)setCompassHeading:(double)arg1 ;
@end

