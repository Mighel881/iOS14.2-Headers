/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/DEReader.h>

@class NSData;

@interface DEDataReader : NSObject <DEReader> {

	NSData* _data;
	unsigned long long _dataOffset;

}

@property (nonatomic,retain) NSData * data;                              //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long dataOffset;              //@synthesize dataOffset=_dataOffset - In the implementation block
-(void)close;
-(void)setData:(NSData *)arg1 ;
-(id)init;
-(id)readData;
-(NSData *)data;
-(unsigned long long)dataOffset;
-(void)setDataOffset:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)readDataOfLength:(unsigned long long)arg1 ;
@end

