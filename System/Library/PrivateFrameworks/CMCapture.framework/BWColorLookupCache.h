/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface BWColorLookupCache : NSObject {

	NSObject*<OS_dispatch_queue> _coreImageCacheIsolationQueue;
	NSMutableDictionary* _coreImageTableCache;

}
+(void)initialize;
-(id)init;
-(id)colorLookupTablesForFilter:(id)arg1 ;
-(id)interpolatedColorLookupTableFromTable:(id)arg1 toTable:(id)arg2 fractionComplete:(float)arg3 ;
-(id)fetchColorLookupTablesForFilter:(id)arg1 ;
-(id)identityColorLookupTable;
-(void)dealloc;
@end

