/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface PathObject : NSObject {

	int _len;
	char* _path;

}

@property (readonly) char* path;              //@synthesize path=_path - In the implementation block
@property (readonly) int len;                 //@synthesize len=_len - In the implementation block
+(id)pathObjectWithPath:(const char*)arg1 component:(const char*)arg2 ;
-(int)len;
-(id)description;
-(char*)path;
-(void)dealloc;
-(id)initWithPath:(const char*)arg1 component:(const char*)arg2 ;
@end
