/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSObjectNSCopying, NSObject;
@interface ASKResourceRequest : NSObject {

	id<NSObject><NSCopying> _requestKey;
	id<NSObject> _cacheKey;

}

@property (nonatomic,copy) id<NSObject><NSCopying> requestKey;               //@synthesize requestKey=_requestKey - In the implementation block
@property (nonatomic,retain) id<NSObject> cacheKey;                          //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,readonly) unsigned long long cacheOptions; 
+(id)makeUniqueKey;
-(id<NSObject>)cacheKey;
-(id<NSObject><NSCopying>)requestKey;
-(id)init;
-(unsigned long long)hash;
-(void)setCacheKey:(id<NSObject>)arg1 ;
-(id)makeLoadOperation;
-(unsigned long long)cacheOptions;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setRequestKey:(id<NSObject><NSCopying>)arg1 ;
-(void)didLoadResource:(id)arg1 error:(id)arg2 ;
@end

