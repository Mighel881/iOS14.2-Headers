/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKDPUserPrivacySettings;

@interface CKDPUserPrivacySettingsUpdateRequest : PBRequest <NSCopying> {

	NSString* _bundleIdentifier;
	CKDPUserPrivacySettings* _userPrivacySettings;

}

@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;                                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasUserPrivacySettings; 
@property (nonatomic,retain) CKDPUserPrivacySettings * userPrivacySettings;              //@synthesize userPrivacySettings=_userPrivacySettings - In the implementation block
+(id)options;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(unsigned long long)hash;
-(Class)responseClass;
-(NSString *)bundleIdentifier;
-(id)dictionaryRepresentation;
-(BOOL)hasBundleIdentifier;
-(BOOL)readFrom:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserPrivacySettings:(CKDPUserPrivacySettings *)arg1 ;
-(BOOL)hasUserPrivacySettings;
-(CKDPUserPrivacySettings *)userPrivacySettings;
@end

