//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/NSCopying-Protocol.h>
#import <SpringBoard/SBActivationSettings-Protocol.h>
#import <SpringBoard/SBDeactivationSettings-Protocol.h>
#import <SpringBoard/SBLayoutElementDescriptor-Protocol.h>

@class NSString, SBActivationSettings, SBDeactivationSettings;

@interface SBWorkspaceEntity : NSObject <NSCopying, SBActivationSettings, SBDeactivationSettings, BSDescriptionProviding, SBLayoutElementDescriptor>
{
    NSString *_identifier;
    long long _layoutRole;
    SBActivationSettings *_activationSettings;
    SBDeactivationSettings *_deactivationSettings;
    long long __mainDisplayPreferredInterfaceOrientation;
}


// Remaining properties
@property(nonatomic, getter=_mainDisplayPreferredInterfaceOrientation, setter=_setMainDisplayPreferredInterfaceOrientation:) long long _mainDisplayPreferredInterfaceOrientation; // @synthesize _mainDisplayPreferredInterfaceOrientation=__mainDisplayPreferredInterfaceOrientation;
@property(readonly, nonatomic) SBActivationSettings *activationSettings; // @synthesize activationSettings=_activationSettings;
@property(readonly, nonatomic) SBDeactivationSettings *deactivationSettings; // @synthesize deactivationSettings=_deactivationSettings;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) CDUnknownBlockType entityGenerator;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isEmptyWorkspaceEntity;
@property(readonly, nonatomic) _Bool isHomeScreenEntity;
@property(readonly, nonatomic) _Bool isPreviousWorkspaceEntity;
@property(readonly, nonatomic) unsigned long long layoutAttributes;
@property(nonatomic) long long layoutRole; // @synthesize layoutRole=_layoutRole;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long supportedLayoutRoles;
@property(readonly, nonatomic) _Bool supportsPresentationAtAnySize;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property(readonly, nonatomic) Class viewControllerClass;
@property(readonly, nonatomic) _Bool wantsExclusiveForeground;
@end

