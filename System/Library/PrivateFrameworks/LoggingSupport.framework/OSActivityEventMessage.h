/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LoggingSupport/OSActivityEvent.h>

@class NSData, NSMutableArray, NSString;

@interface OSActivityEventMessage : OSActivityEvent {

	NSData* _bufferPrivateData;
	NSData* _bufferData;

}

@property (nonatomic,readonly) NSMutableArray * arguments; 
@property (copy,readonly) NSString * format; 
-(NSString *)format;
-(NSMutableArray *)arguments;
-(void)fillEventData:(const char*)arg1 length:(unsigned long long)arg2 privateBuffer:(const char*)arg3 length:(unsigned long long)arg4 ;
@end
