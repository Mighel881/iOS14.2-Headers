//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <SpringBoard/UIPointerInteractionDelegate-Protocol.h>

@class NSString, UIImage, UIImageView, UIView;

@interface SBFluidSwitcherButton : UIControl <UIPointerInteractionDelegate>
{
    UIView *_backgroundView;
    UIImageView *_glyphImageView;
    UIImageView *_xPlusDView;
    UIView *_highlightView;
    UIImage *_image;
    NSString *_backdropGroupName;
    long long _buttonStyle;
    struct UIEdgeInsets _extendedEdgeInsets;
}


// Remaining properties
@property(retain, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct UIEdgeInsets extendedEdgeInsets; // @synthesize extendedEdgeInsets=_extendedEdgeInsets;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(readonly) Class superclass;
@end

