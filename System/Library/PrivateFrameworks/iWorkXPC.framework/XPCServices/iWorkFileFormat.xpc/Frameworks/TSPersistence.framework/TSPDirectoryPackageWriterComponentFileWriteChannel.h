/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSPersistence/TSPComponentWriteChannel.h>

@class NSURL, TSUFileIOChannel, NSString;

@interface TSPDirectoryPackageWriterComponentFileWriteChannel : NSObject <TSPComponentWriteChannel> {

	NSURL* _URL;
	/*^block*/id _handler;
	TSUFileIOChannel* _writeChannel;
	BOOL _isClosed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)writeData:(id)arg1 ;
-(id)initWithURL:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

