/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:49:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/MediaCapture/H10ISP.mediacapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <H10ISP.mediacapture/H10ISP.mediacapture-Structs.h>
@class AVAssetReader, AVAssetReaderTrackOutput;

@interface BasicMOVReader : NSObject {

	AVAssetReader* _reader;
	AVAssetReaderTrackOutput* _output;
	BOOL _hasReachedEndOfStream;

}

@property (readonly) BOOL hasReachedEndOfStream;              //@synthesize hasReachedEndOfStream=_hasReachedEndOfStream - In the implementation block
-(id)initWithFileURL:(id)arg1 error:(id*)arg2 ;
-(CVBufferRef)getNextFrameTimestamp:(SCD_Struct_Ba6*)arg1 error:(id*)arg2 ;
-(BOOL)hasReachedEndOfStream;
@end

