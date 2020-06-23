//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray, NSString, NSURL, SBHRecentsDocumentExtensionProvider, SBIconView, SBSApplicationShortcutItem, UIView, UIViewController, _UIContextMenuStyle;
@protocol SBHWidgetContextMenuControlling;

@protocol SBIconViewShortcutsDelegate <NSObject>

@optional
- (id <SBHWidgetContextMenuControlling>)widgetContextMenuControllerForIconView:(SBIconView *)arg1;
- (void)iconView:(SBIconView *)arg1 willUseContextMenuStyle:(_UIContextMenuStyle *)arg2;
- (UIView *)containerViewForPresentingContextMenuForIconView:(SBIconView *)arg1;
- (UIViewController *)widgetViewControllerForIconView:(SBIconView *)arg1;
- (SBHRecentsDocumentExtensionProvider *)recentDocumentExtensionProviderForIconView:(SBIconView *)arg1;
- (_Bool)iconView:(SBIconView *)arg1 shouldActivateApplicationShortcutItem:(SBSApplicationShortcutItem *)arg2 atIndex:(unsigned long long)arg3;
- (NSString *)applicationShortcutWidgetBundleIdentifierForShortcutsWithIconView:(SBIconView *)arg1;
- (NSURL *)applicationBundleURLForShortcutsWithIconView:(SBIconView *)arg1;
- (NSArray *)iconView:(SBIconView *)arg1 applicationShortcutItemsWithProposedItems:(NSArray *)arg2;
- (void)iconViewShortcutsPresentationDidCancel:(SBIconView *)arg1;
- (void)iconViewShortcutsPresentationDidFinish:(SBIconView *)arg1;
- (void)iconViewShortcutsPresentationWillBegin:(SBIconView *)arg1;
- (_Bool)iconViewShouldBeginShortcutsPresentation:(SBIconView *)arg1;
@end

