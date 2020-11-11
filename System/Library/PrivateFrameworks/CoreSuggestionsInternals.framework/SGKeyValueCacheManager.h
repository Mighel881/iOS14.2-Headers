/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSString, NSMutableArray;

@interface SGKeyValueCacheManager : NSObject {

	NSString* _basePath;
	NSMutableArray* _cacheFiles;
	opaque_pthread_mutex_t _lock;

}
-(id)init;
-(void)replaceCacheOfType:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)initInMemory;
-(id)initWithBasePath:(id)arg1 ;
-(id)cacheOfType:(unsigned long long)arg1 forceReadFromDisk:(BOOL)arg2 ;
-(id)cacheOfType:(unsigned long long)arg1 ;
-(void)deleteValueByRecordIdSet:(id)arg1 ;
@end
