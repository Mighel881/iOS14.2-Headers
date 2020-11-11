/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreNFC/CoreNFC-Structs.h>
#import <CoreNFC/NFCTagCommandConfiguration.h>

@interface NFCISO15693ReadMultipleBlocksConfiguration : NFCTagCommandConfiguration {

	unsigned char _flags;
	unsigned long long _chunkSize;
	NSRange _range;

}

@property (assign,nonatomic) unsigned char flags;                       //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) NSRange range;                             //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) unsigned long long chunkSize;              //@synthesize chunkSize=_chunkSize - In the implementation block
-(NSRange)range;
-(unsigned long long)chunkSize;
-(void)setRange:(NSRange)arg1 ;
-(void)setChunkSize:(unsigned long long)arg1 ;
-(unsigned char)flags;
-(void)setFlags:(unsigned char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithRange:(NSRange)arg1 chunkSize:(unsigned long long)arg2 maximumRetries:(unsigned long long)arg3 retryInterval:(double)arg4 ;
-(id)initWithRange:(NSRange)arg1 chunkSize:(unsigned long long)arg2 ;
-(id)asNSDataArrayWithUID:(id)arg1 error:(id*)arg2 ;
@end
