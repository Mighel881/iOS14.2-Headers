/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSSerializerStream
@required
-(unsigned long long)writeInt:(unsigned long long)arg1;
-(unsigned long long)writeData:(const void*)arg1 length:(unsigned long long)arg2;
-(void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2;
-(unsigned long long)writeRoomForInt:(int*)arg1;
-(unsigned long long)writeAlignedDataSize:(unsigned long long)arg1;
-(void)copySerializationInto:(void*)arg1;

@end
