//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoard/UITableViewDataSource-Protocol.h>
#import <SpringBoard/UITableViewDelegate-Protocol.h>

@class NSString, SBSwitcherModifierStackSnapshot, UITableView, _SBModifierTimelineTextViewController;

@interface _SBModifierTimelineModifierDetailViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView *_tableView;
    _SBModifierTimelineTextViewController *_textViewController;
    SBSwitcherModifierStackSnapshot *_stackSnapshot;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBSwitcherModifierStackSnapshot *stackSnapshot; // @synthesize stackSnapshot=_stackSnapshot;
@property(readonly) Class superclass;
@end

