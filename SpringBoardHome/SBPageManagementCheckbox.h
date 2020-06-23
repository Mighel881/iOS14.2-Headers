//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer, UIImageView, UIView;

@interface SBPageManagementCheckbox : UIButton
{
    CALayer *_deselectedMask;
    double _checkboxDiameter;
    UIView *_backgroundView;
    UIView *_highlightView;
    UIImageView *_customImageView;
}


// Remaining properties
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) double checkboxDiameter; // @synthesize checkboxDiameter=_checkboxDiameter;
@property(readonly, nonatomic) UIImageView *customImageView; // @synthesize customImageView=_customImageView;
@property(readonly, nonatomic) CALayer *deselectedMask;
@property(readonly, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@end
