//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBVoiceControlTransientOverlayViewControllerDelegate-Protocol.h>

@class NSArray, NSString, SBVoiceControlTransientOverlayViewController, SiriLongPressButtonSource;
@protocol SiriAssertion;

@interface SBVoiceControlController : NSObject <SBVoiceControlTransientOverlayViewControllerDelegate>
{
    _Bool _delayedAssistantActivationPending;
    _Bool _headsetDownDelayedActionPerformed;
    NSArray *_nextRecognitionAudioInputPaths;
    SBVoiceControlTransientOverlayViewController *_transientOverlayViewController;
    SiriLongPressButtonSource *_siriHeadsetDeviceSource;
    id <SiriAssertion> _siriPreheatAssertion;
}


// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

