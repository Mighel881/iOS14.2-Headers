/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError, NSData, NSMutableData;

@interface CBReadRequest : NSObject {

	char* _bufferPtr;
	NSError* _error;
	unsigned long long _length;
	/*^block*/id _completion;
	NSData* _data;
	unsigned long long _minLength;
	unsigned long long _maxLength;
	NSMutableData* _bufferData;

}

@property (nonatomic,retain) NSMutableData * bufferData;                //@synthesize bufferData=_bufferData - In the implementation block
@property (nonatomic,retain) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id completion;                               //@synthesize completion=_completion - In the implementation block
@property (nonatomic,readonly) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long length;               //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) unsigned long long minLength;              //@synthesize minLength=_minLength - In the implementation block
@property (assign,nonatomic) unsigned long long maxLength;              //@synthesize maxLength=_maxLength - In the implementation block
-(void)setData:(NSData *)arg1 ;
-(void)setMaxLength:(unsigned long long)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(NSError *)error;
-(unsigned long long)length;
-(id)completion;
-(unsigned long long)maxLength;
-(NSData *)data;
-(unsigned long long)minLength;
-(NSMutableData *)bufferData;
-(void)setBufferData:(NSMutableData *)arg1 ;
-(void)setMinLength:(unsigned long long)arg1 ;
@end
