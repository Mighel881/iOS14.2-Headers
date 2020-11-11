/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _GEOCoordinatePath : NSObject <NSSecureCoding> {

	SCD_Union_GE140* _coordinates;
	BOOL _usesZilch;
	unsigned long long _count;
	double* _pointLengths;

}

@property (nonatomic,readonly) ControlPoint* zilchControlPoints; 
@property (nonatomic,readonly) unsigned long long count;                      //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double length; 
@property (nonatomic,readonly) double* pointLengths;                          //@synthesize pointLengths=_pointLengths - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(double)length;
-(unsigned long long)count;
-(SCD_Struct_GE98)coordinateAt:(unsigned long long)arg1 ;
-(double*)pointLengths;
-(ControlPoint*)zilchControlPoints;
-(void)setZilchCoordinates:(ControlPoint*)arg1 count:(unsigned long long)arg2 ;
-(void)setBasicCoordinates:(SCD_Struct_GE98*)arg1 count:(unsigned long long)arg2 ;
-(void)setPointLengths:(double*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end
