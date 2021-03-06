/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/AccessibilityBundles/PhotosEditUI.axbundle/PhotosEditUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosEditUI/PhotosEditUI-Structs.h>
#import <PhotosEditUI/__PUTiltWheelControlAccessibility_super.h>

@interface PUTiltWheelControlAccessibility : __PUTiltWheelControlAccessibility_super
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
+(id)safeCategoryTargetClassName;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(id)accessibilityValue;
-(double)_axRadiansToDegrees:(double)arg1 ;
-(double)_axDegreesToRadians:(double)arg1 ;
-(CGAffineTransform)_transformForTiltAngle:(double)arg1 ;
@end

