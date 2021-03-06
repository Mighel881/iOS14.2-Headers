/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class JFXEffectsPreviewGenerationRequest, JFXEffectsPreviewGeneratorJob;

@interface JFXEffectsPreviewRequestHandler : NSObject {

	JFXEffectsPreviewGenerationRequest* _req;
	JFXEffectsPreviewGeneratorJob* _job;

}

@property (nonatomic,retain) JFXEffectsPreviewGenerationRequest * req;              //@synthesize req=_req - In the implementation block
@property (nonatomic,retain) JFXEffectsPreviewGeneratorJob * job;                   //@synthesize job=_job - In the implementation block
-(JFXEffectsPreviewGenerationRequest *)req;
-(JFXEffectsPreviewGeneratorJob *)job;
-(id)initWithRequest:(id)arg1 ;
-(void)setReq:(JFXEffectsPreviewGenerationRequest *)arg1 ;
-(void)setJob:(JFXEffectsPreviewGeneratorJob *)arg1 ;
-(id)buildPVRenderRequest;
-(id)buildCallbackMap:(id)arg1 ;
@end

