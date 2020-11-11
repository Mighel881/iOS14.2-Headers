/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SBHCrossfadeZoomSettings.h>

@class SBFAnimationSettings;

@interface SBHCrossfadeAppTransitionSettings : SBHCrossfadeZoomSettings {

	SBFAnimationSettings* _appSnapshotCornerRadiusSettings;

}

@property (nonatomic,retain) SBFAnimationSettings * appSnapshotCornerRadiusSettings;              //@synthesize appSnapshotCornerRadiusSettings=_appSnapshotCornerRadiusSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(SBFAnimationSettings *)appSnapshotCornerRadiusSettings;
-(void)setAppSnapshotCornerRadiusSettings:(SBFAnimationSettings *)arg1 ;
@end
