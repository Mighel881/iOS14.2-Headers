/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKUserIdentityLookupInfo, CKDeviceToDeviceShareInvitationToken;

@interface PKCloudStoreZoneShareParticipant : NSObject <NSSecureCoding, NSCopying> {

	NSString* _participantHandle;
	CKUserIdentityLookupInfo* _lookupInfo;
	CKDeviceToDeviceShareInvitationToken* _invitationToken;

}

@property (nonatomic,copy) NSString * participantHandle;                                          //@synthesize participantHandle=_participantHandle - In the implementation block
@property (nonatomic,retain) CKUserIdentityLookupInfo * lookupInfo;                               //@synthesize lookupInfo=_lookupInfo - In the implementation block
@property (nonatomic,retain) CKDeviceToDeviceShareInvitationToken * invitationToken;              //@synthesize invitationToken=_invitationToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithParticipant:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(CKUserIdentityLookupInfo *)lookupInfo;
-(void)setLookupInfo:(CKUserIdentityLookupInfo *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)participantHandle;
-(id)invitationTokenData;
-(id)lookupInfoData;
-(void)setParticipantHandle:(NSString *)arg1 ;
-(CKDeviceToDeviceShareInvitationToken *)invitationToken;
-(void)setInvitationToken:(CKDeviceToDeviceShareInvitationToken *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

