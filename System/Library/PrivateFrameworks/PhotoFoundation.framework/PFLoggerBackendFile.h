/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoFoundation/PhotoFoundation-Structs.h>
#import <PhotoFoundation/PFLoggerBackendAdapter.h>

@class NSDateFormatter, NSFileHandle;

@interface PFLoggerBackendFile : PFLoggerBackendAdapter {

	NSDateFormatter* _dateFormatter;
	BOOL _shouldCloseFileHandle;
	BOOL _isStandardErrorFileBackend;
	NSFileHandle* _fileHandle;

}

@property (retain) NSFileHandle * fileHandle;                    //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign) BOOL shouldCloseFileHandle;                   //@synthesize shouldCloseFileHandle=_shouldCloseFileHandle - In the implementation block
@property (assign) BOOL isStandardErrorFileBackend;              //@synthesize isStandardErrorFileBackend=_isStandardErrorFileBackend - In the implementation block
+(id)standardErrorFileBackend;
+(id)backendsFromUserDefaultsWithLogLevel:(int)arg1 ;
-(id)initWithLogFileURL:(id)arg1 ;
-(id)writeOpenFileAtURL:(id)arg1 ;
-(BOOL)shouldCloseFileHandle;
-(void)setShouldCloseFileHandle:(BOOL)arg1 ;
-(BOOL)isStandardErrorFileBackend;
-(void)setIsStandardErrorFileBackend:(BOOL)arg1 ;
-(id)initWithFileHandle:(id)arg1 ;
-(NSFileHandle *)fileHandle;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(void)logFromCodeLocation:(SCD_Struct_PF5*)arg1 facility:(id)arg2 subsystem:(id)arg3 level:(int)arg4 message:(id)arg5 format:(id)arg6 args:(char*)arg7 ;
-(BOOL)outputsToDebuggerConsole;
-(void)dealloc;
@end
