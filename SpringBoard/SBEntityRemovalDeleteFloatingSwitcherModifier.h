//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTransitionSwitcherModifier.h>

@class SBAppLayout;

@interface SBEntityRemovalDeleteFloatingSwitcherModifier : SBTransitionSwitcherModifier
{
    SBAppLayout *_fromAppLayout;
    SBAppLayout *_toAppLayout;
    long long _floatingConfiguration;
    _Bool _blursFromAppLayout;
}


// Remaining properties
@property(nonatomic) _Bool blursFromAppLayout; // @synthesize blursFromAppLayout=_blursFromAppLayout;
@end

