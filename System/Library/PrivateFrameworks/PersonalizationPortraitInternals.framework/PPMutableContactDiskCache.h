/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PersonalizationPortraitInternals/PPContactDiskCache.h>

@interface PPMutableContactDiskCache : PPContactDiskCache
-(BOOL)updateNameRecordCacheWithHistoryRecords:(id)arg1 error:(id*)arg2 ;
-(BOOL)addNameRecords:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteNameRecordCache;
-(BOOL)_writeCache:(id)arg1 path:(id)arg2 error:(id*)arg3 ;
-(id)_createNewCacheObjectWithCreatedAt:(long long)arg1 ;
-(long long)lastCreatedAt;
-(void)setLastCreatedAt:(long long)arg1 ;
-(BOOL)deleteCacheIfTooOld;
-(id)_recordSetBucketsForNameRecords:(id)arg1 ;
@end
