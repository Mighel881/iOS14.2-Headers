//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBTransientOverlayTransitionContextProviding-Protocol.h>

@class NSMutableArray, NSString;

@interface SBTransientOverlayDefaultTransitionContextProvider : NSObject <SBTransientOverlayTransitionContextProviding>
{
    _Bool _didPerformAlongsideTransitions;
    _Bool _isCompleted;
    NSMutableArray *_transitionBlocks;
    NSMutableArray *_transitionCompletionBlocks;
    _Bool _transitionCompletedSuccessfully;
    _Bool animated;
}


// Remaining properties
@property(nonatomic, getter=isAnimated) _Bool animated; // @synthesize animated;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
