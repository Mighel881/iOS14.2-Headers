/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@interface VCPImageExposurePreAnalyzer : VCPImageAnalyzer {

	float _exposureScore;

}

@property (nonatomic,readonly) float exposureScore;              //@synthesize exposureScore=_exposureScore - In the implementation block
-(float)exposureScore;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
-(float)computeNoiseLevel:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 textureness:(char*)arg5 ;
-(float)computeRegionNoise:(char*)arg1 blockTextureness:(char*)arg2 average:(char*)arg3 width:(int)arg4 height:(int)arg5 stride:(long long)arg6 ;
@end

