/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSString, NSData, NSArray, VNImageAestheticsObservation, PFCameraMetadata;

@interface _PLIngestJobCameraMetadata : NSObject {

	BOOL _hasDeserializedMetadata;
	NSString* _cameraMetadataPath;
	NSString* _overCaptureMetadataPath;
	CGRect _preferredCropRect;
	CGRect _acceptableCropRect;
	NSData* _sceneprintData;
	NSArray* _junkImageClassificationObservations;
	VNImageAestheticsObservation* _imageAestheticsObservation;
	PFCameraMetadata* _cameraMetadata;
	PFCameraMetadata* _overCaptureCameraMetadata;

}

@property (nonatomic,readonly) PFCameraMetadata * cameraMetadata;                         //@synthesize cameraMetadata=_cameraMetadata - In the implementation block
@property (nonatomic,readonly) PFCameraMetadata * overCaptureCameraMetadata;              //@synthesize overCaptureCameraMetadata=_overCaptureCameraMetadata - In the implementation block
-(id)initWithCameraMetadataPath:(id)arg1 overCaptureMetadataPath:(id)arg2 ;
-(void)_deserializeCameraMetadata;
-(void)applyCameraMetadataToAsset:(id)arg1 ;
-(PFCameraMetadata *)cameraMetadata;
-(void)applyCameraMetadataToSpatialOverCaptureAsset:(id)arg1 ;
-(PFCameraMetadata *)overCaptureCameraMetadata;
@end
