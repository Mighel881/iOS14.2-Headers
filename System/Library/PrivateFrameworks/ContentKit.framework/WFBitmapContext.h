/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ContentKit/ContentKit-Structs.h>
@interface WFBitmapContext : NSObject {

	double _scale;
	CGContextRef _CGContext;
	CGSize _size;

}

@property (nonatomic,readonly) CGSize size;                         //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double scale;                        //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) CGContextRef CGContext;              //@synthesize CGContext=_CGContext - In the implementation block
+(id)contextWithSize:(CGSize)arg1 scale:(double)arg2 ;
+(id)contextWithDeviceScreenScaleAndSize:(CGSize)arg1 ;
+(id)currentContextWithScale:(double)arg1 ;
-(CGSize)size;
-(id)image;
-(CGContextRef)CGContext;
-(double)scale;
-(void)dealloc;
-(id)initWithCGContext:(CGContextRef)arg1 scale:(double)arg2 ;
-(id)initWithSize:(CGSize)arg1 opaque:(BOOL)arg2 scale:(double)arg3 ;
-(id)imageWithOrientation:(unsigned)arg1 ;
@end
