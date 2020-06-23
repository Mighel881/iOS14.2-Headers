//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray, NSString, UIView;
@protocol SBApplicationSceneStatusBarDescribing;

@protocol SBMainDisplaySceneLayoutStatusBarViewDataSource <NSObject>
- (_Bool)allowsConfiguringIndividualStatusBarParts;
- (long long)statusBarOrientation;
- (id <SBApplicationSceneStatusBarDescribing>)statusBarDescriberForStatusBarPart:(NSString *)arg1;
- (NSArray *)statusBarDescribers;

@optional
- (struct CGRect)statusBarAvoidanceFrame;
- (struct CGRect)frameForSceneIdentifier:(NSString *)arg1 inView:(UIView *)arg2;
- (id <SBApplicationSceneStatusBarDescribing>)statusBarDescriberAtPoint:(struct CGPoint)arg1 inView:(UIView *)arg2 pointInSceneLayoutSpace:(struct CGPoint *)arg3;
- (NSArray *)currentlyValidStatusBarPartIdentifiers;
- (NSArray *)statusBarPartsForSceneWithIdentifier:(NSString *)arg1;
@end

