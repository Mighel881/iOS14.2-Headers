/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowUIServices.framework/WorkflowUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/WFWidgetGridViewDelegate.h>
#import <libobjc.A.dylib/WFWorkflowRunnerClientDelegate.h>
#import <libobjc.A.dylib/WFObservableResultObserver.h>

@protocol OS_os_log;
@class WFObservableResult, WFWidgetGridView, WFWidgetOptions, WFWidgetWorkflowRunnerClient, NSObject, NSString;

@interface WFWidgetViewController : UIViewController <WFWidgetGridViewDelegate, WFWorkflowRunnerClientDelegate, WFObservableResultObserver> {

	BOOL _running;
	BOOL _needsLayout;
	WFObservableResult* _observedResult;
	WFWidgetGridView* _gridView;
	double _cornerRadius;
	WFWidgetOptions* _options;
	WFWidgetWorkflowRunnerClient* _client;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) WFObservableResult * observedResult;                //@synthesize observedResult=_observedResult - In the implementation block
@property (nonatomic,readonly) WFWidgetGridView * gridView;                      //@synthesize gridView=_gridView - In the implementation block
@property (nonatomic,readonly) double cornerRadius;                              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) WFWidgetOptions * options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) WFWidgetWorkflowRunnerClient * client;              //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) BOOL running;                                       //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) BOOL needsLayout;                                   //@synthesize needsLayout=_needsLayout - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_os_log> log;                         //@synthesize log=_log - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)runningStates;
+(id)progressSubscribers;
-(WFWidgetGridView *)gridView;
-(id)initWithOptions:(id)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setClient:(WFWidgetWorkflowRunnerClient *)arg1 ;
-(void)workflowRunnerClient:(id)arg1 didFinishRunningWorkflowWithError:(id)arg2 cancelled:(BOOL)arg3 ;
-(BOOL)running;
-(WFWidgetWorkflowRunnerClient *)client;
-(WFWidgetOptions *)options;
-(NSObject*<OS_os_log>)log;
-(BOOL)needsLayout;
-(BOOL)_canShowWhileLocked;
-(double)cornerRadius;
-(void)observableResultDidChange:(id)arg1 ;
-(void)setNeedsLayout:(BOOL)arg1 ;
-(void)loadView;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(void)dealloc;
-(void)gridView:(id)arg1 didTapCell:(id)arg2 ;
-(void)gridView:(id)arg1 cellDidTransitionToRunningState:(long long)arg2 ;
-(void)gridViewDidFinishLayout:(id)arg1 ;
-(void)performInitialFetch;
-(void)layoutWithObservableResult:(id)arg1 ;
-(void)refreshWorkflows;
-(void)addDefaultShortcutsIfNecessaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)showRunningUIForCell:(id)arg1 ;
-(void)stopRunningWithCell:(id)arg1 ;
-(void)resumeRunningWithCell:(id)arg1 ;
-(void)removeStaleRunningContexts;
-(void)restoreRunningStateIfNecessary;
-(/*^block*/id)publishingHandlerForCell:(id)arg1 ;
-(id)runningContextForWorkflowIdentifier:(id)arg1 ;
-(void)setObservedResult:(WFObservableResult *)arg1 ;
-(void)startObservingContentSizeCategoryNotifications;
-(void)stopObservingContentSizeCategoryNotifications;
-(WFObservableResult *)observedResult;
@end
