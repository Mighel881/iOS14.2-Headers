/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class XBApplicationLaunchCompatibilityInfo, XBLaunchStateRequest, NSString;

@interface XBApplicationSnapshotGenerationContext : NSObject <BSDescriptionProviding> {

	XBApplicationLaunchCompatibilityInfo* _applicationCompatibilityInfo;
	XBLaunchStateRequest* _launchRequest;
	double _timeout;

}

@property (nonatomic,readonly) XBApplicationLaunchCompatibilityInfo * applicationCompatibilityInfo;              //@synthesize applicationCompatibilityInfo=_applicationCompatibilityInfo - In the implementation block
@property (nonatomic,copy,readonly) XBLaunchStateRequest * launchRequest;                                        //@synthesize launchRequest=_launchRequest - In the implementation block
@property (nonatomic,readonly) double timeout;                                                                   //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(XBLaunchStateRequest *)launchRequest;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(id)initWithApplicationCompatibilityInfo:(id)arg1 launchRequest:(id)arg2 timeout:(double)arg3 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(double)timeout;
-(id)succinctDescriptionBuilder;
-(XBApplicationLaunchCompatibilityInfo *)applicationCompatibilityInfo;
@end

