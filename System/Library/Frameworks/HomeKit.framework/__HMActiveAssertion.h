/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFAssertion.h>

@class HMHomeManager;

@interface __HMActiveAssertion : HMFAssertion {

	HMHomeManager* _manager;

}

@property (__weak,readonly) HMHomeManager * manager;              //@synthesize manager=_manager - In the implementation block
-(id)initWithName:(id)arg1 ;
-(HMHomeManager *)manager;
-(void)invalidate;
-(void)dealloc;
-(id)initWithHomeManager:(id)arg1 reason:(id)arg2 ;
@end

