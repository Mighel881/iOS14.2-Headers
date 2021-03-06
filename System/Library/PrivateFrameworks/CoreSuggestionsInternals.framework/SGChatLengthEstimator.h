/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
@class NSMutableData, NSString;

@interface SGChatLengthEstimator : NSObject {

	int _fd;
	NSMutableData* _backingData;
	unsigned short* _countPtr;
	char* _sketch;
	opaque_pthread_mutex_t _lock;
	NSString* _path;

}

@property (readonly) NSString * path;                       //@synthesize path=_path - In the implementation block
@property (readonly) unsigned long long count; 
+(id)sharedInstance;
+(void)setSharedInstance:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)init;
-(id)initInMemory;
-(unsigned long long)count;
-(NSString *)path;
-(void)dealloc;
-(void)recordMessageInChat:(id)arg1 ;
-(unsigned long long)estimateMessagesInChat:(id)arg1 ;
@end

