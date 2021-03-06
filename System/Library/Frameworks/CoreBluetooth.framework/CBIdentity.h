/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CUXPCCodable.h>

@class NSString, NSUUID, NSData;

@interface CBIdentity : NSObject <CUXPCCodable> {

	int _type;
	NSString* _accountID;
	NSUUID* _bluetoothIdentifier;
	NSString* _contactID;
	NSString* _identifier;
	NSString* _idsDeviceID;
	NSData* _irkData;
	NSString* _model;
	NSString* _name;

}

@property (nonatomic,copy) NSString * accountID;                      //@synthesize accountID=_accountID - In the implementation block
@property (nonatomic,copy) NSUUID * bluetoothIdentifier;              //@synthesize bluetoothIdentifier=_bluetoothIdentifier - In the implementation block
@property (nonatomic,copy) NSString * contactID;                      //@synthesize contactID=_contactID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * idsDeviceID;                    //@synthesize idsDeviceID=_idsDeviceID - In the implementation block
@property (nonatomic,copy) NSData * irkData;                          //@synthesize irkData=_irkData - In the implementation block
@property (nonatomic,copy) NSString * model;                          //@synthesize model=_model - In the implementation block
@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) int type;                                //@synthesize type=_type - In the implementation block
-(NSString *)model;
-(void)setAccountID:(NSString *)arg1 ;
-(NSString *)contactID;
-(void)setContactID:(NSString *)arg1 ;
-(void)setIdsDeviceID:(NSString *)arg1 ;
-(NSString *)accountID;
-(NSString *)identifier;
-(NSString *)idsDeviceID;
-(void)setType:(int)arg1 ;
-(NSData *)irkData;
-(id)descriptionWithLevel:(int)arg1 ;
-(NSString *)name;
-(void)setIrkData:(NSData *)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setModel:(NSString *)arg1 ;
-(void)encodeWithXPCObject:(id)arg1 ;
-(int)type;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSUUID *)bluetoothIdentifier;
-(void)setBluetoothIdentifier:(NSUUID *)arg1 ;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(void)setName:(NSString *)arg1 ;
@end

