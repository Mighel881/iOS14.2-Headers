/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <StoreBookkeeper/StoreBookkeeper-Structs.h>
@class NSMutableData;

@interface SBKZipDeflateMemoryOutputStream : NSObject {

	NSMutableData* deflatedData;
	z_stream_s* zstream;
	char* _outputBuffer;
	int _bufferingSize;

}
+(id)dataByDeflatingData:(id)arg1 ;
-(id)close;
-(void)dealloc;
-(BOOL)writeBuffer:(const char*)arg1 size:(unsigned long long)arg2 ;
-(id)initWithBufferingSize:(int)arg1 compressionType:(unsigned long long)arg2 ;
@end

