/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MBDeviceLockInfo : NSObject <NSSecureCoding> {

	NSString* _deviceUUID;
	NSString* _deviceName;
	NSString* _ownerDeviceUUID;
	NSString* _ownerDeviceName;
	NSDate* _creationDate;
	NSDate* _expirationDate;

}

@property (nonatomic,retain) NSString * deviceUUID;                   //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (nonatomic,retain) NSString * deviceName;                   //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,retain) NSString * ownerDeviceUUID;              //@synthesize ownerDeviceUUID=_ownerDeviceUUID - In the implementation block
@property (nonatomic,retain) NSString * ownerDeviceName;              //@synthesize ownerDeviceName=_ownerDeviceName - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                   //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                 //@synthesize expirationDate=_expirationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)deviceName;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSString *)ownerDeviceUUID;
-(NSString *)ownerDeviceName;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setDeviceUUID:(NSString *)arg1 ;
-(void)setOwnerDeviceUUID:(NSString *)arg1 ;
-(void)setOwnerDeviceName:(NSString *)arg1 ;
-(NSString *)deviceUUID;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)creationDate;
-(NSDate *)expirationDate;
-(void)setDeviceName:(NSString *)arg1 ;
@end

