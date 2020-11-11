/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewController.h>

@interface PKSectionTableViewController : UITableViewController {

	unsigned long long _numberOfSections;
	SCD_Struct_PK31* _currentMap;
	SCD_Struct_PK31* _bufferedMap;
	BOOL _skipSetupForReadableContentGuide;

}

@property (assign,nonatomic) BOOL skipSetupForReadableContentGuide;              //@synthesize skipSetupForReadableContentGuide=_skipSetupForReadableContentGuide - In the implementation block
-(void)reloadSection:(unsigned long long)arg1 ;
-(long long)rowAnimationForReloadingSection:(unsigned long long)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)_recomputeMappedSections;
-(void)_swapBuffers;
-(long long)rowAnimationForDeletingSection:(unsigned long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(long long)rowAnimationForInsertingSection:(unsigned long long)arg1 ;
-(BOOL)recomputeMappedSectionsAndReloadSections:(id)arg1 ;
-(void)updateSectionVisibilityAndReloadIfNecessaryForSection:(unsigned long long)arg1 ;
-(unsigned long long)numberOfMappedSections;
-(BOOL)isMappingValid;
-(BOOL)skipSetupForReadableContentGuide;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(unsigned long long)sectionForIndex:(unsigned long long)arg1 ;
-(void)updateSectionVisibilityAndReloadIfNecessaryForAllSections;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 numberOfSections:(unsigned long long)arg2 ;
-(void)setSkipSetupForReadableContentGuide:(BOOL)arg1 ;
-(BOOL)shouldMapSection:(unsigned long long)arg1 ;
-(BOOL)isSectionMapped:(unsigned long long)arg1 ;
-(BOOL)reloadData;
-(unsigned long long)indexForSection:(unsigned long long)arg1 ;
-(void)updateSectionVisibilityAndReloadIfNecessaryForSections:(id)arg1 ;
-(void)reloadSections:(id)arg1 ;
-(void)dealloc;
@end
