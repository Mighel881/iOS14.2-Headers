/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ACCiAP2ShimAccessory : NSObject {

	BOOL _dontPublish;
	unsigned _connectionID;
	unsigned _featureTypeMask;
	NSString* _keyTag;
	NSString* _keyAccessoryUID;
	NSString* _keyConnectionID;
	NSString* _accessoryUID;
	NSString* _name;
	NSString* _model;
	NSString* _manufacturer;
	NSString* _serialNumber;
	NSString* _firmwareVersion;
	NSString* _hardwareVersion;
	id _context;

}

@property (readonly) NSString * keyTag;                       //@synthesize keyTag=_keyTag - In the implementation block
@property (readonly) NSString * keyAccessoryUID;              //@synthesize keyAccessoryUID=_keyAccessoryUID - In the implementation block
@property (readonly) NSString * keyConnectionID;              //@synthesize keyConnectionID=_keyConnectionID - In the implementation block
@property (assign) unsigned connectionID;                     //@synthesize connectionID=_connectionID - In the implementation block
@property (readonly) unsigned featureTypeMask;                //@synthesize featureTypeMask=_featureTypeMask - In the implementation block
@property (readonly) NSString * accessoryUID;                 //@synthesize accessoryUID=_accessoryUID - In the implementation block
@property (retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (retain) NSString * model;                          //@synthesize model=_model - In the implementation block
@property (retain) NSString * manufacturer;                   //@synthesize manufacturer=_manufacturer - In the implementation block
@property (retain) NSString * serialNumber;                   //@synthesize serialNumber=_serialNumber - In the implementation block
@property (retain) NSString * firmwareVersion;                //@synthesize firmwareVersion=_firmwareVersion - In the implementation block
@property (retain) NSString * hardwareVersion;                //@synthesize hardwareVersion=_hardwareVersion - In the implementation block
@property (retain) id context;                                //@synthesize context=_context - In the implementation block
@property (assign) BOOL dontPublish;                          //@synthesize dontPublish=_dontPublish - In the implementation block
-(NSString *)serialNumber;
-(NSString *)model;
-(NSString *)manufacturer;
-(void)setFirmwareVersion:(NSString *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSString *)firmwareVersion;
-(void)addFeature:(int)arg1 ;
-(NSString *)name;
-(NSString *)keyTag;
-(id)context;
-(id)description;
-(void)setModel:(NSString *)arg1 ;
-(NSString *)hardwareVersion;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)setContext:(id)arg1 ;
-(unsigned)connectionID;
-(void)setConnectionID:(unsigned)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)removeFeature:(int)arg1 ;
-(NSString *)accessoryUID;
-(id)initWithUID:(id)arg1 keyTag:(id)arg2 features:(unsigned)arg3 ;
-(void)setHardwareVersion:(NSString *)arg1 ;
-(void)setDontPublish:(BOOL)arg1 ;
-(id)connectionIDObj;
-(id)accessoryInfoDict;
-(NSString *)keyAccessoryUID;
-(NSString *)keyConnectionID;
-(unsigned)featureTypeMask;
-(BOOL)dontPublish;
@end

