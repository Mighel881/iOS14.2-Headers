/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMCaptureCommand.h>

@class CAMCaptureGraphConfiguration, NSError;

@interface CAMModeAndDeviceCommand : CAMCaptureCommand {

	int __requestID;
	CAMCaptureGraphConfiguration* __desiredGraphConfiguration;
	CAMCaptureGraphConfiguration* __resolvedGraphConfiguration;
	double __minimumExecutionTime;
	NSError* __configurationError;

}

@property (nonatomic,readonly) CAMCaptureGraphConfiguration * _desiredGraphConfiguration;                                                    //@synthesize _desiredGraphConfiguration=__desiredGraphConfiguration - In the implementation block
@property (setter=_setResolvedGraphConfiguration:,nonatomic,retain) CAMCaptureGraphConfiguration * _resolvedGraphConfiguration;              //@synthesize _resolvedGraphConfiguration=__resolvedGraphConfiguration - In the implementation block
@property (nonatomic,readonly) double _minimumExecutionTime;                                                                                 //@synthesize _minimumExecutionTime=__minimumExecutionTime - In the implementation block
@property (nonatomic,readonly) int _requestID;                                                                                               //@synthesize _requestID=__requestID - In the implementation block
@property (setter=_setConfigurationError:,nonatomic,retain) NSError * _configurationError;                                                   //@synthesize _configurationError=__configurationError - In the implementation block
-(int)_requestID;
-(void)_sanitizeDeviceUsingContext:(id)arg1 ;
-(id)userInfo;
-(void)executeWithContext:(id)arg1 ;
-(double)_minimumExecutionTime;
-(void)_performPostConfigurationSanityCheckForGraphConfiguration:(id)arg1 withContext:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_shouldEnableLivePhotoCaptureForMode:(long long)arg1 device:(long long)arg2 ;
-(id)_specificEncodingBehaviorCommandForGraphConfiguration:(id)arg1 ;
-(NSError *)_configurationError;
-(void)_performPostConfigurationSetupForGraphConfiguration:(id)arg1 withContext:(id)arg2 ;
-(id)_desiredInputsWithContext:(id)arg1 ;
-(void)_setResolvedGraphConfiguration:(id)arg1 ;
-(double)sessionModificationMinimumExecutionTime;
-(BOOL)_wantsQuadraHighResolutionForMode:(long long)arg1 device:(long long)arg2 ;
-(id)_specificFramerateCommandForGraphConfiguration:(id)arg1 withContext:(id)arg2 ;
-(id)_specificPreparePhotoSettingsCommandForGraphConfiguration:(id)arg1 ;
-(BOOL)requiresSessionModification;
-(CAMCaptureGraphConfiguration *)_resolvedGraphConfiguration;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)_isStillImageMode:(long long)arg1 ;
-(void)_setConfigurationError:(id)arg1 ;
-(BOOL)_shouldEnableDeferredProcessingForMode:(long long)arg1 ;
-(BOOL)_wantsLivePhotoMetadataInVideosForMode:(long long)arg1 device:(long long)arg2 ;
-(BOOL)_wantsLowLightBoostForMode:(long long)arg1 device:(long long)arg2 ;
-(id)sessionModificationLogReason;
-(id)_desiredOutputsWithContext:(id)arg1 shouldUseThumbnailOutputForFilters:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithGraphConfiguration:(id)arg1 minimumExecutionTime:(double)arg2 requestID:(int)arg3 ;
-(id)_existingOutputsWithContext:(id)arg1 without:(id)arg2 ;
-(id)_existingInputsWithContext:(id)arg1 without:(id)arg2 ;
-(CAMCaptureGraphConfiguration *)_desiredGraphConfiguration;
@end

