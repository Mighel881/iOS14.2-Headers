/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Preferences/PSListController.h>

@interface MCUIMISDenylistSettingsDetailController : PSListController {

	BOOL _reenabled;

}

@property (assign) BOOL reenabled;              //@synthesize reenabled=_reenabled - In the implementation block
-(id)specifiers;
-(id)init;
-(BOOL)overridden;
-(void)setOverride:(id)arg1 ;
-(void)dealloc;
-(void)_reloadAsync;
-(void)_askForReenableConfirmation;
-(id)_reenableButtonSpecifier;
-(BOOL)reenabled;
-(void)setReenabled:(BOOL)arg1 ;
@end

