/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DialogEngine/DialogEngine-Structs.h>
#import <libobjc.A.dylib/DEWriter.h>

@class NSData;

@interface DEVersionWriter : NSObject <DEWriter> {

	NSData* _version;
	CC_SHA256state_st _context;

}

@property (assign,nonatomic) CC_SHA256state_st context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSData * version;                       //@synthesize version=_version - In the implementation block
+(id)versionData:(id)arg1 ;
+(id)dataWithHexString:(id)arg1 ;
+(id)versionString:(id)arg1 ;
+(id)versionToString:(id)arg1 ;
+(BOOL)prepareDirsFor:(id)arg1 ;
+(id)versionFile:(id)arg1 ;
+(id)getURLFor:(id)arg1 version:(id)arg2 base:(id)arg3 ;
-(void)close;
-(void)setVersion:(NSData *)arg1 ;
-(id)init;
-(NSData *)version;
-(CC_SHA256state_st)context;
-(void)setContext:(CC_SHA256state_st)arg1 ;
-(void)writeData:(id)arg1 ;
@end
