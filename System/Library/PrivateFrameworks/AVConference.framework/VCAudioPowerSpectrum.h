/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCAudioPowerSpectrumProtocol.h>

@class NSString;

@interface VCAudioPowerSpectrum : NSObject <VCAudioPowerSpectrumProtocol> {

	long long _streamToken;
	VCAudioPowerSpectrumRealtimeContext* _realtimeContext;

}

@property (nonatomic,readonly) VCRange frequencyRange; 
@property (nonatomic,readonly) long long streamToken;               //@synthesize streamToken=_streamToken - In the implementation block
@property (nonatomic,readonly) void* realtimeContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)streamToken;
-(NSString *)description;
-(void)dealloc;
-(void*)realtimeContext;
-(id)initWithBinCount:(unsigned)arg1 streamToken:(long long)arg2 sinkContext:(void*)arg3 sinkCallback:(/*function pointer*/void*)arg4 ;
-(VCRange)frequencyRange;
@end
