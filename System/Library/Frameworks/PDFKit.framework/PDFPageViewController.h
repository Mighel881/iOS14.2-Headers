/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PDFKit.framework/PDFKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PDFKit/PDFKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIScrollViewDelegate.h>
#import <PDFKit/PDFTextInputDelegate.h>

@class PDFPageViewControllerPrivate, NSString;

@interface PDFPageViewController : UIViewController <UIScrollViewDelegate, PDFTextInputDelegate> {

	PDFPageViewControllerPrivate* _private;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)textInputView;
-(void)setScaleFactor:(double)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)pageView;
-(void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3 ;
-(void)setSelection:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)pdfView;
-(void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidZoom:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)scrollView;
-(id)viewForZoomingInScrollView:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(double)scaleFactor;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)PDFPage;
-(id)selection;
-(void)dealloc;
-(void)setPDFView:(id)arg1 ;
-(void)enforceAutoScaleFactor;
-(double)autoScaleFactor;
-(void)setAutoScales:(BOOL)arg1 ;
-(void)setBackgroundImage:(id)arg1 atBackgroundQuality:(int)arg2 ;
-(void)changedBoundsForBoxNotification:(id)arg1 ;
-(void)didRotatePageNotification:(id)arg1 ;
-(void)_removePDFView;
-(void)_buildPDFPageView;
-(void)_updateAnnotations;
-(void)removeAKOverlay;
-(void)_centerAlign;
-(void)_setupGestureRecognizerDependencies;
-(void)setRenderingProperties:(id)arg1 ;
-(void)setPageBreakMargins:(UIEdgeInsets)arg1 ;
-(void)setPDFPage:(id)arg1 ;
-(void)setMinScaleFactor:(double)arg1 withMaxScaleFactor:(double)arg2 ;
@end

