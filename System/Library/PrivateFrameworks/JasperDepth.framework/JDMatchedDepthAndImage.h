/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/JasperDepth.framework/JasperDepth
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class JDTimestampedImage, JDTimestampedPointCloud, NSArray;

@interface JDMatchedDepthAndImage : NSObject {

	JDTimestampedImage* _image;
	JDTimestampedPointCloud* _pointCloud;
	NSArray* _originalPointClouds;

}

@property (nonatomic,retain) JDTimestampedImage * image;                        //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) JDTimestampedPointCloud * pointCloud;              //@synthesize pointCloud=_pointCloud - In the implementation block
@property (nonatomic,retain) NSArray * originalPointClouds;                     //@synthesize originalPointClouds=_originalPointClouds - In the implementation block
-(void)setImage:(JDTimestampedImage *)arg1 ;
-(JDTimestampedImage *)image;
-(JDTimestampedPointCloud *)pointCloud;
-(void)setPointCloud:(JDTimestampedPointCloud *)arg1 ;
-(NSArray *)originalPointClouds;
-(void)setOriginalPointClouds:(NSArray *)arg1 ;
@end

