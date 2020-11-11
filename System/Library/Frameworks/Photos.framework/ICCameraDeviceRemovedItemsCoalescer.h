/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSDate, NSMutableArray, PHImportDeviceSource;

@interface ICCameraDeviceRemovedItemsCoalescer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	NSDate* _lastNotify;
	NSMutableArray* _items;
	PHImportDeviceSource* _source;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _block;

}
-(id)initWithDevice:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)coalesceItems:(id)arg1 ;
@end
