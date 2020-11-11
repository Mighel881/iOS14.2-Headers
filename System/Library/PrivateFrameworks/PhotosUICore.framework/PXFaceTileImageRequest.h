/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@class PHFace, NSString, PHObject, PHAsset, NSDate;

@interface PXFaceTileImageRequest : NSObject {

	BOOL _fullResMissing;
	BOOL _canceled;
	int _requestID;
	int _imageManagerRequestID;
	PHFace* _face;
	NSString* _cacheKey;
	PHObject* _originalRequestObject;
	PHAsset* _assetContainingFace;
	NSDate* _ppt_requestStartDate;
	CGSize _lastDeliveredSize;
	CGRect _normalizedFaceCropRect;
	CGRect _normalizedActualFaceRect;
	PXFaceTileImageParams _params;

}

@property (nonatomic,retain) PHFace * face;                                 //@synthesize face=_face - In the implementation block
@property (nonatomic,readonly) int requestID;                               //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,readonly) NSString * cacheKey;                         //@synthesize cacheKey=_cacheKey - In the implementation block
@property (nonatomic,readonly) PXFaceTileImageParams params;                //@synthesize params=_params - In the implementation block
@property (assign) int imageManagerRequestID;                               //@synthesize imageManagerRequestID=_imageManagerRequestID - In the implementation block
@property (assign,nonatomic) CGRect normalizedFaceCropRect;                 //@synthesize normalizedFaceCropRect=_normalizedFaceCropRect - In the implementation block
@property (assign,nonatomic) CGRect normalizedActualFaceRect;               //@synthesize normalizedActualFaceRect=_normalizedActualFaceRect - In the implementation block
@property (assign,nonatomic) CGSize lastDeliveredSize;                      //@synthesize lastDeliveredSize=_lastDeliveredSize - In the implementation block
@property (nonatomic,retain) PHObject * originalRequestObject;              //@synthesize originalRequestObject=_originalRequestObject - In the implementation block
@property (nonatomic,retain) PHAsset * assetContainingFace;                 //@synthesize assetContainingFace=_assetContainingFace - In the implementation block
@property (assign) BOOL fullResMissing;                                     //@synthesize fullResMissing=_fullResMissing - In the implementation block
@property (assign) BOOL canceled;                                           //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,copy) NSDate * ppt_requestStartDate;                   //@synthesize ppt_requestStartDate=_ppt_requestStartDate - In the implementation block
-(PHFace *)face;
-(void)setNormalizedActualFaceRect:(CGRect)arg1 ;
-(CGSize)lastDeliveredSize;
-(BOOL)canceled;
-(NSString *)cacheKey;
-(void)setCanceled:(BOOL)arg1 ;
-(void)setLastDeliveredSize:(CGSize)arg1 ;
-(PXFaceTileImageParams)params;
-(void)setImageManagerRequestID:(int)arg1 ;
-(void)setFace:(PHFace *)arg1 ;
-(BOOL)fullResMissing;
-(void)setPpt_requestStartDate:(NSDate *)arg1 ;
-(CGRect)normalizedActualFaceRect;
-(PHAsset *)assetContainingFace;
-(NSDate *)ppt_requestStartDate;
-(int)requestID;
-(PHObject *)originalRequestObject;
-(void)setOriginalRequestObject:(PHObject *)arg1 ;
-(void)setFullResMissing:(BOOL)arg1 ;
-(int)imageManagerRequestID;
-(id)initWithFace:(id)arg1 cacheKey:(id)arg2 params:(PXFaceTileImageParams)arg3 ;
-(CGRect)normalizedFaceCropRect;
-(void)ppt_reportMeasurementsForImageQuality:(long long)arg1 ;
-(void)setAssetContainingFace:(PHAsset *)arg1 ;
-(void)cancel;
-(void)setNormalizedFaceCropRect:(CGRect)arg1 ;
@end
