//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class BKOperation;

@protocol BKOperationDelegate <NSObject>

@optional
- (void)operation:(BKOperation *)arg1 presenceStateChanged:(_Bool)arg2;
- (void)operation:(BKOperation *)arg1 stateChanged:(long long)arg2;
- (void)operation:(BKOperation *)arg1 finishedWithReason:(long long)arg2;
@end

