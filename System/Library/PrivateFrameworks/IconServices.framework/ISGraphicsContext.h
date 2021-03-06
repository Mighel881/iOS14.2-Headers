/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IconServices/IconServices-Structs.h>
@class ISImage, NSData, ISColor;

@interface ISGraphicsContext : NSObject {

	CGContextRef _cgContext;
	unsigned long long _preset;

}

@property (nonatomic,readonly) unsigned long long preset;              //@synthesize preset=_preset - In the implementation block
@property (nonatomic,readonly) CGContextRef cgContext;                 //@synthesize cgContext=_cgContext - In the implementation block
@property (nonatomic,readonly) double scale; 
@property (nonatomic,readonly) CGRect bounds; 
@property (nonatomic,readonly) ISImage * image; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,retain) ISColor * fillColor; 
@property (nonatomic,retain) ISColor * strokeColor; 
@property (assign,nonatomic) double lineWidth; 
@property (assign,nonatomic) CGAffineTransform transform; 
+(id)bitmapContextWithSize:(CGSize)arg1 scale:(double)arg2 preset:(unsigned long long)arg3 ;
-(void)setFillColor:(ISColor *)arg1 ;
-(void)clear;
-(void)setLineWidth:(double)arg1 ;
-(ISColor *)fillColor;
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void)clipToMaskCGImage:(CGImageRef)arg1 inRect:(CGRect)arg2 ;
-(void)fillRect:(CGRect)arg1 ;
-(ISColor *)strokeColor;
-(void)strokeRect:(CGRect)arg1 ;
-(ISImage *)image;
-(double)lineWidth;
-(void)drawCGImage:(CGImageRef)arg1 inRect:(CGRect)arg2 ;
-(unsigned long long)preset;
-(NSData *)data;
-(void)strokePath:(CGPathRef)arg1 ;
-(id)initWithCGContext:(CGContextRef)arg1 preset:(unsigned long long)arg2 ;
-(void)fillPath:(CGPathRef)arg1 ;
-(CGRect)bounds;
-(void)setStrokeColor:(ISColor *)arg1 ;
-(void)pushState;
-(CGContextRef)cgContext;
-(void)popState;
-(double)scale;
-(void)dealloc;
@end

