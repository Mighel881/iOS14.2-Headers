/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/AccessibilityBundles/PhotosUIFramework.axbundle/PhotosUIFramework
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AXMVisionEngine, AXMImageNode, AXMFaceDetectorNode;

@interface AXPhotosVisionEngine : NSObject {

	AXMVisionEngine* _engine;
	AXMImageNode* _imageNode;
	AXMFaceDetectorNode* _faceNode;

}

@property (nonatomic,retain) AXMVisionEngine * engine;                    //@synthesize engine=_engine - In the implementation block
@property (nonatomic,retain) AXMImageNode * imageNode;                    //@synthesize imageNode=_imageNode - In the implementation block
@property (nonatomic,retain) AXMFaceDetectorNode * faceNode;              //@synthesize faceNode=_faceNode - In the implementation block
+(id)sharedEngine;
-(void)setEngine:(AXMVisionEngine *)arg1 ;
-(AXMVisionEngine *)engine;
-(id)init;
-(AXMImageNode *)imageNode;
-(void)setImageNode:(AXMImageNode *)arg1 ;
-(void)setFaceNode:(AXMFaceDetectorNode *)arg1 ;
-(void)analyzeImage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(AXMFaceDetectorNode *)faceNode;
@end
