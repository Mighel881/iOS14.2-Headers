/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <JasperDepth/JasperDepth-Structs.h>
@class JDCameraCalibrationData;

@interface JDDepthAndImageProcessor : NSObject {

	TimeSync* _sync;
	BOOL _pointCloudFiltering;
	BOOL _retainImagesRemovedFromQueue;
	JDCameraCalibrationData* _imageCalibrationData;

}

@property (nonatomic,retain) JDCameraCalibrationData * imageCalibrationData;              //@synthesize imageCalibrationData=_imageCalibrationData - In the implementation block
@property (assign) int numberOfPointCloudsPerImage; 
@property (assign) BOOL pointCloudFiltering;                                              //@synthesize pointCloudFiltering=_pointCloudFiltering - In the implementation block
@property (assign) BOOL retainImagesRemovedFromQueue;                                     //@synthesize retainImagesRemovedFromQueue=_retainImagesRemovedFromQueue - In the implementation block
-(int)numberOfPointCloudsPerImage;
-(void)setNumberOfPointCloudsPerImage:(int)arg1 ;
-(id)initWithImageCameraCalibration:(id)arg1 ;
-(id)pushPointCloud:(id)arg1 ;
-(id)pushImage:(id)arg1 ;
-(id)checkSyncResults:(PushResults*)arg1 ;
-(id)purgeAllQueuedImages;
-(JDCameraCalibrationData *)imageCalibrationData;
-(void)setImageCalibrationData:(JDCameraCalibrationData *)arg1 ;
-(BOOL)pointCloudFiltering;
-(void)setPointCloudFiltering:(BOOL)arg1 ;
-(BOOL)retainImagesRemovedFromQueue;
-(void)setRetainImagesRemovedFromQueue:(BOOL)arg1 ;
@end

