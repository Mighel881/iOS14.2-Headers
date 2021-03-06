/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate.h>

@class NTKFace, UIViewController, NTKGreenfieldCompanionActivityViewController, NSString;

@interface NTKGreenfieldCompanionShareController : NSObject <NTKGreenfieldCompanionSharePhotosPickerViewControllerDelegate> {

	NTKFace* _face;
	NTKFace* _updatedFace;
	UIViewController* _originatedViewController;
	NTKGreenfieldCompanionActivityViewController* _activityViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)_handleError:(id)arg1 ;
-(void)companionSharePhotosPickerViewController:(id)arg1 didFinishWithFace:(id)arg2 ;
-(void)shareWatchFace:(id)arg1 fromViewController:(id)arg2 ;
-(void)_startFaceSharing;
-(void)_presentInternalWarningIfNeededWithContinueBlock:(/*^block*/id)arg1 ;
-(void)_showPhotosPickerView;
-(void)_prepareForShareSheet;
-(void)_presentShareSheetWithDraftRecipe:(id)arg1 previewImage:(id)arg2 ;
@end

