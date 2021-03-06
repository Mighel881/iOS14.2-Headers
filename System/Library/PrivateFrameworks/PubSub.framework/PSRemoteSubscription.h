/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PubSub.framework/PubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PubSub/PSSubscription.h>

@class NSUUID;

@interface PSRemoteSubscription : PSSubscription {

	NSUUID* _remoteDeviceIdentifier;

}

@property (copy,readonly) NSUUID * remoteDeviceIdentifier;              //@synthesize remoteDeviceIdentifier=_remoteDeviceIdentifier - In the implementation block
-(id)attributeDescriptions;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)remoteDeviceIdentifier;
-(id)initWithTopic:(id)arg1 filters:(id)arg2 conditionals:(id)arg3 remoteDeviceIdentifier:(id)arg4 ;
@end

