//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class BSTransaction;

@protocol BSTransactionObserver <NSObject>

@optional
- (void)transactionDidComplete:(BSTransaction *)arg1;
- (void)transactionDidFinishWork:(BSTransaction *)arg1;
- (void)transactionDidBegin:(BSTransaction *)arg1;
- (void)transactionWillBegin:(BSTransaction *)arg1;
@end

