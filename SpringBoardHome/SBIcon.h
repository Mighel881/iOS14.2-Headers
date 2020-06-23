//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>
#import <SpringBoardHome/SBHIconCollationSupport-Protocol.h>
#import <SpringBoardHome/SBHUniquelyIdentifiable-Protocol.h>
#import <SpringBoardHome/SBIconIndexNode-Protocol.h>

@class NSArray, NSHashTable, NSString;
@protocol SBIconDelegate;

@interface SBIcon : NSObject <SBHIconCollationSupport, SBHUniquelyIdentifiable, SBIconIndexNode, BSDescriptionProviding, NSCopying>
{
    id _badgeNumberOrString;
    NSHashTable *_observers;
    _Bool _uninstalled;
    id <SBIconDelegate> _delegate;
    NSString *_iconFileSizeDescription;
    unsigned long long _gridSizeClass;
}


// Remaining properties
@property(readonly, copy, nonatomic) NSString *automationID;
@property(readonly, nonatomic) id badgeNumberOrString;
@property(readonly, nonatomic) long long badgeValue;
@property(readonly, nonatomic) _Bool canBeAddedToMultiItemDrag;
@property(readonly, nonatomic) _Bool canBeAddedToSubfolder;
@property(readonly, nonatomic) _Bool canBeReceivedByIcon;
@property(readonly, nonatomic) _Bool canReceiveGrabbedIcon;
@property(readonly, nonatomic) _Bool canTightenLabel;
@property(readonly, nonatomic) _Bool canTruncateLabel;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <SBIconDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSString *folderFallbackTitle;
@property(readonly, copy, nonatomic) NSArray *folderTitleOptions;
@property(nonatomic) unsigned long long gridSizeClass; // @synthesize gridSizeClass=_gridSizeClass;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *iTunesCategoriesOrderedByRelevancy;
@property(readonly, nonatomic) NSString *iconCategoryDescription;
@property(readonly, nonatomic) NSString *iconFileSizeDescription; // @synthesize iconFileSizeDescription=_iconFileSizeDescription;
@property(readonly, nonatomic) long long labelAccessoryType;
@property(readonly, nonatomic, getter=isLaunchDisabledForObscuredReason) _Bool launchDisabledForObscuredReason;
@property(readonly, nonatomic, getter=isLaunchEnabled) _Bool launchEnabled;
@property(readonly, nonatomic, getter=isProgressPaused) _Bool progressPaused;
@property(readonly, nonatomic) double progressPercent;
@property(readonly, nonatomic) long long progressState;
@property(readonly, nonatomic) _Bool shouldAnimateProgress;
@property(readonly, nonatomic) _Bool shouldWarmUp;
@property(readonly) Class superclass;
@property(readonly, nonatomic) unsigned long long supportedGridSizeClasses;
@property(readonly, nonatomic) _Bool supportsStackConfiguration;
@property(readonly, copy, nonatomic) NSArray *tags;
@property(readonly, nonatomic, getter=isTimedOut) _Bool timedOut;
@property(readonly, copy, nonatomic) NSString *uninstallAlertBody;
@property(readonly, copy, nonatomic) NSString *uninstallAlertCancelTitle;
@property(readonly, copy, nonatomic) NSString *uninstallAlertConfirmTitle;
@property(readonly, copy, nonatomic) NSString *uninstallAlertTitle;
@property(readonly, nonatomic, getter=isUninstallSupported) _Bool uninstallSupported;
@property(readonly, nonatomic, getter=isUninstalled) _Bool uninstalled; // @synthesize uninstalled=_uninstalled;
@property(readonly, copy, nonatomic) NSString *uniqueIdentifier;
@end
