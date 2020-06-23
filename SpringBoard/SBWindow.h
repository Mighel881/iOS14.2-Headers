//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/SBFWindow.h>

#import <SpringBoard/SBMainDisplayInterfaceOrientationSource-Protocol.h>
#import <SpringBoard/SBRecycledViewsContainerProviding-Protocol.h>
#import <SpringBoard/SBWindowLayoutStrategyObserving-Protocol.h>

@class NSMutableSet, NSString, SBRecycledViewsContainer, SBUICoronaAnimationController, UIView;
@protocol SBWindowLayoutStrategy;

@interface SBWindow : SBFWindow <SBMainDisplayInterfaceOrientationSource, SBRecycledViewsContainerProviding, SBWindowLayoutStrategyObserving>
{
    SBUICoronaAnimationController *_coronaAnimationController;
    SBRecycledViewsContainer *_recycledViewsContainerView;
    _Bool _requestedHiddenValue;
    NSMutableSet *_additionalHiddenReasons;
    id <SBWindowLayoutStrategy> _layoutStrategy;
}


// Remaining properties
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) long long activeInterfaceOrientation;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) id <SBWindowLayoutStrategy> layoutStrategy; // @synthesize layoutStrategy=_layoutStrategy;
@property(readonly, copy, nonatomic) NSString *orientationSourceDescription;
@property(readonly, nonatomic) double orientationSourceLevel;
@property(readonly, nonatomic) UIView *recycledViewsContainer;
@property(readonly) Class superclass;
@end

