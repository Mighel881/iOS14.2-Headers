//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBTapToWakeController;

@protocol SBTapToWakeDelegate <NSObject>
- (void)tapToWakeControllerDidRecognizePencilWakeGesture:(SBTapToWakeController *)arg1;
- (void)tapToWakeControllerDidRecognizeWakeGesture:(SBTapToWakeController *)arg1;
@end

