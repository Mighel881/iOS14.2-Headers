/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SafariServices/_SFActivity.h>
#import <libobjc.A.dylib/_SFSingleBookmarkNavigationControllerDelegate.h>

@class _SFSingleBookmarkNavigationController;

@interface _SFAddBookmarkActivity : _SFActivity <_SFSingleBookmarkNavigationControllerDelegate> {

	_SFSingleBookmarkNavigationController* _bookmarkNavigationController;

}

@property (nonatomic,readonly) _SFSingleBookmarkNavigationController * bookmarkNavigationController; 
-(id)activityType;
-(id)activityTitle;
-(void)addBookmarkNavController:(id)arg1 didFinishWithResult:(BOOL)arg2 bookmark:(id)arg3 ;
-(BOOL)addBookmarkNavControllerCanSaveBookmarkChanges:(id)arg1 ;
-(BOOL)canPerformWithActivityItems:(id)arg1 ;
-(id)_embeddedActivityViewController;
-(id)activityViewController;
-(_SFSingleBookmarkNavigationController *)bookmarkNavigationController;
-(id)_systemImageName;
@end

