/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSNumber;

@interface HMDCameraRecordingPreferredVideoConfiguration : NSObject {

	NSDictionary* _bitRateByFrameRate;
	NSNumber* _keyFrameInterval;
	long long _resolution;
	long long _h264Level;

}

@property (readonly) NSDictionary * bitRateByFrameRate;              //@synthesize bitRateByFrameRate=_bitRateByFrameRate - In the implementation block
@property (readonly) NSNumber * keyFrameInterval;                    //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (readonly) long long resolution;                           //@synthesize resolution=_resolution - In the implementation block
@property (readonly) long long h264Level;                            //@synthesize h264Level=_h264Level - In the implementation block
-(long long)resolution;
-(id)description;
-(NSNumber *)keyFrameInterval;
-(long long)h264Level;
-(NSDictionary *)bitRateByFrameRate;
-(id)initWithResolution:(long long)arg1 bitRateByFrameRate:(id)arg2 keyFrameInterval:(id)arg3 h264Level:(long long)arg4 ;
@end

