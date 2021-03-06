/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AVTCachedResource, AVTCacheableResourceChangeToken;
@class NSString;

@interface AVTInMemoryResourceCacheEntry : NSObject {

	id<AVTCachedResource> _resource;
	id<AVTCacheableResourceChangeToken> _changeToken;
	NSString* _key;
	unsigned long long _cost;

}

@property (nonatomic,readonly) id<AVTCachedResource> resource;                               //@synthesize resource=_resource - In the implementation block
@property (nonatomic,readonly) id<AVTCacheableResourceChangeToken> changeToken;              //@synthesize changeToken=_changeToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * key;                                          //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) unsigned long long cost;                                      //@synthesize cost=_cost - In the implementation block
-(NSString *)key;
-(unsigned long long)cost;
-(id)description;
-(id<AVTCachedResource>)resource;
-(id<AVTCacheableResourceChangeToken>)changeToken;
-(void)dealloc;
-(id)initWithResource:(id)arg1 changeToken:(id)arg2 key:(id)arg3 cost:(unsigned long long)arg4 ;
@end

