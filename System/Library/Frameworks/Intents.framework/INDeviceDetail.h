/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INSpeakableString, INPerson;

@interface INDeviceDetail : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding> {

	NSString* _identifier;
	INSpeakableString* _deviceName;
	long long _deviceClass;
	INSpeakableString* _productName;
	INSpeakableString* _category;
	INPerson* _deviceOwner;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * deviceName;               //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) long long deviceClass;                             //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * productName;              //@synthesize productName=_productName - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * category;                 //@synthesize category=_category - In the implementation block
@property (nonatomic,copy,readonly) INPerson * deviceOwner;                       //@synthesize deviceOwner=_deviceOwner - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INSpeakableString *)deviceName;
-(INSpeakableString *)productName;
-(INSpeakableString *)category;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(unsigned long long)hash;
-(long long)deviceClass;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(INPerson *)deviceOwner;
-(id)initWithIdentifier:(id)arg1 deviceName:(id)arg2 deviceClass:(long long)arg3 productName:(id)arg4 category:(id)arg5 deviceOwner:(id)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

