/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSArray;

@interface OSLogEventBacktrace : NSObject {

	NSArray* _frames;

}

@property (nonatomic,readonly) NSArray * frames;              //@synthesize frames=_frames - In the implementation block
-(NSArray *)frames;
-(id)initWithFrames:(id)arg1 ;
-(id)initWithBacktrace:(os_log_backtrace_s*)arg1 ;
-(id)initWithSingleFrame:(id)arg1 ;
-(void)dealloc;
@end
