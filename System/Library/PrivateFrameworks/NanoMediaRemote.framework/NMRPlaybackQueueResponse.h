/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMediaRemote.framework/NanoMediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoMediaRemote/NanoMediaRemote-Structs.h>
#import <libobjc.A.dylib/NMRMediaRemoteProtobufCodable.h>

@class _NMRPlaybackQueueResponseProtobuf, NSString;

@interface NMRPlaybackQueueResponse : NSObject <NMRMediaRemoteProtobufCodable> {

	_NMRPlaybackQueueResponseProtobuf* _protobuf;

}

@property (nonatomic,readonly) void* playbackQueue; 
@property (nonatomic,readonly) CFErrorRef error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CFErrorRef)error;
-(id)protobufData;
-(id)initWithProtobufData:(id)arg1 ;
-(void*)playbackQueue;
-(id)initWithPlaybackQueue:(void*)arg1 error:(CFErrorRef)arg2 ;
-(void)invokeCompletion:(/*^block*/id)arg1 ;
@end

