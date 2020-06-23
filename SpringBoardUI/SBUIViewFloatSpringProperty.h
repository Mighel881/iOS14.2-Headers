//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewFloatAnimatableProperty.h>

#import <SpringBoardUI/UIViewSpringAnimationBehaviorDescribing-Protocol.h>

@interface SBUIViewFloatSpringProperty : UIViewFloatAnimatableProperty <UIViewSpringAnimationBehaviorDescribing>
{
    double _dampingRatio;
    double _response;
    double _impulse;
    double _trackingDampingRatio;
    double _trackingResponse;
    double _trackingImpulse;
    _Bool _tracking;
}


// Remaining properties
@property(nonatomic) double input;
@property(nonatomic) double output;
@property(nonatomic) _Bool tracking; // @synthesize tracking=_tracking;
@end
