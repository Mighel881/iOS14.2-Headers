/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct AudioUnitMeterClipping {
	float peakValueSinceLastCall;
	unsigned char sawInfinity;
	unsigned char sawNotANumber;
} AudioUnitMeterClipping;

typedef struct PowerMeter {
	double mSampleRate;
	double mPeakDecay1;
	double mPeakDecay;
	double mDecay1;
	double mDecay;
	int mPrevBlockSize;
	int mPeakHoldCount;
	double mMaxPeak;
	AudioUnitMeterClipping mClipping;
} PowerMeter;

typedef struct _compressed_pair<float *, std::__1::allocator<float> > {
	float __value_;
} compressed_pair<float *, std::__1::allocator<float> >;

typedef struct vector<float, std::__1::allocator<float> > {
	float __begin_;
	float __end_;
	compressed_pair<float *, std::__1::allocator<float> > __end_cap_;
} vector<float, std::__1::allocator<float> >;

typedef struct {
	double field1;
	double field2;
} SCD_Struct_RC4;

typedef struct opaqueCMSampleBuffer* opaqueCMSampleBufferRef;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	double beginTime;
	double endTime;
} SCD_Struct_RC7;

typedef struct OpaqueAudioFileID* OpaqueAudioFileIDRef;

