//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBSwitcherModifierEventResponse.h>

@class SBAppLayout;

@interface SBIconOverlayVisibilitySwitcherEventResponse : SBSwitcherModifierEventResponse
{
    _Bool _visible;
    SBAppLayout *_appLayout;
}


// Remaining properties
@property(readonly, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
@property(readonly, nonatomic, getter=isVisible) _Bool visible; // @synthesize visible=_visible;
@end
