/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/Silex-Structs.h>
#import <Silex/SXComponentView.h>
#import <libobjc.A.dylib/SXDataTableViewDataSource.h>
#import <libobjc.A.dylib/SXTangierControllerDelegate.h>
#import <libobjc.A.dylib/SXViewportChangeListener.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol SXImageViewFactory, SXComponentActionHandler, SXTextComponentLayoutHosting, SXComponentController, SXAdIgnorableViewFactory;
@class SXDataTableView, SXDataTableComponentController, SXDataTableBlueprint, SXDataTableDictionary, SXScrollView, SXTangierController, CALayer, NSString;

@interface SXDataTableComponentView : SXComponentView <SXDataTableViewDataSource, SXTangierControllerDelegate, SXViewportChangeListener, UIGestureRecognizerDelegate> {

	id<SXImageViewFactory> _imageViewFactory;
	id<SXComponentActionHandler> _componentActionHandler;
	id<SXTextComponentLayoutHosting> _textComponentLayoutHosting;
	id<SXComponentController> _componentController;
	id<SXAdIgnorableViewFactory> _adIgnorableViewFactory;
	SXDataTableView* _tableView;
	SXDataTableComponentController* _dataTableComponentController;
	SXDataTableBlueprint* _blueprint;
	SXDataTableDictionary* _textViews;
	SXDataTableDictionary* _imageViews;
	SXScrollView* _scrollView;
	SXTangierController* _tangierController;
	CALayer* _rightShadow;
	CALayer* _leftShadow;

}

@property (nonatomic,readonly) id<SXImageViewFactory> imageViewFactory;                                         //@synthesize imageViewFactory=_imageViewFactory - In the implementation block
@property (nonatomic,readonly) id<SXComponentActionHandler> componentActionHandler;                             //@synthesize componentActionHandler=_componentActionHandler - In the implementation block
@property (nonatomic,__weak,readonly) id<SXTextComponentLayoutHosting> textComponentLayoutHosting;              //@synthesize textComponentLayoutHosting=_textComponentLayoutHosting - In the implementation block
@property (nonatomic,__weak,readonly) id<SXComponentController> componentController;                            //@synthesize componentController=_componentController - In the implementation block
@property (nonatomic,readonly) id<SXAdIgnorableViewFactory> adIgnorableViewFactory;                             //@synthesize adIgnorableViewFactory=_adIgnorableViewFactory - In the implementation block
@property (nonatomic,retain) SXDataTableView * tableView;                                                       //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) SXDataTableComponentController * dataTableComponentController;                     //@synthesize dataTableComponentController=_dataTableComponentController - In the implementation block
@property (nonatomic,retain) SXDataTableBlueprint * blueprint;                                                  //@synthesize blueprint=_blueprint - In the implementation block
@property (nonatomic,retain) SXDataTableDictionary * textViews;                                                 //@synthesize textViews=_textViews - In the implementation block
@property (nonatomic,retain) SXDataTableDictionary * imageViews;                                                //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,retain) SXScrollView * scrollView;                                                         //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,retain) SXTangierController * tangierController;                                           //@synthesize tangierController=_tangierController - In the implementation block
@property (nonatomic,retain) CALayer * rightShadow;                                                             //@synthesize rightShadow=_rightShadow - In the implementation block
@property (nonatomic,retain) CALayer * leftShadow;                                                              //@synthesize leftShadow=_leftShadow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setTableView:(SXDataTableView *)arg1 ;
-(void)setBlueprint:(SXDataTableBlueprint *)arg1 ;
-(SXTangierController *)tangierController;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(SXDataTableView *)tableView;
-(SXDataTableDictionary *)textViews;
-(SXDataTableBlueprint *)blueprint;
-(void)setTextViews:(SXDataTableDictionary *)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setTangierController:(SXTangierController *)arg1 ;
-(SXScrollView *)scrollView;
-(void)tangierControllerDidScroll:(id)arg1 ;
-(id<SXComponentActionHandler>)componentActionHandler;
-(id<SXTextComponentLayoutHosting>)textComponentLayoutHosting;
-(SXDataTableDictionary *)imageViews;
-(id<SXComponentController>)componentController;
-(void)setScrollView:(SXScrollView *)arg1 ;
-(void)dealloc;
-(void)setImageViews:(SXDataTableDictionary *)arg1 ;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 imageViewFactory:(id)arg5 componentActionHandler:(id)arg6 textComponentLayoutHosting:(id)arg7 componentController:(id)arg8 adIgnorableViewFactory:(id)arg9 ;
-(SXDataTableComponentController *)dataTableComponentController;
-(void)setDataTableComponentController:(SXDataTableComponentController *)arg1 ;
-(id<SXImageViewFactory>)imageViewFactory;
-(BOOL)userInteractable;
-(id)contentViewForBehavior:(id)arg1 ;
-(id)descriptorForIndexPath:(NSRange)arg1 ;
-(id<SXAdIgnorableViewFactory>)adIgnorableViewFactory;
-(void)setupShadowsIfNeeded;
-(void)updateTangierController;
-(void)addTextStorageForIndexPath:(NSRange)arg1 toCollectior:(id)arg2 ;
-(void)updateShadowOpacity;
-(CALayer *)leftShadow;
-(CALayer *)rightShadow;
-(void)setLeftShadow:(CALayer *)arg1 ;
-(void)setRightShadow:(CALayer *)arg1 ;
-(id)dataTableView:(id)arg1 viewForCellAtIndexPath:(NSRange)arg2 constraintToSize:(CGSize)arg3 ;
@end
