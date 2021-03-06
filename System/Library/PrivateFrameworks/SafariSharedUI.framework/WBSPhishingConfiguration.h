/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariSharedUI/SafariSharedUI-Structs.h>
#import <libobjc.A.dylib/WBSRemotePlistSnapshot.h>

@class NSArray, NSDictionary, NSString;

@interface WBSPhishingConfiguration : NSObject <WBSRemotePlistSnapshot> {

	NSArray* _overrides;
	NSDictionary* _domains;
	NSDictionary* _imageClassifierIdentifiers;
	unsigned long long _imageCropAndScaleOption;
	NSString* _version;
	CGSize _imageInputSize;

}

@property (nonatomic,readonly) unsigned long long imageCropAndScaleOption;              //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
@property (nonatomic,readonly) CGSize imageInputSize;                                   //@synthesize imageInputSize=_imageInputSize - In the implementation block
@property (nonatomic,readonly) NSString * version;                                      //@synthesize version=_version - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)version;
-(id)dictionaryRepresentation;
-(id)initWithPlistData:(id)arg1 error:(id*)arg2 ;
-(id)plistDataWithFormat:(unsigned long long)arg1 ;
-(unsigned long long)imageCropAndScaleOption;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)_parseOverrides:(id)arg1 error:(id*)arg2 ;
-(BOOL)_parseDomains:(id)arg1 error:(id*)arg2 ;
-(BOOL)_parseImageClassifierIdentifiers:(id)arg1 error:(id*)arg2 ;
-(id)_sanitizeURL:(id)arg1 ;
-(unsigned long long)classifyURL:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)classifyURL:(id)arg1 imageClassifierIdentifier:(id)arg2 imageClassifierConfidence:(float)arg3 error:(id*)arg4 ;
-(CGSize)imageInputSize;
@end

