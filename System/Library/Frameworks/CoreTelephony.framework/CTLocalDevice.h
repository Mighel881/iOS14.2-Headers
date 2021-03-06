/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CTDeviceIdentifier, NSArray;

@interface CTLocalDevice : NSObject <NSSecureCoding> {

	CTDeviceIdentifier* _deviceID;
	NSArray* _installedPlans;

}

@property (nonatomic,retain) CTDeviceIdentifier * deviceID;              //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,retain) NSArray * installedPlans;                   //@synthesize installedPlans=_installedPlans - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)EID;
-(unsigned long long)deviceType;
-(id)deviceName;
-(id)init;
-(NSArray *)installedPlans;
-(void)setInstalledPlans:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CTDeviceIdentifier *)deviceID;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setDeviceID:(CTDeviceIdentifier *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

