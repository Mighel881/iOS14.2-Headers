/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INIntent;

@interface INIntentForwardingAction : NSObject <NSSecureCoding> {

	BOOL _allowsScenelessAppLaunch;
	NSString* _appBundleIdentifier;
	INIntent* _intent;
	SCD_Struct_IN2 _hostProcessAuditToken;

}

@property (nonatomic,readonly) INIntent * intent;                                 //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) NSString * appBundleIdentifier;                    //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
@property (nonatomic,readonly) SCD_Struct_IN2 hostProcessAuditToken;              //@synthesize hostProcessAuditToken=_hostProcessAuditToken - In the implementation block
@property (assign,nonatomic) BOOL allowsScenelessAppLaunch;                       //@synthesize allowsScenelessAppLaunch=_allowsScenelessAppLaunch - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)responseClass;
-(INIntent *)intent;
-(void)encodeWithCoder:(id)arg1 ;
-(SCD_Struct_IN2)hostProcessAuditToken;
-(void)executeRemotelyWithVendorRemote:(id)arg1 appHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)allowsScenelessAppLaunch;
-(void)setAllowsScenelessAppLaunch:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)appBundleIdentifier;
-(id)initWithIntent:(id)arg1 ;
@end

