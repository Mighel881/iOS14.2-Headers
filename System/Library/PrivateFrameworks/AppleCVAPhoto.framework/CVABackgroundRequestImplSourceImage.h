/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AppleCVAPhoto/AppleCVAPhoto-Structs.h>
#import <libobjc.A.dylib/CVABackgroundRequest.h>

@class NSString;

@interface CVABackgroundRequestImplSourceImage : NSObject <CVABackgroundRequest> {

	CVBufferRef _sourceColorPixelBuffer;

}

@property (assign) CVBufferRef sourceColorPixelBuffer;              //@synthesize sourceColorPixelBuffer=_sourceColorPixelBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(CVBufferRef)sourceColorPixelBuffer;
-(void)setSourceColorPixelBuffer:(CVBufferRef)arg1 ;
@end

