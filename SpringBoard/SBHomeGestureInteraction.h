//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBSystemGestureRecognizerDelegate-Protocol.h>
#import <SpringBoard/SBTouchTemplateGestureRecognizerDelegate-Protocol.h>
#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>

@class NSSet, NSString, SBFluidScrunchGestureRecognizer, SBHomeGesturePanGestureRecognizer, SBIndirectPanGestureRecognizer, SBSystemGestureManager, UIGestureRecognizer;
@protocol SBHomeGestureInteractionDelegate;

@interface SBHomeGestureInteraction : NSObject <UIGestureRecognizerDelegate, SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate>
{
    _Bool _enabled;
    long long _recognizedGestureType;
    SBHomeGesturePanGestureRecognizer *_screenEdgePanGestureRecognizer;
    SBIndirectPanGestureRecognizer *_indirectPanGestureRecognizer;
    SBFluidScrunchGestureRecognizer *_scrunchGestureRecognizer;
    id <SBHomeGestureInteractionDelegate> _delegate;
    SBSystemGestureManager *_gestureManager;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBHomeGestureInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) SBSystemGestureManager *gestureManager; // @synthesize gestureManager=_gestureManager;
@property(readonly, nonatomic) NSSet *gestureRecognizers;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) SBIndirectPanGestureRecognizer *indirectPanGestureRecognizer; // @synthesize indirectPanGestureRecognizer=_indirectPanGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *recognizedGestureRecognizer;
@property(nonatomic) long long recognizedGestureType; // @synthesize recognizedGestureType=_recognizedGestureType;
@property(retain, nonatomic) SBHomeGesturePanGestureRecognizer *screenEdgePanGestureRecognizer; // @synthesize screenEdgePanGestureRecognizer=_screenEdgePanGestureRecognizer;
@property(retain, nonatomic) SBFluidScrunchGestureRecognizer *scrunchGestureRecognizer; // @synthesize scrunchGestureRecognizer=_scrunchGestureRecognizer;
@property(readonly) Class superclass;
@end

