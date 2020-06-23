//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/NSObject-Protocol.h>

@class NSArray, NSString, SBHAppLibraryVisualConfiguration, SBHClockIconVisualConfiguration, SBHFloatyFolderVisualConfiguration, SBHFolderIconVisualConfiguration, SBHIconAccessoryVisualConfiguration, SBHIconLabelVisualConfiguration, SBHRootFolderVisualConfiguration, SBHSidebarVisualConfiguration, SBIconListModel, UIFont;

@protocol SBIconListLayout <NSObject>
@property(readonly, nonatomic) struct SBIconImageInfo iconImageInfo;
- (struct UIEdgeInsets)layoutInsetsForOrientation:(long long)arg1;
- (unsigned long long)numberOfRowsForOrientation:(long long)arg1;
- (unsigned long long)numberOfColumnsForOrientation:(long long)arg1;

@optional
@property(readonly, nonatomic) _Bool usesAlternateLayout;
@property(readonly, nonatomic) unsigned long long supportedIconGridSizeClasses;
@property(readonly, nonatomic) struct SBHIconGridSizeClassSizes iconGridSizeClassSizes;
@property(readonly, copy, nonatomic) SBHRootFolderVisualConfiguration *rootFolderVisualConfiguration;
@property(readonly, copy, nonatomic) SBHAppLibraryVisualConfiguration *appLibraryVisualConfiguration;
@property(readonly, copy, nonatomic) SBHSidebarVisualConfiguration *sidebarVisualConfiguration;
@property(readonly, copy, nonatomic) SBHFloatyFolderVisualConfiguration *floatyFolderVisualConfiguration;
@property(readonly, copy, nonatomic) SBHClockIconVisualConfiguration *clockIconVisualConfiguration;
@property(readonly, copy, nonatomic) SBHFolderIconVisualConfiguration *folderIconVisualConfiguration;
@property(readonly, copy, nonatomic) SBHIconAccessoryVisualConfiguration *iconAccessoryVisualConfiguration;
- (void)noteIcons:(NSArray *)arg1 didDropAtCoordinate:(struct SBIconCoordinate)arg2 inList:(SBIconListModel *)arg3;
- (UIFont *)accessoryFontForContentSizeCategory:(NSString *)arg1 options:(unsigned long long)arg2;
- (SBHIconLabelVisualConfiguration *)labelVisualConfigurationForContentSizeCategory:(NSString *)arg1 options:(unsigned long long)arg2;
- (UIFont *)labelFontForContentSizeCategory:(NSString *)arg1 options:(unsigned long long)arg2;
- (struct CGSize)iconSpacingForOrientation:(long long)arg1;
- (struct SBIconImageInfo)iconImageInfoForGridSizeClass:(unsigned long long)arg1;
@end

