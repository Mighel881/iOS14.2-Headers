//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol SBRootFolderPageStateTransitioning;

@protocol SBRootFolderPageStateObserver
- (void)rootFolderPageStateProvider:(id <SBRootFolderPageStateTransitioning>)arg1 didEndTransitionFromState:(long long)arg2 toState:(long long)arg3 successfully:(_Bool)arg4;
- (void)rootFolderPageStateProvider:(id <SBRootFolderPageStateTransitioning>)arg1 willEndTransitionToState:(long long)arg2 successfully:(_Bool)arg3;
- (void)rootFolderPageStateProvider:(id <SBRootFolderPageStateTransitioning>)arg1 didContinueTransitionToState:(long long)arg2 progress:(double)arg3;
- (void)rootFolderPageStateProvider:(id <SBRootFolderPageStateTransitioning>)arg1 willBeginTransitionToState:(long long)arg2 animated:(_Bool)arg3 interactive:(_Bool)arg4;
@end

