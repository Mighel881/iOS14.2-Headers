/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/CNObjectValidation.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface CNActivityAlert : NSObject <CNObjectValidation, NSCopying, NSSecureCoding> {

	BOOL _ignoreMute;
	NSString* _sound;
	NSString* _vibration;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSString * sound;                        //@synthesize sound=_sound - In the implementation block
@property (nonatomic,copy) NSString * vibration;                    //@synthesize vibration=_vibration - In the implementation block
@property (assign,nonatomic) BOOL ignoreMute;                       //@synthesize ignoreMute=_ignoreMute - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                 //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)sound;
-(void)setSound:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithSound:(id)arg1 vibration:(id)arg2 ignoreMute:(BOOL)arg3 userInfo:(id)arg4 ;
-(void)setVibration:(NSString *)arg1 ;
-(NSString *)vibration;
-(NSString *)description;
-(void)setIgnoreMute:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)ignoreMute;
-(id)initWithSound:(id)arg1 vibration:(id)arg2 ignoreMute:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isValid:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

