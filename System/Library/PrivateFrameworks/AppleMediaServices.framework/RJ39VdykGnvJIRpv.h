/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class n4cyKQis9m01XZsR, NSString;

@interface RJ39VdykGnvJIRpv : NSObject {

	int _endpointID;
	n4cyKQis9m01XZsR* _name;
	NSString* _phone;
	NSString* _pPhone;
	NSString* _pEmail;
	NSString* _email;
	NSString* _endpointIdentifier;
	unsigned long long _settingsType;

}

@property (nonatomic,retain) n4cyKQis9m01XZsR * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * phone;                             //@synthesize phone=_phone - In the implementation block
@property (nonatomic,retain) NSString * pPhone;                            //@synthesize pPhone=_pPhone - In the implementation block
@property (nonatomic,retain) NSString * pEmail;                            //@synthesize pEmail=_pEmail - In the implementation block
@property (nonatomic,retain) NSString * email;                             //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSString * endpointIdentifier;                //@synthesize endpointIdentifier=_endpointIdentifier - In the implementation block
@property (assign,nonatomic) int endpointID;                               //@synthesize endpointID=_endpointID - In the implementation block
@property (assign,nonatomic) unsigned long long settingsType;              //@synthesize settingsType=_settingsType - In the implementation block
-(id)toDictionary;
-(void)setEmail:(NSString *)arg1 ;
-(NSString *)pEmail;
-(NSString *)pPhone;
-(NSString *)phone;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)email;
-(void)setPEmail:(NSString *)arg1 ;
-(void)setPhone:(NSString *)arg1 ;
-(void)setPPhone:(NSString *)arg1 ;
-(void)setEndpointIdentifier:(NSString *)arg1 ;
-(void)setEndpointID:(int)arg1 ;
-(void)setSettingsType:(unsigned long long)arg1 ;
-(unsigned long long)settingsType;
-(NSString *)endpointIdentifier;
-(n4cyKQis9m01XZsR *)name;
-(id)description;
-(int)endpointID;
-(void)setName:(n4cyKQis9m01XZsR *)arg1 ;
@end
