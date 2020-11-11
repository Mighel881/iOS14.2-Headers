/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ShareSheet/UIActivityViewController.h>

@protocol PUEditExtensionActivityViewControllerDelegate;
@interface PUEditExtensionActivityViewController : UIActivityViewController {

	id<PUEditExtensionActivityViewControllerDelegate> _editExtensionActivityViewControllerDelegate;

}

@property (assign,nonatomic,__weak) id<PUEditExtensionActivityViewControllerDelegate> editExtensionActivityViewControllerDelegate;              //@synthesize editExtensionActivityViewControllerDelegate=_editExtensionActivityViewControllerDelegate - In the implementation block
-(void)_performActivity:(id)arg1 ;
-(BOOL)_shouldUseModernDesign;
-(BOOL)isPhotosOrCamera;
-(BOOL)appWantsLargePreview;
-(id<PUEditExtensionActivityViewControllerDelegate>)editExtensionActivityViewControllerDelegate;
-(void)setEditExtensionActivityViewControllerDelegate:(id<PUEditExtensionActivityViewControllerDelegate>)arg1 ;
@end
