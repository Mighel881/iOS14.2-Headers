/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:39 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <OpusFoundation/OpusFoundation-Structs.h>
@class NSString, NSObject;

@interface OFMediaMetadataDatabaseCache : NSObject {

	NSString* _diskCacheFilepath;
	sqlite3Ref _sqliteDatabase;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(void)performBlockAndWait:(/*^block*/id)arg1 ;
-(id)init;
-(void)performBlock:(/*^block*/id)arg1 ;
-(BOOL)_open;
-(void)dealloc;
-(void)invalidateDiskCaches;
-(id)initWithDiskCacheFilepath:(id)arg1 ;
-(id)entryForIdentifier:(id)arg1 ;
-(id)newEntryWithIdentifier:(id)arg1 ;
@end

