//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@class SBIconLabelImageParameters;

@interface SBIconLabelImage : UIImage
{
    SBIconLabelImageParameters *_parameters;
    struct UIEdgeInsets _alignmentRectInsets;
    double _baselineOffsetFromBottom;
    UIImage *_legibilityImage;
}


// Remaining properties
@property(retain, nonatomic) UIImage *legibilityImage; // @synthesize legibilityImage=_legibilityImage;
@property(readonly, copy, nonatomic) SBIconLabelImageParameters *parameters; // @synthesize parameters=_parameters;
@end

