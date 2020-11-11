/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VCVideoStreamRateControlProtocol <NSObject>
@property (nonatomic,readonly) int state; 
@property (nonatomic,readonly) unsigned targetBitrate; 
@property (nonatomic,readonly) double owrd; 
@property (nonatomic,readonly) double nowrd; 
@property (nonatomic,readonly) double nowrdShort; 
@property (nonatomic,readonly) double nowrdAcc; 
@property (assign,nonatomic) double rateControlInterval; 
@optional
-(void)printRateControlFullInfoWithLogDump:(void*)arg1 time:(double)arg2 videoStall:(BOOL)arg3 videoFrozenDuration:(double)arg4 averageTargetBitrate:(unsigned)arg5;

@required
-(double)owrd;
-(double)nowrd;
-(int)state;
-(double)nowrdAcc;
-(unsigned)targetBitrate;
-(void)setMaxTierIndex:(unsigned short)arg1 minTierIndex:(unsigned short)arg2;
-(void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingTierIndex:(unsigned short)arg4 averageReceivedBitrate:(unsigned)arg5;
-(void)updateRTPReceiveWithTimestamp:(unsigned)arg1 sampleRate:(unsigned)arg2 time:(double)arg3;
-(double)nowrdShort;
-(double)rateControlInterval;
-(void)setRateControlInterval:(double)arg1;

@end
