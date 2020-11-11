/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/ControlCenter/Bundles/FlashlightModule.bundle/FlashlightModule
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ControlCenterUIKit/CCUISliderModuleBackgroundViewController.h>
#import <libobjc.A.dylib/SBUIFlashlightObserver.h>

@class NSString;

@interface CCUIFlashlightBackgroundViewController : CCUISliderModuleBackgroundViewController <SBUIFlashlightObserver>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)flashlightLevelDidChange:(unsigned long long)arg1 ;
-(void)flashlightAvailabilityDidChange:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_updateGlyphForFlashlightLevel:(unsigned long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)_canShowWhileLocked;
@end
