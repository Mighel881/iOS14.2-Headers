/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SBLockScreenPluginAgent.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBLockScreenActionProvider.h>

@protocol SBLockScreenPluginManagerDelegate;
@class NSMutableDictionary, SBLockScreenPlugin, CSLockScreenTestPluginSettings, NSString;

@interface SBLockScreenPluginManager : NSObject <SBLockScreenPluginAgent, PTSettingsKeyObserver, SBLockScreenActionProvider> {

	NSMutableDictionary* _plugins;
	SBLockScreenPlugin* _activePlugin;
	SBLockScreenPlugin* _displayedPlugin;
	id<SBLockScreenPluginManagerDelegate> _delegate;
	CSLockScreenTestPluginSettings* _testSettings;
	BOOL _enabled;

}

@property (nonatomic,readonly) SBLockScreenPlugin * activePlugin;                                //@synthesize activePlugin=_activePlugin - In the implementation block
@property (nonatomic,readonly) SBLockScreenPlugin * displayedPlugin;                             //@synthesize displayedPlugin=_displayedPlugin - In the implementation block
@property (assign,nonatomic,__weak) id<SBLockScreenPluginManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(BOOL)handleEvent:(long long)arg1 ;
-(id)init;
-(id)lockScreenActionContext;
-(id<SBLockScreenPluginManagerDelegate>)delegate;
-(BOOL)enableLockScreenPluginWithContext:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)deactivatePluginController:(id)arg1 ;
-(BOOL)_loadLockScreenPluginWithContext:(id)arg1 ;
-(BOOL)disableLockScreenPluginWithContext:(id)arg1 ;
-(void)_refreshLockScreenPlugin;
-(void)activatePluginController:(id)arg1 ;
-(void)setDelegate:(id<SBLockScreenPluginManagerDelegate>)arg1 ;
-(NSString *)description;
-(SBLockScreenPlugin *)activePlugin;
-(BOOL)pluginController:(id)arg1 sendAction:(id)arg2 ;
-(void)pluginController:(id)arg1 updateAppearance:(id)arg2 ;
-(id)_highestPriorityPluginIgnoringViewDisplay:(BOOL)arg1 ;
-(void)_handleUIRelock;
-(void)_setActivePlugin:(id)arg1 displayedPlugin:(id)arg2 ;
-(BOOL)isEnabled;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)_pluginForPluginController:(id)arg1 ;
-(SBLockScreenPlugin *)displayedPlugin;
-(BOOL)_handlePluginDisabled:(id)arg1 withContext:(id)arg2 ;
-(id)succinctDescriptionBuilder;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(BOOL)_sendEventToPlugin:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

