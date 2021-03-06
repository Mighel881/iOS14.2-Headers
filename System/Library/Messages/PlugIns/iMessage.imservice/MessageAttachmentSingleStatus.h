/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSError, NSString;

@interface MessageAttachmentSingleStatus : NSObject {

	NSError* _transferError;
	NSString* _additionalErrorInfo;
	NSString* _errorURLString;
	long long _errorFileSize;

}

@property (retain) NSError * transferError;                     //@synthesize transferError=_transferError - In the implementation block
@property (retain) NSString * additionalErrorInfo;              //@synthesize additionalErrorInfo=_additionalErrorInfo - In the implementation block
@property (retain) NSString * errorURLString;                   //@synthesize errorURLString=_errorURLString - In the implementation block
@property (assign) long long errorFileSize;                     //@synthesize errorFileSize=_errorFileSize - In the implementation block
-(NSError *)transferError;
-(void)setTransferError:(NSError *)arg1 ;
-(NSString *)additionalErrorInfo;
-(void)setAdditionalErrorInfo:(NSString *)arg1 ;
-(NSString *)errorURLString;
-(void)setErrorURLString:(NSString *)arg1 ;
-(long long)errorFileSize;
-(void)setErrorFileSize:(long long)arg1 ;
@end

