/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VNRequest;

@interface VCPVideoProcessorNode : NSObject {

	VNRequest* _request;
	unsigned long long _frameInterval;
	SCD_Struct_VC6 _timeInterval;

}

@property (nonatomic,readonly) VNRequest * request;                           //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) SCD_Struct_VC6 timeInterval;                   //@synthesize timeInterval=_timeInterval - In the implementation block
@property (nonatomic,readonly) unsigned long long frameInterval;              //@synthesize frameInterval=_frameInterval - In the implementation block
+(BOOL)validateConfiguration:(id)arg1 withError:(id*)arg2 ;
+(id)nodeWithRequest:(id)arg1 andConfiguration:(id)arg2 ;
-(VNRequest *)request;
-(SCD_Struct_VC6)timeInterval;
-(unsigned long long)frameInterval;
-(id)initWithRequest:(id)arg1 andConfiguration:(id)arg2 ;
@end

