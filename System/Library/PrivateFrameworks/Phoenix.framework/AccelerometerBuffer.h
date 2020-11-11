/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Phoenix.framework/Phoenix
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Phoenix/Phoenix-Structs.h>
@class NSMutableArray;

@interface AccelerometerBuffer : NSObject {

	NSMutableArray* _accelBuffer;
	unsigned long long _bufferSize;
	SCD_Struct_Ac2 _movingSum;
	unsigned long long _sampleRate;
	double _localMinBelowAverage;
	double _localMaxAboveAverage;
	double _localMin;
	double _localMax;

}

@property (assign,nonatomic) double localMinBelowAverage;              //@synthesize localMinBelowAverage=_localMinBelowAverage - In the implementation block
@property (assign,nonatomic) double localMaxAboveAverage;              //@synthesize localMaxAboveAverage=_localMaxAboveAverage - In the implementation block
@property (assign,nonatomic) double localMin;                          //@synthesize localMin=_localMin - In the implementation block
@property (assign,nonatomic) double localMax;                          //@synthesize localMax=_localMax - In the implementation block
-(void)reset;
-(id)description;
-(SCD_Struct_AX0)data;
-(void)logBuffer;
-(void)_fillAccelBufferBeforeFirstSampleTimestamp:(double)arg1 ;
-(double)localMaxAboveAverage;
-(void)setLocalMaxAboveAverage:(double)arg1 ;
-(double)localMinBelowAverage;
-(void)setLocalMinBelowAverage:(double)arg1 ;
-(double)localMax;
-(void)setLocalMax:(double)arg1 ;
-(double)localMin;
-(void)setLocalMin:(double)arg1 ;
-(void)resetMovingSum;
-(id)initWithCapacity:(unsigned long long)arg1 accelerometerSampleRateInHz:(unsigned long long)arg2 ;
-(id)bufferWithMovingSum:(SCD_Struct_Ac2*)arg1 ;
-(void)addData:(SCD_Struct_Ac2)arg1 timestamp:(double)arg2 ;
@end
