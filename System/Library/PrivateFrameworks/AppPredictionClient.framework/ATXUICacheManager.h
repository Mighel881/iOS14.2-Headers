/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ATXUICacheManager : NSObject {

	NSString* _cacheBasePath;

}
-(id)cacheFilePathForConsumerSubType:(unsigned char)arg1 ;
-(id)init;
-(id)consumerSubTypeStringsWithNonEmptyCachedLayout;
-(id)serializeLayout:(id)arg1 ;
-(BOOL)deleteCacheFileForConsumerSubType:(unsigned char)arg1 ;
-(id)cacheFilePathForConsumerSubTypeString:(id)arg1 ;
-(id)dataFromFileHandle:(id)arg1 ;
-(BOOL)writeSerializedDataToCacheFile:(id)arg1 path:(id)arg2 ;
-(double)cacheAgeForConsumerSubTypeString:(id)arg1 ;
-(id)deserializeLayoutData:(id)arg1 expectedClass:(Class)arg2 ;
-(BOOL)updateCachedLayout:(id)arg1 consumerSubType:(unsigned char)arg2 ;
-(id)initWithCacheBasePath:(id)arg1 ;
-(id)cachedLayoutForConsumerSubType:(unsigned char)arg1 expectedClass:(Class)arg2 ;
@end

