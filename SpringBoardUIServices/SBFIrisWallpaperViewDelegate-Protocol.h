//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class UIGestureRecognizer;
@protocol SBFIrisWallpaperView;

@protocol SBFIrisWallpaperViewDelegate <NSObject>

@optional
- (void)irisWallpaperView:(id <SBFIrisWallpaperView>)arg1 didReplaceGestureRecognizer:(UIGestureRecognizer *)arg2 withGestureRecognizer:(UIGestureRecognizer *)arg3;
- (void)irisWallpaperViewIsInteractingDidChange:(id <SBFIrisWallpaperView>)arg1;
- (void)irisWallpaperViewPlaybackStateDidChange:(id <SBFIrisWallpaperView>)arg1;
@end
