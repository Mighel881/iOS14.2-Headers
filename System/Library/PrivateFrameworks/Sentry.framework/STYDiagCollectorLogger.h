/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Sentry.framework/Sentry
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class NSObject;

@interface STYDiagCollectorLogger : NSObject {

	NSObject*<OS_os_log> _logHandle;

}

@property (retain) NSObject*<OS_os_log> logHandle;              //@synthesize logHandle=_logHandle - In the implementation block
+(id)sharedLogger;
-(void)setLogHandle:(NSObject*<OS_os_log>)arg1 ;
-(NSObject*<OS_os_log>)logHandle;
@end
