/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BrookDataCollection.framework/BrookDataCollection
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

typedef struct OpaqueExtAudioFile* OpaqueExtAudioFileRef;

typedef struct AudioStreamBasicDescription {
	double mSampleRate;
	unsigned mFormatID;
	unsigned mFormatFlags;
	unsigned mBytesPerPacket;
	unsigned mFramesPerPacket;
	unsigned mBytesPerFrame;
	unsigned mChannelsPerFrame;
	unsigned mBitsPerChannel;
	unsigned mReserved;
} AudioStreamBasicDescription;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

