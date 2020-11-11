/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PencilKit/PencilKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>
#import <libobjc.A.dylib/PKEdgeLocatable.h>
#import <libobjc.A.dylib/PKPalettePopoverDismissing.h>
#import <libobjc.A.dylib/PKPalettePopoverUpdating.h>
#import <libobjc.A.dylib/PKPaletteViewSizeScaling.h>

@protocol PKPalettePopoverPresentingPKPaletteToolPickerViewDelegate, PKDrawingPaletteStatistics;
@class NSString, UIScrollView, UIStackView, PKPaletteToolPickerOverlayView, NSMutableArray, PKPaletteToolView, PKPaletteAttributeViewController, NSHashTable, PKInk, NSArray;

@interface PKPaletteToolPickerView : UIView <UIPopoverPresentationControllerDelegate, PKEdgeLocatable, PKPalettePopoverDismissing, PKPalettePopoverUpdating, PKPaletteViewSizeScaling> {

	BOOL _usingShortestToolSpacing;
	BOOL _showsHandwritingTool;
	unsigned long long _edgeLocation;
	double _scalingFactor;
	id<PKPalettePopoverPresenting><PKPaletteToolPickerViewDelegate> _delegate;
	long long _colorUserInterfaceStyle;
	NSString* _handwritingToolLocaleIdentifier;
	id<PKDrawingPaletteStatistics> _drawingPaletteStatistics;
	UIScrollView* _scrollView;
	UIStackView* _stackView;
	PKPaletteToolPickerOverlayView* _overlayView;
	NSMutableArray* _toolViews;
	NSMutableArray* _toolsWidthConstraints;
	NSMutableArray* _toolsHeightConstraints;
	NSMutableArray* _toolsWidthCompactConstraints;
	PKPaletteToolView* _lastSelectedTool;
	PKPaletteAttributeViewController* _toolAttributesPopover;
	NSHashTable* _presentedViewControllers;

}

@property (nonatomic,retain) id<PKDrawingPaletteStatistics> drawingPaletteStatistics;                                      //@synthesize drawingPaletteStatistics=_drawingPaletteStatistics - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                                                                    //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) UIStackView * stackView;                                                                      //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) PKPaletteToolPickerOverlayView * overlayView;                                                 //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,retain) NSMutableArray * toolViews;                                                                   //@synthesize toolViews=_toolViews - In the implementation block
@property (nonatomic,retain) NSMutableArray * toolsWidthConstraints;                                                       //@synthesize toolsWidthConstraints=_toolsWidthConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * toolsHeightConstraints;                                                      //@synthesize toolsHeightConstraints=_toolsHeightConstraints - In the implementation block
@property (nonatomic,retain) NSMutableArray * toolsWidthCompactConstraints;                                                //@synthesize toolsWidthCompactConstraints=_toolsWidthCompactConstraints - In the implementation block
@property (nonatomic,retain) PKPaletteToolView * lastSelectedTool;                                                         //@synthesize lastSelectedTool=_lastSelectedTool - In the implementation block
@property (nonatomic,retain) PKPaletteAttributeViewController * toolAttributesPopover;                                     //@synthesize toolAttributesPopover=_toolAttributesPopover - In the implementation block
@property (nonatomic,retain) NSHashTable * presentedViewControllers;                                                       //@synthesize presentedViewControllers=_presentedViewControllers - In the implementation block
@property (nonatomic,readonly) unsigned long long _selectedToolsCount; 
@property (assign,nonatomic,__weak) id<PKPalettePopoverPresenting><PKPaletteToolPickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKPaletteToolView * selectedToolView; 
@property (nonatomic,retain) PKInk * selectedToolInk; 
@property (nonatomic,copy) NSArray * toolIdentifiers; 
@property (nonatomic,copy) NSArray * toolProperties; 
@property (assign,nonatomic) long long colorUserInterfaceStyle;                                                            //@synthesize colorUserInterfaceStyle=_colorUserInterfaceStyle - In the implementation block
@property (nonatomic,readonly) BOOL selectedToolSupportsDisplayingSelectedColor; 
@property (nonatomic,readonly) BOOL selectedToolSupportsChangingColor; 
@property (assign,getter=isUsingShortestToolSpacing,nonatomic) BOOL usingShortestToolSpacing;                              //@synthesize usingShortestToolSpacing=_usingShortestToolSpacing - In the implementation block
@property (assign,nonatomic) BOOL showsHandwritingTool;                                                                    //@synthesize showsHandwritingTool=_showsHandwritingTool - In the implementation block
@property (nonatomic,copy) NSString * handwritingToolLocaleIdentifier;                                                     //@synthesize handwritingToolLocaleIdentifier=_handwritingToolLocaleIdentifier - In the implementation block
@property (getter=isHandwritingToolSelected,nonatomic,readonly) BOOL handwritingToolSelected; 
@property (getter=isLassoToolSelected,nonatomic,readonly) BOOL lassoToolSelected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long edgeLocation;                                                              //@synthesize edgeLocation=_edgeLocation - In the implementation block
@property (assign,nonatomic) double scalingFactor;                                                                         //@synthesize scalingFactor=_scalingFactor - In the implementation block
+(id)defaultToolIdentifiers;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2 ;
-(id)init;
-(id<PKPalettePopoverPresenting><PKPaletteToolPickerViewDelegate>)delegate;
-(void)setStackView:(UIStackView *)arg1 ;
-(PKPaletteToolPickerOverlayView *)overlayView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIScrollView *)scrollView;
-(void)setDelegate:(id<PKPalettePopoverPresenting><PKPaletteToolPickerViewDelegate>)arg1 ;
-(void)setScalingFactor:(double)arg1 ;
-(void)setOverlayView:(PKPaletteToolPickerOverlayView *)arg1 ;
-(long long)adaptivePresentationStyleForPresentationController:(id)arg1 ;
-(BOOL)_useCompactSize;
-(void)_updateUI;
-(double)scalingFactor;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIStackView *)stackView;
-(void)updateConstraints;
-(unsigned long long)edgeLocation;
-(void)setEdgeLocation:(unsigned long long)arg1 ;
-(id<PKDrawingPaletteStatistics>)drawingPaletteStatistics;
-(void)setDrawingPaletteStatistics:(id<PKDrawingPaletteStatistics>)arg1 ;
-(BOOL)isHandwritingToolSelected;
-(BOOL)showsHandwritingTool;
-(double)_stackViewSpacing;
-(void)setShowsHandwritingTool:(BOOL)arg1 ;
-(NSString *)handwritingToolLocaleIdentifier;
-(void)setHandwritingToolLocaleIdentifier:(NSString *)arg1 ;
-(void)dismissPalettePopoverWithCompletion:(/*^block*/id)arg1 ;
-(void)updatePopoverUI;
-(long long)colorUserInterfaceStyle;
-(void)setColorUserInterfaceStyle:(long long)arg1 ;
-(void)setUsingShortestToolSpacing:(BOOL)arg1 ;
-(void)setToolProperties:(NSArray *)arg1 ;
-(NSArray *)toolProperties;
-(void)setToolIdentifiers:(NSArray *)arg1 ;
-(void)setSelectedToolInk:(PKInk *)arg1 ;
-(PKInk *)selectedToolInk;
-(void)selectToolWithIdentifier:(id)arg1 ;
-(void)setSelectedToolInkColor:(id)arg1 ignoreColorOpacity:(BOOL)arg2 ;
-(BOOL)selectedToolSupportsDisplayingSelectedColor;
-(PKPaletteToolView *)selectedToolView;
-(BOOL)isLassoToolSelected;
-(NSArray *)toolIdentifiers;
-(void)toggleBetweenLastSelectedToolAndEraser;
-(void)toggleBetweenLastSelectedToolAndCurrentlySelectedTool;
-(void)_installScrollViewInView:(id)arg1 ;
-(void)_installStackViewInScrollView:(id)arg1 ;
-(void)_installToolViewsWithIdentifiers:(id)arg1 ;
-(void)_installOverlayViewInView:(id)arg1 ;
-(void)_selectDefaultInkingTool;
-(void)_setupDefaultLastSelectedTool;
-(id)_firstInkingTool;
-(void)_selectToolView:(id)arg1 ;
-(id)_eraserToolView;
-(NSMutableArray *)toolViews;
-(id)_toolViewWithIdentifier:(id)arg1 ;
-(void)_removeToolView:(id)arg1 ;
-(void)setToolViews:(NSMutableArray *)arg1 ;
-(id)toolsFromToolIdentifiers:(id)arg1 ;
-(void)_insertToolView:(id)arg1 atUserInterfaceIndex:(unsigned long long)arg2 ;
-(BOOL)_canInsertToolView:(id)arg1 ;
-(void)_toolTapGestureRecognizer:(id)arg1 ;
-(NSMutableArray *)toolsHeightConstraints;
-(NSMutableArray *)toolsWidthConstraints;
-(NSMutableArray *)toolsWidthCompactConstraints;
-(void)_showToolAttributesPopover;
-(id)_selectedToolView;
-(BOOL)_canSelectToolWithIdentifier:(id)arg1 ;
-(void)setLastSelectedTool:(PKPaletteToolView *)arg1 ;
-(void)_unselectAllTools;
-(void)setToolAttributesPopover:(PKPaletteAttributeViewController *)arg1 ;
-(PKPaletteAttributeViewController *)toolAttributesPopover;
-(void)_toolAttributesDidChange:(id)arg1 ;
-(CGRect)sourceRectForPopoverPresentationForTool:(id)arg1 ;
-(id)sourceViewForPopoverPresentationForTool:(id)arg1 ;
-(NSHashTable *)presentedViewControllers;
-(BOOL)_canPresentToolAttributesPopover;
-(void)_installHandwritingToolIfNeeded;
-(BOOL)_isHandwritingToolInstalled;
-(void)_removeHandwritingTool;
-(id)_handwritingToolView;
-(void)_updateToolsUI;
-(BOOL)isUsingShortestToolSpacing;
-(void)_rebuildAndActivateToolsLayoutConstraints;
-(PKPaletteToolView *)lastSelectedTool;
-(unsigned long long)_selectedToolsCount;
-(BOOL)selectedToolSupportsChangingColor;
-(BOOL)_isAllToolsColorUserInterfaceStyleEqualsTo:(long long)arg1 ;
-(BOOL)_isAllToolsEdgeLocationEqualsTo:(unsigned long long)arg1 ;
-(void)setToolsWidthConstraints:(NSMutableArray *)arg1 ;
-(void)setToolsHeightConstraints:(NSMutableArray *)arg1 ;
-(void)setToolsWidthCompactConstraints:(NSMutableArray *)arg1 ;
-(void)setPresentedViewControllers:(NSHashTable *)arg1 ;
@end
