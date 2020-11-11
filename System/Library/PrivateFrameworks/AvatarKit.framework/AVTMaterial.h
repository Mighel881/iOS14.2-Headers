/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AvatarKit/AvatarKit-Structs.h>
@class UIColor, NSDictionary;

@interface AVTMaterial : NSObject {

	UIColor* baseColor;
	NSDictionary* secondaryColors;

}

@property (retain) UIColor * baseColor; 
@property (retain) NSDictionary * secondaryColors; 
+(id)materialWithColor:(id)arg1 ;
-(id)init;
-(void)setBaseColor:(UIColor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)baseColor;
-(NSDictionary *)secondaryColors;
-(void)setSecondaryColors:(NSDictionary *)arg1 ;
-(void)_encode:(id)arg1 ;
-(BOOL)_decode:(id)arg1 ;
-(void)applyToSceneKitMaterial:(id)arg1 ;
@end
