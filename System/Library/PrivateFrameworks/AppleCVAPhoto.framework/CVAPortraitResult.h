/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleCVAPhoto.framework/AppleCVAPhoto
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CVAPortraitResult <NSObject>
@property (readonly) id<CVAMattingResult> mattingResult; 
@property (readonly) CVBufferRef portraitPixelBuffer; 
@property (readonly) float portraitStability; 
@property (readonly) float relightingStability; 
@required
-(CVBufferRef)portraitPixelBuffer;
-(float)portraitStability;
-(id<CVAMattingResult>)mattingResult;
-(float)relightingStability;

@end

