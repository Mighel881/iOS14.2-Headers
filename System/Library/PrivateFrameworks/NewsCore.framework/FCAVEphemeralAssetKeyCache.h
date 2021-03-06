/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCAVAssetKeyCacheType.h>

@class FCThreadSafeMutableDictionary, NSData;

@interface FCAVEphemeralAssetKeyCache : NSObject <FCAVAssetKeyCacheType> {

	FCThreadSafeMutableDictionary* _dictionary;
	NSData* _keyServerCertificate;

}

@property (nonatomic,readonly) FCThreadSafeMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,copy) NSData * keyServerCertificate;                               //@synthesize keyServerCertificate=_keyServerCertificate - In the implementation block
-(void)saveKeyServerCertificate:(id)arg1 ;
-(id)init;
-(NSData *)keyServerCertificate;
-(id)assetKeyForURI:(id)arg1 ;
-(void)removeAllAssetKeys;
-(FCThreadSafeMutableDictionary *)dictionary;
-(void)saveAssetKeyData:(id)arg1 creationDate:(id)arg2 expirationDate:(id)arg3 forURI:(id)arg4 ;
-(void)setKeyServerCertificate:(NSData *)arg1 ;
-(void)clearKeyServerCertificate;
@end

