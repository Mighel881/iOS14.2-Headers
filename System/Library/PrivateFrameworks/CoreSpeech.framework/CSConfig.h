/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CSConfig : NSObject
+(unsigned)inputRecordingNumberOfChannels;
+(float)inputRecordingSampleRate;
+(unsigned)inputRecordingSampleByteDepth;
+(double)inputRecordingBufferDuration;
+(unsigned long long)zeroFilterWindowSizeInMs;
+(unsigned long long)zeroFilterWindowSizeInMsForReport;
+(float)inputRecordingSampleRateNarrowBand;
+(unsigned long long)channelForProcessedInput;
+(float)remoteVADDuration;
+(BOOL)inputRecordingIsFloat;
+(unsigned)inputRecordingFramesPerPacket;
+(unsigned)inputRecordingBytesPerFrame;
+(unsigned)inputRecordingBytesPerPacket;
+(unsigned)hearstNumberOfBytesPerChunk;
+(unsigned)hearstNumberOfSamplesPerChunk;
+(float)inputRecordingDurationInSecs;
+(unsigned)inputRecordingSampleBitDepth;
+(unsigned)EncryptionAudioSampleByteDepth;
+(long long)inputRecordingEncoderAudioQuality;
+(id)inputRecordingSampleRateConverterAlgorithm;
+(unsigned)audioConverterBitrate;
+(unsigned long long)channelForOutputReference;
+(unsigned short)zeroFilterApproxAbsSpeechThreshold;
+(int)csAudioProcessingQueuePriority;
+(float)daysBeforeRemovingLogFiles;
+(unsigned long long)serverLoggingChannelBitset;
+(double)defaultContinousFingerprintBufferDuration;
@end

