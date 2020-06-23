//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class UIView, UIWindow;

@protocol UIWindowDelegate <NSObject>

@optional
- (void)window:(UIWindow *)arg1 willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(UIWindow *)arg1 willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)window:(UIWindow *)arg1 willAnimateRotationToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (void)getRotationContentSettings:(CDStruct_e950349b *)arg1 forWindow:(UIWindow *)arg2;
- (_Bool)shouldWindowUseOnePartInterfaceRotationAnimation:(UIWindow *)arg1;
- (void)window:(UIWindow *)arg1 didRotateFromInterfaceOrientation:(long long)arg2;
- (void)window:(UIWindow *)arg1 didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg2;
- (void)window:(UIWindow *)arg1 willRotateToInterfaceOrientation:(long long)arg2 duration:(double)arg3;
- (UIView *)rotatingFooterViewForWindow:(UIWindow *)arg1;
- (UIView *)rotatingHeaderViewForWindow:(UIWindow *)arg1;
- (UIView *)rotatingSnapshotViewForWindow:(UIWindow *)arg1;
- (UIView *)rotatingContentViewForWindow:(UIWindow *)arg1;
- (_Bool)window:(UIWindow *)arg1 shouldAutorotateToInterfaceOrientation:(long long)arg2;
- (void)window:(UIWindow *)arg1 willAnimateFromContentFrame:(struct CGRect)arg2 toContentFrame:(struct CGRect)arg3;
@end
