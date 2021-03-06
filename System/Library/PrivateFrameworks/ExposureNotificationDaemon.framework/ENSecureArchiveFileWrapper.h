/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface ENSecureArchiveFileWrapper : NSObject {

	int _fileDescriptor;
	NSString* _path;

}

@property (nonatomic,copy,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
-(void)close;
-(id)initWithPath:(id)arg1 ;
-(BOOL)openWithError:(id*)arg1 ;
-(NSString *)path;
-(BOOL)readObject:(id*)arg1 ofClass:(Class)arg2 error:(id*)arg3 ;
-(BOOL)saveObject:(id)arg1 error:(id*)arg2 ;
-(BOOL)_writeObject:(id)arg1 toFileDescriptor:(int)arg2 error:(id*)arg3 ;
@end

