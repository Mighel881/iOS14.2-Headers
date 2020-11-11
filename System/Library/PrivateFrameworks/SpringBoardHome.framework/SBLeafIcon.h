/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <SpringBoardHome/SBIcon.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol SBLeafIconDataSource;
@class NSString, NSMutableOrderedSet, NSArray;

@interface SBLeafIcon : SBIcon <NSCopying> {

	NSString* _leafIdentifier;
	NSString* _applicationBundleID;
	NSMutableOrderedSet* _dataSources;
	id<SBLeafIconDataSource> _activeDataSource;
	id<SBLeafIconDataSource> _manuallySetDataSource;
	id<SBLeafIconDataSource> _dataSourceAtUninstallation;
	unsigned long long _coalescedDataSourceUpdates;

}

@property (nonatomic,copy,readonly) NSString * sbh_iconLibraryItemIdentifier; 
@property (getter=_bestDataSource,nonatomic,readonly) id<SBLeafIconDataSource> bestDataSource; 
@property (getter=_fallbackBestDataSource,nonatomic,readonly) id<SBLeafIconDataSource> fallbackBestDataSource; 
@property (nonatomic,copy,readonly) NSString * applicationBundleID; 
@property (nonatomic,retain) id<SBLeafIconDataSource> activeDataSource; 
@property (nonatomic,copy,readonly) NSArray * iconDataSources; 
@property (nonatomic,readonly) id<SBLeafIconDataSource> firstIconDataSource; 
@property (nonatomic,readonly) id<SBLeafIconDataSource> lastIconDataSource; 
@property (nonatomic,readonly) unsigned long long iconDataSourceCount; 
+(Class)downloadingIconClass;
+(id)iconImageForDataSource:(id)arg1 ofIcon:(id)arg2 info:(SBIconImageInfo)arg3 ;
+(id)formattedBadgeNumberOrString:(id)arg1 ;
-(id)generateIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(id)nodeIdentifier;
-(id)unmaskedIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isTimedOut;
-(id)init;
-(id<SBLeafIconDataSource>)activeDataSource;
-(unsigned long long)hash;
-(double)progressPercent;
-(long long)progressState;
-(void)setUninstalled;
-(void)completeUninstall;
-(void)insertIconDataSource:(id)arg1 beforeIconDataSource:(id)arg2 ;
-(void)insertIconDataSources:(id)arg1 atIndexes:(id)arg2 ;
-(void)replaceIconDataSource:(id)arg1 withIconDataSource:(id)arg2 ;
-(BOOL)isUninstallSupported;
-(BOOL)hasObserver:(id)arg1 ;
-(void)enumerateObserversUsingBlock:(/*^block*/id)arg1 ;
-(void)addIconDataSources:(id)arg1 ;
-(id)firstIconDataSourcePassingTest:(/*^block*/id)arg1 ;
-(id)iconDataSourcesOfClass:(Class)arg1 ;
-(id)_fallbackBestDataSource;
-(void)didAddIconDataSource:(id)arg1 ;
-(void)didRemoveIconDataSource:(id)arg1 ;
-(id)copyWithLeafIdentifier:(id)arg1 ;
-(void)_noteActiveDataSourceDidChangeAndReloadIcon:(BOOL)arg1 ;
-(BOOL)isProgressPaused;
-(id)_bestDataSource;
-(void)_updateActiveDataSource;
-(void)_noteActiveDataSourceDidChangeNotification:(id)arg1 ;
-(void)_noteActiveDataSourceDidGenerateImageNotification:(id)arg1 ;
-(void)didChangeActiveDataSource:(id)arg1 ;
-(void)_noteDataSourceDidInvalidateNotification:(id)arg1 ;
-(BOOL)canTruncateLabel;
-(BOOL)canTightenLabel;
-(id)accessoryTextForLocation:(id)arg1 ;
-(void)performCoalescedDataSourceUpdate:(/*^block*/id)arg1 ;
-(void)selectNextActiveDataSource;
-(void)removeIconDataSourcesOfClass:(Class)arg1 ;
-(id<SBLeafIconDataSource>)lastIconDataSource;
-(id)firstIconDataSourceOfClass:(Class)arg1 ;
-(id)firstIconDataSourceWithUniqueIdentifier:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)labelAccessoryType;
-(id)genericIconImageWithInfo:(SBIconImageInfo)arg1 ;
-(id)badgeNumberOrString;
-(NSString *)sbh_iconLibraryItemIdentifier;
-(void)addObserver:(id)arg1 ;
-(BOOL)isLeafIcon;
-(id)leafIdentifier;
-(NSArray *)iconDataSources;
-(id)displayNameForLocation:(id)arg1 ;
-(BOOL)isLaunchEnabled;
-(BOOL)isLaunchDisabledForObscuredReason;
-(id)displayNameForObscuredDisabledLaunchForLocation:(id)arg1 ;
-(long long)accessoryTypeForLocation:(id)arg1 ;
-(unsigned long long)supportedGridSizeClasses;
-(void)setActiveDataSource:(id<SBLeafIconDataSource>)arg1 ;
-(void)launchFromLocation:(id)arg1 context:(id)arg2 ;
-(id)initWithLeafIdentifier:(id)arg1 applicationBundleID:(id)arg2 ;
-(void)removeIconDataSource:(id)arg1 ;
-(void)addIconDataSource:(id)arg1 ;
-(NSString *)applicationBundleID;
-(unsigned long long)iconDataSourceCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)supportsRasterization;
-(void)dealloc;
-(id<SBLeafIconDataSource>)firstIconDataSource;
-(BOOL)hasIconDataSource:(id)arg1 ;
@end
