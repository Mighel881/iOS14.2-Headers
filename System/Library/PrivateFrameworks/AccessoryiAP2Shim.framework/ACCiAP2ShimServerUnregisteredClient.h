/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:37 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessoryiAP2Shim.framework/AccessoryiAP2Shim
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <AccessoryiAP2Shim/AccessoryiAP2Shim-Structs.h>
@class NSString;

@interface ACCiAP2ShimServerUnregisteredClient : NSObject {

	int _processId;
	NSString* _bundleId;
	SBSProcessAssertionRef _processAssertion;
	long long _processAssertionStartTime;

}

@property (nonatomic,readonly) SBSProcessAssertionRef processAssertion;              //@synthesize processAssertion=_processAssertion - In the implementation block
@property (nonatomic,readonly) long long processAssertionStartTime;                  //@synthesize processAssertionStartTime=_processAssertionStartTime - In the implementation block
@property (nonatomic,readonly) NSString * bundleId;                                  //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) int processId;                                        //@synthesize processId=_processId - In the implementation block
-(int)processId;
-(NSString *)bundleId;
-(id)initWithBundleId:(id)arg1 ;
-(SBSProcessAssertionRef)processAssertion;
-(void)releaseProcessAssertion;
-(int)_getProcessId;
-(id)_applicationInfoForBundleIDSync:(id)arg1 ;
-(void)takeProcessAssertion:(id)arg1 ;
-(long long)processAssertionStartTime;
@end
