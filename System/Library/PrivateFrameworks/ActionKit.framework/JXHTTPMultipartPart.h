/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ActionKit/ActionKit-Structs.h>
@class NSString, NSData;

@interface JXHTTPMultipartPart : NSObject {

	int _multipartType;
	NSString* _key;
	NSData* _preData;
	NSData* _contentData;
	NSData* _postData;

}

@property (assign,nonatomic) int multipartType;                 //@synthesize multipartType=_multipartType - In the implementation block
@property (nonatomic,retain) NSString * key;                    //@synthesize key=_key - In the implementation block
@property (nonatomic,retain) NSData * preData;                  //@synthesize preData=_preData - In the implementation block
@property (nonatomic,retain) NSData * contentData;              //@synthesize contentData=_contentData - In the implementation block
@property (nonatomic,retain) NSData * postData;                 //@synthesize postData=_postData - In the implementation block
+(id)withMultipartType:(int)arg1 key:(id)arg2 data:(id)arg3 contentType:(id)arg4 fileName:(id)arg5 boundary:(id)arg6 ;
-(id)filePath;
-(NSData *)postData;
-(void)setPostData:(NSData *)arg1 ;
-(long long)dataLength;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(long long)contentLength;
-(NSData *)preData;
-(NSData *)contentData;
-(void)setContentData:(NSData *)arg1 ;
-(unsigned long long)loadMutableData:(id)arg1 withDataInRange:(NSRange)arg2 ;
-(int)multipartType;
-(void)setMultipartType:(int)arg1 ;
-(void)setPreData:(NSData *)arg1 ;
@end

