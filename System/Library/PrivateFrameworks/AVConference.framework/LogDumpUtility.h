/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface LogDumpUtility : NSObject
+(void)removeOldFilesInDefaultLogDumpPath;
+(id)getCachesDirectoryPath;
+(BOOL)createDirectory:(id)arg1 ;
+(id)logFilename:(int)arg1 dumpID:(id)arg2 logNameType:(int)arg3 prefix:(id)arg4 suffix:(id)arg5 ;
+(id)filesSortedByTimestamp:(id)arg1 ;
+(void)removeFilesInDirectory:(id)arg1 olderThan:(id)arg2 ;
+(id)getDefaultLogDumpPath;
@end

