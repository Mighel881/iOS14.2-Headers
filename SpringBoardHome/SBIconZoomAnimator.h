//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBIconAnimator.h>

#import <SpringBoardHome/SBIconIndexNodeObserver-Protocol.h>

@class NSMapTable, NSSet, NSString, SBHIconModel, SBHIconZoomSettings, SBIconListModel, SBIconListView;
@protocol SBIconZoomAnimationContaining;

@interface SBIconZoomAnimator : SBIconAnimator <SBIconIndexNodeObserver>
{
    NSMapTable *_listIconToViewMap;
    NSMapTable *_dockIconToViewMap;
    NSSet *_criticalIconNodeIdentifiers;
    SBIconListModel *_iconListModel;
    SBHIconModel *_iconModel;
    double _startTime;
    SBIconListView *_iconListView;
    SBIconListView *_dockListView;
}


// Remaining properties
@property(readonly, nonatomic) id <SBIconZoomAnimationContaining> animationContainer; // @dynamic animationContainer;
@property(retain, nonatomic) NSSet *criticalIconNodeIdentifiers; // @synthesize criticalIconNodeIdentifiers=_criticalIconNodeIdentifiers;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) SBIconListView *dockListView; // @synthesize dockListView=_dockListView;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SBIconListView *iconListView; // @synthesize iconListView=_iconListView;
@property(retain, nonatomic) SBHIconZoomSettings *settings; // @dynamic settings;
@property(readonly, nonatomic) double startTime;
@property(readonly) Class superclass;
@end

