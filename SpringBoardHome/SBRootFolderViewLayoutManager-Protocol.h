//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class SBRootFolderView;
@protocol UIViewImplicitlyAnimating;

@protocol SBRootFolderViewLayoutManager <NSObject>
@property(nonatomic) __weak SBRootFolderView *rootFolderView;
- (void)transitionToActive:(_Bool)arg1 usingAnimator:(id <UIViewImplicitlyAnimating>)arg2;
- (void)layoutSubviews;
@end

