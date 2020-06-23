//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBDeviceApplicationSceneHandleObserver-Protocol.h>

@class NSString, SBDeviceApplicationSceneHandle, UIApplicationSceneClientSettingsDiffInspector;

@interface SBNubView : UIView <SBDeviceApplicationSceneHandleObserver>
{
    UIApplicationSceneClientSettingsDiffInspector *_applicationSceneClientSettingsDiffInspector;
    _Bool _highlighted;
    SBDeviceApplicationSceneHandle *_deviceApplicationSceneHandle;
    UIView *_nubView;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SBDeviceApplicationSceneHandle *deviceApplicationSceneHandle; // @synthesize deviceApplicationSceneHandle=_deviceApplicationSceneHandle;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(readonly, nonatomic) UIView *nubView; // @synthesize nubView=_nubView;
@property(readonly) Class superclass;
@end

