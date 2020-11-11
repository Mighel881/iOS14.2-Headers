/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAccessories.framework/CoreAccessories
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, NSString;

@interface _ACCExternalAccessoryInfo : NSObject {

	NSDictionary* _fullAccessoryInfo;
	NSString* _primaryUUID;
	NSString* _name;
	NSString* _manufacturer;
	NSString* _model;
	NSString* _serial;
	NSString* _firmwareRevisionActive;
	NSString* _firmwareRevisionPending;
	NSString* _hardwareRevision;
	NSString* _ppid;
	unsigned long long _destinationSharingOptions;

}

@property (retain) NSDictionary * fullAccessoryInfo;                          //@synthesize fullAccessoryInfo=_fullAccessoryInfo - In the implementation block
@property (retain) NSString * primaryUUID;                                    //@synthesize primaryUUID=_primaryUUID - In the implementation block
@property (retain) NSString * name;                                           //@synthesize name=_name - In the implementation block
@property (retain) NSString * manufacturer;                                   //@synthesize manufacturer=_manufacturer - In the implementation block
@property (retain) NSString * model;                                          //@synthesize model=_model - In the implementation block
@property (retain) NSString * serial;                                         //@synthesize serial=_serial - In the implementation block
@property (retain) NSString * firmwareRevisionActive;                         //@synthesize firmwareRevisionActive=_firmwareRevisionActive - In the implementation block
@property (retain) NSString * firmwareRevisionPending;                        //@synthesize firmwareRevisionPending=_firmwareRevisionPending - In the implementation block
@property (retain) NSString * hardwareRevision;                               //@synthesize hardwareRevision=_hardwareRevision - In the implementation block
@property (retain) NSString * ppid;                                           //@synthesize ppid=_ppid - In the implementation block
@property (assign) unsigned long long destinationSharingOptions;              //@synthesize destinationSharingOptions=_destinationSharingOptions - In the implementation block
-(NSString *)model;
-(NSString *)manufacturer;
-(void)setSerial:(NSString *)arg1 ;
-(unsigned long long)hash;
-(NSString *)name;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)setPpid:(NSString *)arg1 ;
-(NSString *)ppid;
-(void)setManufacturer:(NSString *)arg1 ;
-(NSString *)serial;
-(NSString *)hardwareRevision;
-(unsigned long long)destinationSharingOptions;
-(void)setName:(NSString *)arg1 ;
-(NSString *)primaryUUID;
-(id)initWithAccessoryInfoDictionary:(id)arg1 ;
-(id)copyAccessoryInfo;
-(NSDictionary *)fullAccessoryInfo;
-(void)setFullAccessoryInfo:(NSDictionary *)arg1 ;
-(void)setPrimaryUUID:(NSString *)arg1 ;
-(NSString *)firmwareRevisionActive;
-(void)setFirmwareRevisionActive:(NSString *)arg1 ;
-(NSString *)firmwareRevisionPending;
-(void)setFirmwareRevisionPending:(NSString *)arg1 ;
-(void)setHardwareRevision:(NSString *)arg1 ;
-(void)setDestinationSharingOptions:(unsigned long long)arg1 ;
@end
