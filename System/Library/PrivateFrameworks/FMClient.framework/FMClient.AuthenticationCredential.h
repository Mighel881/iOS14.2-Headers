/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FMClient.framework/FMClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMClient.AuthenticationCredential : NSObject <NSSecureCoding> {

	 authToken;
	 personId;
	 hostName;

}

@property (readonly,nonatomic) NSString * authToken; 
@property (readonly,nonatomic) NSString * personId; 
@property (readonly,nonatomic) NSString * hostName; 
+(BOOL)supportsSecureCoding;
-(NSString *)authToken;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hostName;
-(NSString *)personId;
-(id)initWithAuthToken:(id)arg1 personId:(id)arg2 hostName:(id)arg3 ;
@end
