/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSMeasurement;

@interface INCarChargingConnectorPower : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _chargingConnector;
	NSMeasurement* _maximumPower;

}

@property (nonatomic,copy,readonly) NSString * chargingConnector;              //@synthesize chargingConnector=_chargingConnector - In the implementation block
@property (nonatomic,copy,readonly) NSMeasurement * maximumPower;              //@synthesize maximumPower=_maximumPower - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMeasurement *)maximumPower;
-(id)initWithChargingConnector:(id)arg1 maximumPower:(id)arg2 ;
-(NSString *)chargingConnector;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

