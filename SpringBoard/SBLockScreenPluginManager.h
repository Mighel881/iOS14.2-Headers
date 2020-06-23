//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/PTSettingsKeyObserver-Protocol.h>
#import <SpringBoard/SBLockScreenActionProvider-Protocol.h>
#import <SpringBoard/SBLockScreenPluginAgent-Protocol.h>

@class CSLockScreenTestPluginSettings, NSMutableDictionary, NSString, SBLockScreenPlugin;
@protocol SBLockScreenPluginManagerDelegate;

@interface SBLockScreenPluginManager : NSObject <SBLockScreenPluginAgent, PTSettingsKeyObserver, SBLockScreenActionProvider>
{
    NSMutableDictionary *_plugins;
    SBLockScreenPlugin *_activePlugin;
    SBLockScreenPlugin *_displayedPlugin;
    id <SBLockScreenPluginManagerDelegate> _delegate;
    CSLockScreenTestPluginSettings *_testSettings;
    _Bool _enabled;
}


// Remaining properties
@property(readonly, nonatomic) SBLockScreenPlugin *activePlugin; // @synthesize activePlugin=_activePlugin;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBLockScreenPluginManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SBLockScreenPlugin *displayedPlugin; // @synthesize displayedPlugin=_displayedPlugin;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

