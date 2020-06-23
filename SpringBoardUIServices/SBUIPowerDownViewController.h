//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/SBUIPowerDownViewControllerInterface-Protocol.h>
#import <SpringBoardUIServices/SBUIPowerDownViewDelegate-Protocol.h>

@class NSString;
@protocol SBUIPowerDownViewControllerDelegate;

@interface SBUIPowerDownViewController : UIViewController <SBUIPowerDownViewDelegate, SBUIPowerDownViewControllerInterface>
{
    id <SBUIPowerDownViewControllerDelegate> powerDownDelegate;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <SBUIPowerDownViewControllerDelegate> powerDownDelegate; // @synthesize powerDownDelegate;
@property(readonly) Class superclass;
@end

