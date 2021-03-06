/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SensorKit/SensorKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SRDevice : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	NSString* _model;
	NSString* _systemName;
	NSString* _systemVersion;
	NSString* _internalProductType;
	NSString* _deviceIdentifier;
	NSString* _buildVersion;

}

@property (copy) NSString * deviceIdentifier;                    //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (copy) NSString * buildVersion;                        //@synthesize buildVersion=_buildVersion - In the implementation block
@property (copy,readonly) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * model;                      //@synthesize model=_model - In the implementation block
@property (copy,readonly) NSString * systemName;                 //@synthesize systemName=_systemName - In the implementation block
@property (copy,readonly) NSString * systemVersion;              //@synthesize systemVersion=_systemVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)currentDevice;
-(NSString *)systemVersion;
-(NSString *)model;
-(unsigned long long)hash;
-(NSString *)systemName;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)buildVersion;
-(NSString *)name;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_productType;
-(id)initWithCoder:(id)arg1 ;
-(id)sr_dictionaryRepresentation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)dealloc;
-(id)initWithDeviceDetails:(id)arg1 ;
@end

