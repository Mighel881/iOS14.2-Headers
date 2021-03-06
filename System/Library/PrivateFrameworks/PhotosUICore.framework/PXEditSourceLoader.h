/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSProgress, PLEditSource, PICompositionController, NSString, NSError, NSNumber;


@protocol PXEditSourceLoader <NSObject>
@property (nonatomic,readonly) NSProgress * progress; 
@property (nonatomic,readonly) PLEditSource * editSource; 
@property (nonatomic,readonly) PLEditSource * overcaptureEditSource; 
@property (nonatomic,readonly) PLEditSource * activeEditSource; 
@property (nonatomic,copy,readonly) PICompositionController * compositionController; 
@property (nonatomic,copy,readonly) PICompositionController * originalCompositionController; 
@property (nonatomic,copy,readonly) NSString * livePhotoPairingIdentifier; 
@property (nonatomic,readonly) long long baseVersion; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,copy,readonly) NSString * contentIdentifier; 
@property (nonatomic,readonly) NSNumber * loadDuration; 
@required
-(long long)baseVersion;
-(NSError *)error;
-(NSString *)contentIdentifier;
-(PLEditSource *)activeEditSource;
-(PICompositionController *)originalCompositionController;
-(NSNumber *)loadDuration;
-(NSProgress *)progress;
-(PICompositionController *)compositionController;
-(PLEditSource *)editSource;
-(PLEditSource *)overcaptureEditSource;
-(NSString *)livePhotoPairingIdentifier;
-(void)beginLoading;

@end

