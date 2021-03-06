/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPQuaternion;

@interface CLPIndoorCMAttitude : PBCodable <NSCopying> {

	double _timestamp;
	float _magneticAccuracy;
	int _magneticCalibration;
	CLPQuaternion* _quaternion;
	SCD_Struct_CL1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasQuaternion; 
@property (nonatomic,retain) CLPQuaternion * quaternion;               //@synthesize quaternion=_quaternion - In the implementation block
@property (assign,nonatomic) BOOL hasMagneticAccuracy; 
@property (assign,nonatomic) float magneticAccuracy;                   //@synthesize magneticAccuracy=_magneticAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasMagneticCalibration; 
@property (assign,nonatomic) int magneticCalibration;                  //@synthesize magneticCalibration=_magneticCalibration - In the implementation block
-(void)mergeFrom:(id)arg1 ;
-(CLPQuaternion *)quaternion;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMagneticCalibration:(int)arg1 ;
-(BOOL)hasMagneticAccuracy;
-(void)copyTo:(id)arg1 ;
-(id)magneticCalibrationAsString:(int)arg1 ;
-(void)setQuaternion:(CLPQuaternion *)arg1 ;
-(void)setHasMagneticCalibration:(BOOL)arg1 ;
-(BOOL)hasQuaternion;
-(int)StringAsMagneticCalibration:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(void)setHasMagneticAccuracy:(BOOL)arg1 ;
-(float)magneticAccuracy;
-(BOOL)hasMagneticCalibration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)magneticCalibration;
-(void)setMagneticAccuracy:(float)arg1 ;
@end

