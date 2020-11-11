/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <FamilyCircleUI/FATableViewDecorator.h>

@class RUITableView, FAProfilePictureStore;

@interface FAProfilePictureTableViewDecorator : FATableViewDecorator {

	RUITableView* _remoteTableViewController;
	FAProfilePictureStore* _pictureStore;

}
+(BOOL)shouldShowPicturesInPage:(id)arg1 ;
+(BOOL)_shouldShowPictureInSection:(id)arg1 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(id)initWithTableView:(id)arg1 ruiTableView:(id)arg2 pictureStore:(id)arg3 ;
-(void)_profilePictureStoreDidReload;
@end
