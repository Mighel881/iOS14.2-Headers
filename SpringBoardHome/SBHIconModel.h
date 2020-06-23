//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBFolderObserver-Protocol.h>
#import <SpringBoardHome/SBIconDelegate-Protocol.h>
#import <SpringBoardHome/SBIconObserver-Protocol.h>

@class NSDictionary, NSHashTable, NSMutableDictionary, NSMutableSet, NSOrderedSet, NSSet, NSString, NSTimer, SBIcon, SBRootFolder;
@protocol SBHIconModelDelegate, SBIconModelStore;

@interface SBHIconModel : NSObject <SBFolderObserver, SBIconObserver, SBIconDelegate>
{
    NSMutableDictionary *_leafIconsByIdentifier;
    NSMutableDictionary *_widgetIconsByIdentifier;
    NSHashTable *_folders;
    NSMutableSet *_autosaveDisableAssertions;
    NSSet *_hiddenIconTags;
    NSSet *_visibleIconTags;
    _Bool _tagsHaveBeenSet;
    NSMutableDictionary *_alternateListLayouts;
    _Bool _ignoresIconsNotInIconState;
    _Bool _sortsIconsAlphabetically;
    _Bool _iconStateDirty;
    _Bool _layingOut;
    _Bool _restoring;
    _Bool _allowsDownloadingIcons;
    id <SBIconModelStore> _store;
    id <SBHIconModelDelegate> _delegate;
    SBRootFolder *_rootFolder;
    NSDictionary *_desiredIconState;
    NSSet *_archivedLeafIdentifiers;
    NSOrderedSet *_desiredIconStateFlattened;
    SBIcon *_rootFolderIcon;
    NSTimer *_autosaveTimer;
}


// Remaining properties
@property(nonatomic) _Bool allowsDownloadingIcons; // @synthesize allowsDownloadingIcons=_allowsDownloadingIcons;
@property(copy, nonatomic) NSSet *archivedLeafIdentifiers; // @synthesize archivedLeafIdentifiers=_archivedLeafIdentifiers;
@property(retain, nonatomic) NSTimer *autosaveTimer; // @synthesize autosaveTimer=_autosaveTimer;
@property(readonly, copy, nonatomic) NSSet *currentLeafIdentifiers;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy, nonatomic) NSDictionary *defaultIconState;
@property(nonatomic) __weak id <SBHIconModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSDictionary *desiredIconState; // @synthesize desiredIconState=_desiredIconState;
@property(copy, nonatomic) NSOrderedSet *desiredIconStateFlattened; // @synthesize desiredIconStateFlattened=_desiredIconStateFlattened;
@property(readonly, copy, nonatomic) NSSet *firstPageLeafIdentifiers;
@property(readonly, nonatomic) struct SBHIconGridSizeClassSizes gridSizeClassSizes;
@property(readonly, nonatomic) _Bool hasDesiredIconState;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSSet *hiddenIconTags; // @synthesize hiddenIconTags=_hiddenIconTags;
@property(nonatomic, getter=isIconStateDirty) _Bool iconStateDirty; // @synthesize iconStateDirty=_iconStateDirty;
@property(nonatomic) _Bool ignoresIconsNotInIconState; // @synthesize ignoresIconsNotInIconState=_ignoresIconsNotInIconState;
@property(nonatomic, getter=isLayingOut) _Bool layingOut; // @synthesize layingOut=_layingOut;
@property(readonly, copy, nonatomic) NSSet *leafIconIdentifiers;
@property(readonly, copy, nonatomic) NSSet *leafIcons;
@property(readonly, copy, nonatomic) NSString *localizedDefaultFolderName;
@property(readonly, nonatomic) unsigned long long maxIconCountForDock;
@property(readonly, nonatomic) unsigned long long maxListCountForFolders;
@property(readonly, copy, nonatomic) NSSet *missingDesiredIconIdentifiers;
@property(nonatomic, getter=isRestoring) _Bool restoring; // @synthesize restoring=_restoring;
@property(readonly, nonatomic) SBRootFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
@property(retain, nonatomic) SBIcon *rootFolderIcon; // @synthesize rootFolderIcon=_rootFolderIcon;
@property(nonatomic) _Bool sortsIconsAlphabetically; // @synthesize sortsIconsAlphabetically=_sortsIconsAlphabetically;
@property(retain, nonatomic) id <SBIconModelStore> store; // @synthesize store=_store;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsDock;
@property(readonly, copy, nonatomic) NSString *unlocalizedDefaultFolderName;
@property(readonly, copy, nonatomic) NSSet *visibleIconIdentifiers;
@property(readonly, copy, nonatomic) NSSet *visibleIconTags; // @synthesize visibleIconTags=_visibleIconTags;
@end

