//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UISheetAnimationController.h>

@class SBHAddWidgetSheetGalleryCollectionViewCell, SBHPortaledShadowedWidgetView, UIView;

@interface SBHWidgetAddSheetAnimationController : _UISheetAnimationController
{
    SBHAddWidgetSheetGalleryCollectionViewCell *_sourceCell;
    SBHPortaledShadowedWidgetView *_portaledShadowedWidgetView;
    UIView *_matchMoveView;
    struct CGPoint _fromPoint;
}


// Remaining properties
@property(nonatomic) struct CGPoint fromPoint; // @synthesize fromPoint=_fromPoint;
@property(retain, nonatomic) UIView *matchMoveView; // @synthesize matchMoveView=_matchMoveView;
@property(retain, nonatomic) SBHPortaledShadowedWidgetView *portaledShadowedWidgetView; // @synthesize portaledShadowedWidgetView=_portaledShadowedWidgetView;
@property(retain, nonatomic) SBHAddWidgetSheetGalleryCollectionViewCell *sourceCell; // @synthesize sourceCell=_sourceCell;
@end

