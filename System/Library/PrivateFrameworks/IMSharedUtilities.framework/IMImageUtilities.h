/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <IMSharedUtilities/IMSharedUtilities-Structs.h>
@interface IMImageUtilities : NSObject
+(CGImageRef)newThumbnailForTargetSize:(CGSize)arg1 imageSize:(CGSize)arg2 imageSource:(CGImageSourceRef)arg3 atIndex:(unsigned long long)arg4 mode:(long long)arg5 scale:(double)arg6 ;
+(CGSize)imageSourcePxSize:(CGImageSourceRef)arg1 ;
+(CGImageRef)newThumbnailForTargetSize:(CGSize)arg1 imageSize:(CGSize)arg2 imageSource:(CGImageSourceRef)arg3 mode:(long long)arg4 scale:(double)arg5 ;
+(CGSize)imageRefPxSize:(CGImageRef)arg1 ;
+(double)scaleFactorForThumbnailWithSize:(CGSize)arg1 constraints:(IMPreviewConstraints)arg2 targetPxSize:(CGSize)arg3 shouldScaleUpPreview:(BOOL)arg4 maxUpScale:(double)arg5 ;
+(BOOL)persistPreviewToDiskCache:(CGImageRef)arg1 previewURL:(id)arg2 error:(id*)arg3 ;
+(void)sampleImageEdges:(char*)arg1 usingRect:(CGRect)arg2 forMostlyWhitePixels:(unsigned long long*)arg3 otherPixels:(unsigned long long*)arg4 bytesPerRow:(long long)arg5 ;
+(BOOL)persistCPBitmapWithImage:(CGImageRef)arg1 url:(id)arg2 ;
@end

