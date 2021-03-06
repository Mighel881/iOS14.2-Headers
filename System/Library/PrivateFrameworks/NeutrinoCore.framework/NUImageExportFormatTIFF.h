/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUImageExportFormat.h>

@interface NUImageExportFormatTIFF : NUImageExportFormat {

	BOOL _preserveAlpha;
	long long _pixelType;
	long long _compression;

}

@property (assign) long long pixelType;                //@synthesize pixelType=_pixelType - In the implementation block
@property (assign) long long compression;              //@synthesize compression=_compression - In the implementation block
@property (assign) BOOL preserveAlpha;                 //@synthesize preserveAlpha=_preserveAlpha - In the implementation block
-(id)init;
-(long long)pixelType;
-(long long)compression;
-(void)setCompression:(long long)arg1 ;
-(id)fileType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)depth;
-(int)renderFormat;
-(void)addImageDestinationOptionsToImageProperties:(id)arg1 ;
-(BOOL)preserveAlpha;
-(void)setPreserveAlpha:(BOOL)arg1 ;
-(void)setPixelType:(long long)arg1 ;
@end

