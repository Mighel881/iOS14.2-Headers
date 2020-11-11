/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXDataSection.h>

@class NSIndexSet, NSArray, NSNumber, NSDictionary, PXCollectionsDataSection;

@interface PXNavigationListDataSection : PXDataSection {

	NSIndexSet* _dataSubsectionIndexes;
	NSArray* _dataSubsections;
	NSNumber* _countNumber;
	BOOL _skipAssetCountFetches;
	long long _indentationLevel;
	NSDictionary* _childDataSections;
	NSDictionary* _childIndexHints;
	PXCollectionsDataSection* _collectionsDataSection;
	NSArray* _sectionRangeMap;

}

@property (nonatomic,readonly) PXCollectionsDataSection * collectionsDataSection;              //@synthesize collectionsDataSection=_collectionsDataSection - In the implementation block
@property (nonatomic,readonly) NSArray * sectionRangeMap;                                      //@synthesize sectionRangeMap=_sectionRangeMap - In the implementation block
@property (nonatomic,readonly) long long indentationLevel;                                     //@synthesize indentationLevel=_indentationLevel - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * childDataSections;                          //@synthesize childDataSections=_childDataSections - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * childIndexHints;                            //@synthesize childIndexHints=_childIndexHints - In the implementation block
-(NSArray *)sectionRangeMap;
-(id)initWithOutlineObject:(id)arg1 ;
-(id)initWithCollectionsDataSection:(id)arg1 indentationLevel:(long long)arg2 outlineObject:(id)arg3 childDataSections:(id)arg4 childIndexHints:(id)arg5 skipAssetCountFetches:(BOOL)arg6 ;
-(id)initWithCollectionsDataSection:(id)arg1 ;
-(id)debugDescription;
-(long long)count;
-(id)existingFetchResultForListItem:(id)arg1 ;
-(id)parentOfListItemAtIndex:(long long)arg1 localIndex:(long long*)arg2 ;
-(long long)indexForListItem:(id)arg1 ;
-(id)objectAtIndex:(long long)arg1 ;
-(long long)validatedIndexOfListItem:(id)arg1 hintIndex:(long long)arg2 ;
-(long long)indexInCollectionsDataSectionOfListItem:(id)arg1 hintIndex:(long long)arg2 ;
-(PXCollectionsDataSection *)collectionsDataSection;
-(long long)indentationLevel;
-(unsigned long long)_dataSubsectionIndexForListItemAtIndex:(long long)arg1 ;
-(void)_createDataSubsectionsIfNecessary;
-(NSDictionary *)childIndexHints;
-(NSDictionary *)childDataSections;
-(id)content;
@end
