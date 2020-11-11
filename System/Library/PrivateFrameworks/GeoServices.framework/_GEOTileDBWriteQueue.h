/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
#import <GeoServices/GeoServices-Structs.h>
@class NSMutableArray, GEOTileDB, NSObject;

@interface _GEOTileDBWriteQueue : NSObject {

	unsigned long long _maxOperations;
	unsigned long long _maxOperationsSizeInBytes;
	NSMutableArray* _pendingOperations;
	GEOTileDB* _db;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _pendingSizeInBytes;

}
-(id)init;
-(void)addOperation:(id)arg1 ;
-(void)dropAllPendingOperations;
-(id)initWithDB:(id)arg1 maxOperations:(unsigned long long)arg2 maxOperationsSizeInBytes:(unsigned long long)arg3 ;
-(void)prunePendingOperationsSupercededByOperation:(id)arg1 ;
-(void)_flushPendingOperations;
-(void)_prunePendingOperationsSupercededByOperationOnIsolationQueue:(id)arg1 ;
-(void)flushPendingOperations:(BOOL)arg1 ;
-(id)dataForKey:(const GEOTileKey*)arg1 ETag:(id*)arg2 originalLoadReason:(unsigned char*)arg3 isKnownNotToExist:(BOOL*)arg4 ;
@end
