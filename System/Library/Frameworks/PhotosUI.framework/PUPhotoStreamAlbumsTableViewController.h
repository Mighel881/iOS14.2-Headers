/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UITableViewController.h>

@protocol PUPhotoStreamsAlbumsTableViewControllerDelegate;
@class NSOrderedSet, NSMutableSet;

@interface PUPhotoStreamAlbumsTableViewController : UITableViewController {

	NSOrderedSet* _albumsOrderedSet;
	NSMutableSet* _selectedAlbumGuids;
	BOOL _allowsMutlipleSelection;
	id<PUPhotoStreamsAlbumsTableViewControllerDelegate> _pickerDelegate;

}

@property (assign,nonatomic) BOOL allowsMutlipleSelection;                                                           //@synthesize allowsMutlipleSelection=_allowsMutlipleSelection - In the implementation block
@property (assign,nonatomic,__weak) id<PUPhotoStreamsAlbumsTableViewControllerDelegate> pickerDelegate;              //@synthesize pickerDelegate=_pickerDelegate - In the implementation block
+(id)albumListForContentMode:(int)arg1 ;
+(/*^block*/id)_albumsComparator;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)addSelectedCloudGuid:(id)arg1 ;
-(void)reloadActions;
-(id)posterImageForAlbum:(id)arg1 imageView:(id)arg2 ;
-(id<PUPhotoStreamsAlbumsTableViewControllerDelegate>)pickerDelegate;
-(BOOL)allowsMutlipleSelection;
-(void)setAllowsMutlipleSelection:(BOOL)arg1 ;
-(void)setPickerDelegate:(id<PUPhotoStreamsAlbumsTableViewControllerDelegate>)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(CGSize)contentSizeForViewInPopover;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
@end

