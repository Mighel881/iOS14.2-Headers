/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXDiagnosticsService.h>
#import <UIKit/UIDocumentInteractionControllerDelegate.h>

@class PXGView, UIViewController, PXCuratedLibraryAssetsDataSourceManager, NSMutableArray, NSString;

@interface PXGViewSnapshotDiagnosticsService : PXDiagnosticsService <UIDocumentInteractionControllerDelegate> {

	PXGView* _gridView;
	UIViewController* _viewController;
	PXCuratedLibraryAssetsDataSourceManager* _dataSourceManager;
	NSMutableArray* _images;
	NSMutableArray* _imageURLs;
	CGRect _lastScrollViewBounds;

}

@property (nonatomic,readonly) PXGView * gridView;                                                       //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,readonly) UIViewController * viewController;                                        //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAssetsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * images;                                                    //@synthesize images=_images - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageURLs;                                                 //@synthesize imageURLs=_imageURLs - In the implementation block
@property (assign,nonatomic) CGRect lastScrollViewBounds;                                                //@synthesize lastScrollViewBounds=_lastScrollViewBounds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_writeImageToDisk:(id)arg1 suffix:(id)arg2 ;
+(id)_mergeImagesFromArray:(id)arg1 ;
+(id)_createPDFWithImagesAtURLs:(id)arg1 ;
+(id)_cropRect:(CGRect)arg1 fromImage:(id)arg2 ;
+(id)_snapshotImageFromView:(id)arg1 ;
+(id)_imageAtURL:(id)arg1 ;
-(PXCuratedLibraryAssetsDataSourceManager *)dataSourceManager;
-(PXGView *)gridView;
-(UIViewController *)viewController;
-(NSMutableArray *)images;
-(void)_captureNextPage;
-(void)_stopCapture;
-(CGRect)lastScrollViewBounds;
-(void)_mergeAllImagesAndWriteToDisk;
-(void)setLastScrollViewBounds:(CGRect)arg1 ;
-(id)documentInteractionControllerViewControllerForPreview:(id)arg1 ;
-(void)setImages:(NSMutableArray *)arg1 ;
-(NSMutableArray *)imageURLs;
-(void)setImageURLs:(NSMutableArray *)arg1 ;
-(void)performAction;
-(id)title;
-(BOOL)canPerformAction;
-(id)initWithItemProviders:(id)arg1 ;
@end
