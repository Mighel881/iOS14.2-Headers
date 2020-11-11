/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAuthorizationRevokeUpgradeContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _transactionID;
	NSString* _bundleID;
	NSString* _teamID;

}

@property (nonatomic,copy) NSString * transactionID;              //@synthesize transactionID=_transactionID - In the implementation block
@property (nonatomic,copy) NSString * bundleID;                   //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSString * teamID;                     //@synthesize teamID=_teamID - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)teamID;
-(NSString *)bundleID;
-(NSString *)transactionID;
-(void)setBundleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTeamID:(NSString *)arg1 ;
-(void)setTransactionID:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
