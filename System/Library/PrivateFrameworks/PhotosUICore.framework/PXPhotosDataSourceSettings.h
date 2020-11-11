/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXPhotosDataSourceSettings : PXSettings {

	BOOL _slowBackgroundFetch;
	double _delayChanges;

}

@property (assign,nonatomic) BOOL slowBackgroundFetch;              //@synthesize slowBackgroundFetch=_slowBackgroundFetch - In the implementation block
@property (assign,nonatomic) double delayChanges;                   //@synthesize delayChanges=_delayChanges - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(BOOL)slowBackgroundFetch;
-(void)setSlowBackgroundFetch:(BOOL)arg1 ;
-(double)delayChanges;
-(void)setDelayChanges:(double)arg1 ;
@end
