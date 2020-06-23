//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBAbstractDefaults.h>

@class SBBiometricKitDefaults, SBExternalDemoDefaults, SBExternalDuetDefaults, SBExternalGlobalDefaults, SBExternalNotesDefaults, SBExternalPhoneDefaults, SBExternalSettingsDefaults, SBExternalSetupDefaults, SBExternalSoundsDefaults, SBExternalWifiDefaults;

@interface SBExternalDefaults : SBAbstractDefaults
{
    SBExternalGlobalDefaults *_lazy_globalDefaults;
    SBExternalDuetDefaults *_lazy_duetDefaults;
    SBExternalDemoDefaults *_lazy_demoDefaults;
    SBExternalSetupDefaults *_lazy_setupDefaults;
    SBExternalSettingsDefaults *_lazy_settingsDefaults;
    SBExternalPhoneDefaults *_lazy_phoneDefaults;
    SBExternalWifiDefaults *_lazy_networkDefaults;
    SBExternalSoundsDefaults *_lazy_soundDefaults;
    SBExternalNotesDefaults *_lazy_notesDefaults;
    SBBiometricKitDefaults *_lazy_biometricKitDefaults;
}


// Remaining properties
@property(readonly, retain, nonatomic) SBBiometricKitDefaults *biometricKitDefaults;
@property(readonly, retain, nonatomic) SBExternalDemoDefaults *demoDefaults;
@property(readonly, retain, nonatomic) SBExternalDuetDefaults *duetDefaults;
@property(readonly, retain, nonatomic) SBExternalGlobalDefaults *globalDefaults;
@property(readonly, retain, nonatomic) SBExternalWifiDefaults *networkDefaults;
@property(readonly, retain, nonatomic) SBExternalNotesDefaults *notesDefaults;
@property(readonly, retain, nonatomic) SBExternalPhoneDefaults *phoneDefaults;
@property(readonly, retain, nonatomic) SBExternalSettingsDefaults *settingsDefaults;
@property(readonly, retain, nonatomic) SBExternalSetupDefaults *setupDefaults;
@property(readonly, retain, nonatomic) SBExternalSoundsDefaults *soundDefaults;
@end

