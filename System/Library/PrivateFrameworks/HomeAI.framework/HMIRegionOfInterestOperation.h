/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <Foundation/NSOperation.h>

@class HMICameraVideoFrame, NSError;

@interface HMIRegionOfInterestOperation : NSOperation {

	CVBufferRef _pixelBuffer;
	HMICameraVideoFrame* _frame;
	NSError* _error;
	CGSize _size;
	CGRect _cropRect;

}

@property (readonly) CVBufferRef pixelBuffer;                         //@synthesize pixelBuffer=_pixelBuffer - In the implementation block
@property (readonly) CGRect cropRect;                                 //@synthesize cropRect=_cropRect - In the implementation block
@property (__weak,readonly) HMICameraVideoFrame * frame;              //@synthesize frame=_frame - In the implementation block
@property (readonly) CGSize size;                                     //@synthesize size=_size - In the implementation block
@property (readonly) NSError * error;                                 //@synthesize error=_error - In the implementation block
-(CVBufferRef)pixelBuffer;
-(NSError *)error;
-(CGSize)size;
-(void)main;
-(CGRect)cropRect;
-(HMICameraVideoFrame *)frame;
-(void)dealloc;
-(id)initWithFrame:(id)arg1 size:(CGSize)arg2 ;
@end

