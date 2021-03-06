/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthExperienceUI.framework/HealthExperienceUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthExperienceUI/HealthExperienceUI.CompoundDataSourceViewController.h>
#import <libobjc.A.dylib/WDFavoriteDisplayTypesControllerObserver.h>

@interface HealthExperienceUI.EditFavoritesTableViewController : HealthExperienceUI.CompoundDataSourceViewController <WDFavoriteDisplayTypesControllerObserver> {

	 editFavoritesDataSource;
	 favoritesController;
	 $__lazy_storage_$_segmentedControl;

}
-(void)favoriteDisplayTypesControllerDidUpdate:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)doneButtonTapped;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)segmentedControlChanged;
-(void)viewDidLoad;
-(id)initWithCoder:(id)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
@end

