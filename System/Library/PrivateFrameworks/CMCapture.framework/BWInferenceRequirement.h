/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWInferenceProvider;
@class BWInferenceConfiguration;

@interface BWInferenceRequirement : NSObject {

	id<BWInferenceProvider> _provider;
	BWInferenceConfiguration* _configuration;

}

@property (nonatomic,readonly) id<BWInferenceProvider> provider;                      //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BWInferenceConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(id)initWithProvider:(id)arg1 configuration:(id)arg2 ;
-(id<BWInferenceProvider>)provider;
-(BWInferenceConfiguration *)configuration;
-(void)dealloc;
@end

