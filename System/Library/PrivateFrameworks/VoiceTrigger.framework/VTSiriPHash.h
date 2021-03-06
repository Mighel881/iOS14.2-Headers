/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface VTSiriPHash : NSObject {

	unsigned char _signalFractional;
	short _signalEstimate;

}

@property (assign) short signalEstimate;                        //@synthesize signalEstimate=_signalEstimate - In the implementation block
@property (assign) unsigned char signalFractional;              //@synthesize signalFractional=_signalFractional - In the implementation block
+(id)sharedPhash;
+(unsigned long long)sampleSizeForSignalEstimate;
-(id)init;
-(unsigned short)pHash:(float*)arg1 length:(int)arg2 ;
-(short)signalEstimate;
-(unsigned char)signalFractional;
-(void)setSignalEstimate:(short)arg1 ;
-(void)setSignalFractional:(unsigned char)arg1 ;
@end

