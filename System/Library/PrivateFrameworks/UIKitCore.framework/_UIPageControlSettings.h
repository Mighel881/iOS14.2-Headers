/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PrototypeTools/PTSettings.h>

@class _UIPageControlIndicatorSettings, _UIPageControlPlatterSettings;

@interface _UIPageControlSettings : PTSettings {

	_UIPageControlIndicatorSettings* _indicatorSettings;
	_UIPageControlPlatterSettings* _platterSettings;

}

@property (nonatomic,retain) _UIPageControlIndicatorSettings * indicatorSettings;              //@synthesize indicatorSettings=_indicatorSettings - In the implementation block
@property (nonatomic,retain) _UIPageControlPlatterSettings * platterSettings;                  //@synthesize platterSettings=_platterSettings - In the implementation block
+(id)settingsControllerModule;
-(void)setPlatterSettings:(_UIPageControlPlatterSettings *)arg1 ;
-(_UIPageControlPlatterSettings *)platterSettings;
-(_UIPageControlIndicatorSettings *)indicatorSettings;
-(void)setIndicatorSettings:(_UIPageControlIndicatorSettings *)arg1 ;
@end

