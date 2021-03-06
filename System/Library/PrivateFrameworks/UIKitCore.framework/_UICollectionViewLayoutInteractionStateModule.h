/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UICollectionViewLayoutInteractionStateProviding.h>

@protocol _UICollectionViewLayoutInteractionStateModuleHost;
@class NSMutableSet, NSMutableDictionary, UICollectionViewLayout, NSString;

@interface _UICollectionViewLayoutInteractionStateModule : NSObject <_UICollectionViewLayoutInteractionStateProviding> {

	NSMutableSet* _indexPathsWithBackgroundFillForInteraction;
	NSMutableDictionary* _postProcessingCellsMap;
	Class _invalidationContextClass;
	UICollectionViewLayout*<_UICollectionViewLayoutInteractionStateModuleHost> _host;

}

@property (assign,nonatomic,__weak) UICollectionViewLayout*<_UICollectionViewLayoutInteractionStateModuleHost> host;              //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) Class invalidationContextClass;                                                                    //@synthesize invalidationContextClass=_invalidationContextClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setHost:(UICollectionViewLayout*<_UICollectionViewLayoutInteractionStateModuleHost>)arg1 ;
-(UICollectionViewLayout*<_UICollectionViewLayoutInteractionStateModuleHost>)host;
-(void)performPreferredAttributesPostProcessingBlock:(/*^block*/id)arg1 withLayoutAttributes:(id)arg2 forView:(id)arg3 ;
-(BOOL)_itemIsSelectedOrHighlightedAndHasBackgroundFillForGroupingAtIndexPath:(id)arg1 cellGroupingPreference:(out long long*)arg2 backgroundIsInset:(out BOOL*)arg3 ;
-(id)initWithHost:(id)arg1 ;
-(void)_noteCellWillBeginPostProcessing:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)itemAtIndexPathIsHighlighted:(id)arg1 ;
-(void)_noteCellDidFinishPostProcessingAtIndexPath:(id)arg1 ;
-(unsigned long long)selectionGroupingForItemAtIndexPath:(id)arg1 ;
-(BOOL)_shouldAdjustLayoutToMergeBarInSection:(long long)arg1 ;
-(BOOL)enumerateSectionsAfterSectionIndex:(long long)arg1 enumerator:(/*^block*/id)arg2 ;
-(BOOL)itemAtIndexPathIsSelected:(id)arg1 ;
-(Class)invalidationContextClass;
-(void)processLayoutInvalidationWithContext:(id)arg1 ;
-(id)_cellForItemAtIndexPath:(id)arg1 ;
@end

