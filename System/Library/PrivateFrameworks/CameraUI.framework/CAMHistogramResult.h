/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CAMMetadataObjectResult.h>

@class NSString, AVMetadataVideoPreviewHistogramObject, AVMetadataObject;

@interface CAMHistogramResult : NSObject <CAMMetadataObjectResult> {

	NSString* _uniqueIdentifier;
	double _shadowClipping;
	double _highlightClipping;
	AVMetadataVideoPreviewHistogramObject* __metadataHistogramObject;

}

@property (nonatomic,retain) AVMetadataVideoPreviewHistogramObject * _metadataHistogramObject;              //@synthesize _metadataHistogramObject=__metadataHistogramObject - In the implementation block
@property (nonatomic,readonly) double shadowClipping;                                                       //@synthesize shadowClipping=_shadowClipping - In the implementation block
@property (nonatomic,readonly) double highlightClipping;                                                    //@synthesize highlightClipping=_highlightClipping - In the implementation block
@property (nonatomic,copy,readonly) NSString * metadataType; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                                            //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,readonly) AVMetadataObject * underlyingMetadataObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)metadataType;
-(NSString *)uniqueIdentifier;
-(double)shadowClipping;
-(double)highlightClipping;
-(AVMetadataObject *)underlyingMetadataObject;
-(AVMetadataVideoPreviewHistogramObject *)_metadataHistogramObject;
-(id)initWithHistogramObject:(id)arg1 forDeviceFormat:(id)arg2 ;
-(void)set_metadataHistogramObject:(AVMetadataVideoPreviewHistogramObject *)arg1 ;
@end
