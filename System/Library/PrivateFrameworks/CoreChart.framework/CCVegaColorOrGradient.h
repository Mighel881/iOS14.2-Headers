/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CCVegaColorOrGradientInterface.h>

@class NSString, NSDictionary;

@interface CCVegaColorOrGradient : NSObject <CCVegaColorOrGradientInterface> {

	NSString* color;
	NSDictionary* gradient;

}

@property (retain) NSString * color; 
@property (retain) NSDictionary * gradient; 
@property (readonly) BOOL isGradient; 
@property (readonly) BOOL isColor; 
-(void)setColor:(NSString *)arg1 ;
-(BOOL)isColor;
-(void)setGradient:(NSDictionary *)arg1 ;
-(id)initWithJSValue:(id)arg1 ;
-(NSString *)color;
-(NSDictionary *)gradient;
-(BOOL)isGradient;
@end
