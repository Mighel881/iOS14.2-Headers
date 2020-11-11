/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DeviceManagement/DMFTaskRequest.h>

@class NSString;

@interface DMFDeleteUserRequest : DMFTaskRequest {

	BOOL _forceDeletion;
	NSString* _username;

}

@property (nonatomic,copy) NSString * username;               //@synthesize username=_username - In the implementation block
@property (assign,nonatomic) BOOL forceDeletion;              //@synthesize forceDeletion=_forceDeletion - In the implementation block
+(BOOL)isPermittedOnUserConnection;
+(BOOL)supportsSecureCoding;
+(id)permittedPlatforms;
+(BOOL)isPermittedOnSystemConnection;
-(NSString *)username;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)forceDeletion;
-(void)setForceDeletion:(BOOL)arg1 ;
@end
