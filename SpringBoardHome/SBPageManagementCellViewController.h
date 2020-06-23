//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardHome/SBIconViewCustomImageViewControlling-Protocol.h>
#import <SpringBoardHome/UIGestureRecognizerDelegate-Protocol.h>

@class MTMaterialView, NSString, SBFolder, SBIcon, SBIconListView, UIGestureRecognizer, UIView;
@protocol SBPageManagementCellViewControllerDelegate;

@interface SBPageManagementCellViewController : UIViewController <UIGestureRecognizerDelegate, SBIconViewCustomImageViewControlling>
{
    struct SBPageManagementCellMetrics _metrics;
    _Bool _showsSquareCorners;
    _Bool _editing;
    SBIconListView *_listView;
    MTMaterialView *_listBackgroundView;
    MTMaterialView *_toggleButtonBackgroundView;
    SBFolder *_folder;
    id <SBPageManagementCellViewControllerDelegate> _delegate;
    UIGestureRecognizer *_tapGestureRecognizer;
    struct SBIconImageInfo _iconImageInfo;
}


// Remaining properties
@property(nonatomic, getter=isBackgroundBlurEnabled) _Bool backgroundBlurEnabled;
@property(copy, nonatomic) CDUnknownBlockType backgroundViewProvider;
@property(nonatomic) double brightness;
@property(readonly, nonatomic) double continuousCornerRadius;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBPageManagementCellViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(nonatomic, getter=isDropping) _Bool dropping;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(readonly, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SBIcon *icon;
@property(nonatomic) struct SBIconImageInfo iconImageInfo; // @synthesize iconImageInfo=_iconImageInfo;
@property(nonatomic) unsigned long long imageViewAlignment;
@property(readonly, nonatomic) MTMaterialView *listBackgroundView; // @synthesize listBackgroundView=_listBackgroundView;
@property(readonly, nonatomic) UIView *listDimmingView;
@property(readonly, nonatomic) SBIconListView *listView; // @synthesize listView=_listView;
@property(nonatomic, getter=isOverlapping) _Bool overlapping;
@property(nonatomic) unsigned long long pauseReasons;
@property(nonatomic, getter=isPrivateModeEnabled) _Bool privateModeEnabled;
@property(nonatomic) _Bool scalesListView;
@property(nonatomic, getter=isShowingContextMenu) _Bool showingContextMenu;
@property(nonatomic) _Bool showsSquareCorners; // @synthesize showsSquareCorners=_showsSquareCorners;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(readonly, nonatomic) MTMaterialView *toggleButtonBackgroundView; // @synthesize toggleButtonBackgroundView=_toggleButtonBackgroundView;
@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;
@property(readonly, nonatomic) struct CGRect visibleBounds;
@property(nonatomic) _Bool visiblySettled;
@property(readonly, nonatomic) _Bool wantsLabelHidden;
@end

