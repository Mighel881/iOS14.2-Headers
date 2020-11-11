/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@class NSURL, NSString;

@interface IMImageSource : NSObject {

	CGImageSourceRef _imageSourceRef;
	NSURL* _fileURL;

}

@property (nonatomic,readonly) BOOL fileExists; 
@property (nonatomic,readonly) CGImageSourceRef imageSourceRef;              //@synthesize imageSourceRef=_imageSourceRef - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                              //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSString * filePath; 
-(NSString *)filePath;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(CGImageSourceRef)imageSourceRef;
-(BOOL)fileExists;
-(void)dealloc;
@end
