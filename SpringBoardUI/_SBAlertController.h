//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAlertController.h>

#import <SpringBoardUI/BSDescriptionProviding-Protocol.h>

@class NSString, SBAlertItem;
@protocol UIAlertControllerVisualStyleProviding, _SBAlertControllerDelegate;

@interface _SBAlertController : UIAlertController <BSDescriptionProviding>
{
    SBAlertItem *_alertItem;
    id <_SBAlertControllerDelegate> _alertControllerDelegate;
    id <UIAlertControllerVisualStyleProviding> _styleProvider;
}


// Remaining properties
@property(nonatomic) __weak id <_SBAlertControllerDelegate> alertControllerDelegate; // @synthesize alertControllerDelegate=_alertControllerDelegate;
@property(nonatomic) __weak SBAlertItem *alertItem; // @synthesize alertItem=_alertItem;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

