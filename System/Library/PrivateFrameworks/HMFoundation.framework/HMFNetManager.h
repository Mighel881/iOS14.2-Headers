/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, _HMFNetManagerWoWAssertion;

@interface HMFNetManager : HMFObject {

	NSObject*<OS_dispatch_queue> _clientQueue;
	_HMFNetManagerWoWAssertion* _wowAssertion;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (__weak) _HMFNetManagerWoWAssertion * wowAssertion;                         //@synthesize wowAssertion=_wowAssertion - In the implementation block
+(void)initialize;
+(id)sharedManager;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)init;
-(void)registerWoWAssertionForObject:(id)arg1 ;
-(void)deregisterWoWAssertionForObject:(id)arg1 ;
-(void)deregisterObject:(id)arg1 ;
-(_HMFNetManagerWoWAssertion *)wowAssertion;
-(void)setWowAssertion:(_HMFNetManagerWoWAssertion *)arg1 ;
@end

