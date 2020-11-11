/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CRKChunkedFile : NSObject {

	int mFileDescriptor;

}
+(long long)preferredChunkSizeForFileDescriptor:(int)arg1 ;
+(void)assertFileDescriptorIsValid:(int)arg1 ;
-(id)init;
-(id)initWithFileDescriptor:(int)arg1 ;
-(long long)readNextChunkIntoBuffer:(id)arg1 error:(id*)arg2 ;
@end
