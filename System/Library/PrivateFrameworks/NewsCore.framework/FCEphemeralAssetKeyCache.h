/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/FCAssetKeyCacheType.h>

@class FCThreadSafeMutableDictionary, NSString;

@interface FCEphemeralAssetKeyCache : NSObject <FCAssetKeyCacheType> {

	FCThreadSafeMutableDictionary* _dictionary;

}

@property (nonatomic,readonly) FCThreadSafeMutableDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(FCThreadSafeMutableDictionary *)dictionary;
-(void)removeAllWrappingKeys;
-(id)wrappingKeyForWrappingKeyID:(id)arg1 ;
-(void)setWrappingKey:(id)arg1 forWrappingKeyID:(id)arg2 ;
@end

