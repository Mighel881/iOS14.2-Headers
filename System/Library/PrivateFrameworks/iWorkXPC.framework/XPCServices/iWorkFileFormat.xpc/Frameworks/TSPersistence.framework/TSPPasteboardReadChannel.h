/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSPersistence/TSUStreamReadChannel.h>

@protocol OS_dispatch_queue;
@class NSObject, TSPPasteboard, NSString;

@interface TSPPasteboardReadChannel : NSObject <TSUStreamReadChannel> {

	NSObject*<OS_dispatch_queue> _readQueue;
	TSPPasteboard* _pasteboard;
	NSString* _pasteboardType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(id)init;
-(void)_close;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(void)readWithHandlerAndWait:(/*^block*/id)arg1 ;
-(id)initWithPasteboard:(id)arg1 pasteboardType:(id)arg2 ;
@end
