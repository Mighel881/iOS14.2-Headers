/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface STGenericIntentLocation : NSObject <NSSecureCoding> {

	BOOL _isLatLong;
	NSString* _name;
	double _latitude;
	double _longitude;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) double latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;              //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) BOOL isLatLong;                //@synthesize isLatLong=_isLatLong - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)latitude;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(double)longitude;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 ;
-(BOOL)isLatLong;
-(void)setIsLatLong:(BOOL)arg1 ;
@end

