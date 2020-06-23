//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTouchTemplateGestureRecognizer.h>

#import <SpringBoard/SBGestureRecognizerPanGestureProviding-Protocol.h>
#import <SpringBoard/SBGestureRecognizerTouchHistoryProviding-Protocol.h>

@class NSString, SBTouchHistory;

@interface SBFluidScrunchGestureRecognizer : SBTouchTemplateGestureRecognizer <SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding>
{
    double _absoluteScale;
    long long _recognizedTouchType;
    double _lastPerimeter;
    SBTouchHistory *_touchHistory;
    struct CGPoint _initialCentroid;
    struct CGPoint _absoluteTranslation;
    struct CGPoint _additionalTranslationDueToChangingAnchorPoints;
}


// Remaining properties
@property(nonatomic) double absoluteScale; // @synthesize absoluteScale=_absoluteScale;
@property(nonatomic) struct CGPoint absoluteTranslation; // @synthesize absoluteTranslation=_absoluteTranslation;
@property(nonatomic) struct CGPoint additionalTranslationDueToChangingAnchorPoints; // @synthesize additionalTranslationDueToChangingAnchorPoints=_additionalTranslationDueToChangingAnchorPoints;
@property(readonly, nonatomic) struct CGPoint centroid;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) struct CGPoint initialCentroid; // @synthesize initialCentroid=_initialCentroid;
@property(nonatomic) double lastPerimeter; // @synthesize lastPerimeter=_lastPerimeter;
@property(readonly, nonatomic) long long recognizedTouchType; // @synthesize recognizedTouchType=_recognizedTouchType;
@property(readonly) Class superclass;
@property(retain, nonatomic) SBTouchHistory *touchHistory; // @synthesize touchHistory=_touchHistory;
@end

