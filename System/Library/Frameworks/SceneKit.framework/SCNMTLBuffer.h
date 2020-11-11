/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MTLBuffer;
@interface SCNMTLBuffer : NSObject {

	long long _usedCount;
	id<MTLBuffer> _buffer;
	unsigned long long _offset;
	id _dataSource;

}

@property (assign) long long usedCount;                              //@synthesize usedCount=_usedCount - In the implementation block
@property (nonatomic,retain) id<MTLBuffer> buffer;                   //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) void* contents; 
@property (assign,nonatomic) id dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
-(void)setBuffer:(id<MTLBuffer>)arg1 ;
-(id<MTLBuffer>)buffer;
-(void*)contents;
-(unsigned long long)offset;
-(void)setDataSource:(id)arg1 ;
-(id)dataSource;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)dealloc;
-(long long)usedCount;
-(void)setUsedCount:(long long)arg1 ;
-(long long)decrementUsedCount;
-(void)incrementUsedCount;
@end
