/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PPContactDiskCache : NSObject {

	long long _lastCreatedAt;
	NSString* _path;

}
-(id)initWithPath:(id)arg1 ;
-(id)init;
-(id)_cacheObjectFromFilePath:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEmpty;
-(BOOL)iterNameRecordCacheWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(id)path;
@end

