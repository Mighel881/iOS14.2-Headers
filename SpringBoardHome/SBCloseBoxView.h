//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBHomeScreenButton.h>

#import <SpringBoardHome/UIPointerInteractionDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer;
@protocol SBCloseBoxViewDelegate, SBIconListLayout;

@interface SBCloseBoxView : SBHomeScreenButton <UIPointerInteractionDelegate>
{
    UITapGestureRecognizer *_actionTapGestureRecognizer;
    id <SBCloseBoxViewDelegate> _delegate;
    id <SBIconListLayout> _listLayout;
}


// Remaining properties
@property(retain, nonatomic) UITapGestureRecognizer *actionTapGestureRecognizer; // @synthesize actionTapGestureRecognizer=_actionTapGestureRecognizer;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBCloseBoxViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct UIEdgeInsets hitTestPadding;
@property(retain, nonatomic) id <SBIconListLayout> listLayout; // @synthesize listLayout=_listLayout;
@property(readonly) Class superclass;
@end
