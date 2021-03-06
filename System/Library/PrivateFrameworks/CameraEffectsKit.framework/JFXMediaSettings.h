/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/JFXMediaSettingsProvider.h>

@class NSString;

@interface JFXMediaSettings : NSObject <JFXMediaSettingsProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)frameRate;
+(id)sharedInstance;
+(int)timeScale;
+(id)providerDelegate;
+(CGSize)renderSize;
+(void)setProviderDelegate:(id)arg1 ;
+(CGSize)frameSize;
-(int)frameRate;
-(int)timeScale;
-(CGSize)renderSize;
-(CGSize)frameSize;
@end

