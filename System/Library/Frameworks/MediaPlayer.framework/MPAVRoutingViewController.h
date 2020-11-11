/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/CARSessionObserving.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/MPAVRoutingTableViewCellDelegate.h>
#import <libobjc.A.dylib/_MPStateDumpPropertyListTransformable.h>

@protocol MPAVRoutingViewControllerDelegate, MPAVRoutingViewControllerThemeDelegate;
@class MPAVClippingTableView, MPAVRoutingViewControllerUpdate, MPAVRoute, MPSectionedCollection, NSArray, NSDictionary, NSMutableSet, MPWeakTimer, MPAVRoutingController, UIColor, CARSessionStatus, NSNumber, MPAVEndpointRoute, NSMapTable, MPVolumeGroupSliderCoordinator, UITableView, NSString;

@interface MPAVRoutingViewController : UIViewController <CARSessionObserving, UITableViewDataSource, UITableViewDelegate, MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, _MPStateDumpPropertyListTransformable> {

	MPAVClippingTableView* _tableView;
	MPAVRoutingViewControllerUpdate* _pendingUpdate;
	MPAVRoutingViewControllerUpdate* _optimisticUpdate;
	BOOL _isAnimatingUpdate;
	MPAVRoute* _displayedEndpointRoute;
	MPSectionedCollection* _routingViewItems;
	NSArray* _cachedPickedRoutes;
	NSArray* _cachedDisplayableAvailableRoutes;
	NSArray* _cachedPendingPickedRoutes;
	NSArray* _cachedDisplayAsPickedRoutes;
	NSArray* _cachedVolumeCapableRoutes;
	NSDictionary* _cachedRouteGrouping;
	NSMutableSet* _expandedGroupUIDs;
	MPWeakTimer* _updateTimer;
	MPAVRoutingController* _routingController;
	long long _routeDiscoveryMode;
	UIColor* _tableCellsBackgroundColor;
	UIColor* _tableCellsContentColor;
	int _airPlayPasswordAlertDidAppearToken;
	int _airPlayPasswordAlertDidCancelToken;
	BOOL _airPlayPasswordAlertDidAppearTokenIsValid;
	BOOL _needsDisplayedRoutesUpdate;
	BOOL _suspendedDiscoveryModeDueToApplicationState;
	BOOL _shouldAutomaticallyUpdateRoutesList;
	BOOL _shouldPickRouteOnSelection;
	BOOL _onScreen;
	BOOL _hasUserSelections;
	CARSessionStatus* _carPlayStatus;
	unsigned long long _updatesSincePresentation;
	long long _discoveryModeBeforeEnteringBackground;
	BOOL _sortByIsVideoRoute;
	unsigned long long _style;
	id<MPAVRoutingViewControllerDelegate> _delegate;
	long long _avItemType;
	unsigned long long _mirroringStyle;
	unsigned long long _iconStyle;
	NSNumber* _discoveryModeOverride;
	id<MPAVRoutingViewControllerThemeDelegate> _themeDelegate;
	MPAVEndpointRoute* _endpointRoute;
	double _continuousCornerRadius;
	NSMapTable* _outputDeviceVolumeSliders;
	MPVolumeGroupSliderCoordinator* _groupSliderCoordinator;

}

@property (getter=isInCarPlay,nonatomic,readonly) BOOL inCarPlay; 
@property (assign,nonatomic,__weak) id<MPAVRoutingViewControllerThemeDelegate> themeDelegate;                                              //@synthesize themeDelegate=_themeDelegate - In the implementation block
@property (nonatomic,readonly) MPAVRoutingController * _routingController; 
@property (nonatomic,retain) MPAVEndpointRoute * endpointRoute;                                                                            //@synthesize endpointRoute=_endpointRoute - In the implementation block
@property (nonatomic,readonly) UITableView * _tableView; 
@property (nonatomic,readonly) double _normalCellHeight; 
@property (nonatomic,readonly) double _expandedCellHeight; 
@property (assign,setter=_setContinuousCornerRadius:,getter=_continuousCornerRadius,nonatomic) double continuousCornerRadius;              //@synthesize continuousCornerRadius=_continuousCornerRadius - In the implementation block
@property (setter=_setTableCellsBackgroundColor:,nonatomic,retain) UIColor * _tableCellsBackgroundColor; 
@property (setter=_setTableCellsContentColor:,nonatomic,retain) UIColor * _tableCellsContentColor; 
@property (assign,setter=_setShouldAutomaticallyUpdateRoutesList:,nonatomic) BOOL _shouldAutomaticallyUpdateRoutesList; 
@property (assign,setter=_setShouldPickRouteOnSelection:,nonatomic) BOOL _shouldPickRouteOnSelection; 
@property (nonatomic,retain) NSMapTable * outputDeviceVolumeSliders;                                                                       //@synthesize outputDeviceVolumeSliders=_outputDeviceVolumeSliders - In the implementation block
@property (nonatomic,retain) MPVolumeGroupSliderCoordinator * groupSliderCoordinator;                                                      //@synthesize groupSliderCoordinator=_groupSliderCoordinator - In the implementation block
@property (assign,nonatomic) BOOL sortByIsVideoRoute;                                                                                      //@synthesize sortByIsVideoRoute=_sortByIsVideoRoute - In the implementation block
@property (nonatomic,readonly) unsigned long long style;                                                                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVRoutingViewControllerDelegate> delegate;                                                        //@synthesize delegate=_delegate - In the implementation block
@property (assign,setter=setAVItemType:,nonatomic) long long avItemType;                                                                   //@synthesize avItemType=_avItemType - In the implementation block
@property (assign,nonatomic) unsigned long long mirroringStyle;                                                                            //@synthesize mirroringStyle=_mirroringStyle - In the implementation block
@property (assign,nonatomic) unsigned long long iconStyle;                                                                                 //@synthesize iconStyle=_iconStyle - In the implementation block
@property (assign,nonatomic) BOOL allowMirroring; 
@property (nonatomic,copy) NSNumber * discoveryModeOverride;                                                                               //@synthesize discoveryModeOverride=_discoveryModeOverride - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewWillLayoutSubviews;
-(void)sessionDidDisconnect:(id)arg1 ;
-(BOOL)isInCarPlay;
-(id)_crashLogDateFormatter;
-(id)_generatePropertyListFromUpdateDisplayedRoutesState:(id)arg1 exception:(id)arg2 ;
-(id)_writeToDiskWithUpdateDisplayedRoutesStatePropertyList:(id)arg1 error:(id*)arg2 ;
-(void)_applyUpdate:(id)arg1 ;
-(id)_alertControllerForUpdateDisplayedRoutesCrashWithLogFileURL:(id)arg1 exception:(id)arg2 ;
-(void)_endUpdates;
-(UIColor *)_tableCellsBackgroundColor;
-(BOOL)isInVehicle;
-(UIColor *)_tableCellsContentColor;
-(BOOL)_shouldPickRouteOnSelection;
-(BOOL)_shouldAutomaticallyUpdateRoutesList;
-(void)setAVItemType:(long long)arg1 ;
-(long long)avItemType;
-(void)routingCell:(id)arg1 mirroringSwitchValueDidChange:(BOOL)arg2 ;
-(void)routingCellDidTapToExpand:(id)arg1 ;
-(BOOL)allowMirroring;
-(BOOL)hasCarKitRoute;
-(void)_initWithStyle:(unsigned long long)arg1 routingController:(id)arg2 ;
-(id)initWithStyle:(unsigned long long)arg1 routingController:(id)arg2 ;
-(void)setAllowMirroring:(BOOL)arg1 ;
-(id<MPAVRoutingViewControllerThemeDelegate>)themeDelegate;
-(void)setDiscoveryModeOverride:(NSNumber *)arg1 ;
-(void)resetDisplayedRoutes;
-(void)resetScrollPosition;
-(void)registerTableViewCells;
-(BOOL)shouldOverrideContentSizeCategory:(id)arg1 ;
-(void)enqueueRefreshUpdate;
-(double)_expandedCellHeight;
-(double)_normalCellHeight;
-(void)_setShouldAutomaticallyUpdateRoutesList:(BOOL)arg1 ;
-(void)_setShouldPickRouteOnSelection:(BOOL)arg1 ;
-(void)_registerCarPlayObserver;
-(id)_stateDumpObject;
-(void)_setTableCellsBackgroundColor:(id)arg1 ;
-(void)_setTableCellsContentColor:(id)arg1 ;
-(void)_diplayShareAudioDisabledAlertForReason:(id)arg1 ;
-(BOOL)_wouldShareAudioForPickedRoute:(id)arg1 operation:(long long)arg2 pickedRoutes:(id)arg3 ;
-(double)_tableViewHeightAccordingToDataSource;
-(void)sessionDidConnect:(id)arg1 ;
-(BOOL)_operationRequiresOptimisticState:(long long)arg1 routes:(id)arg2 ;
-(void)_configureCell:(id)arg1 forIndexPath:(id)arg2 ;
-(void)_beginRouteDiscovery;
-(void)_endRouteDiscovery;
-(void)_setupUpdateTimerIfNecessary;
-(void)_setRouteDiscoveryMode:(long long)arg1 ;
-(id)_displayableRoutesInRoutes:(id)arg1 ;
-(void)_setNeedsRouteDiscoveryModeUpdate;
-(void)_setNeedsDisplayedRoutesUpdate;
-(id)_displayAsPickedRoutesInRoutes:(id)arg1 ;
-(id)_volumeCapableRoutesInRoutes:(id)arg1 ;
-(void)_createUpdateWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateDisplayedRoutes;
-(void)_enqueueUpdate:(id)arg1 ;
-(void)setOptimisticUpdate:(id)arg1 ;
-(id)_createRefreshUpdate;
-(id)_createReloadUpdate;
-(id)endpointGroupUID;
-(void)updateExpandedGroups;
-(double)_tableViewHeaderViewHeight;
-(double)_tableViewFooterViewHeight;
-(BOOL)_shouldDisplayRouteAsPicked:(id)arg1 ;
-(id)groupUIDForRoute:(id)arg1 ;
-(id)_createRoutingViewItemsForRoutes:(id)arg1 ;
-(void)_collapseAllGroups;
-(BOOL)shouldGroupRoutingViewItems;
-(id)_createSectionedCollection:(id)arg1 withPickedRoutes:(id)arg2 ;
-(NSNumber *)discoveryModeOverride;
-(void)setThemeDelegate:(id<MPAVRoutingViewControllerThemeDelegate>)arg1 ;
-(void)setSortByIsVideoRoute:(BOOL)arg1 ;
-(NSMapTable *)outputDeviceVolumeSliders;
-(void)setOutputDeviceVolumeSliders:(NSMapTable *)arg1 ;
-(void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2 ;
-(MPAVEndpointRoute *)endpointRoute;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(id<MPAVRoutingViewControllerDelegate>)delegate;
-(double)_continuousCornerRadius;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(UITableView *)_tableView;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)setIconStyle:(unsigned long long)arg1 ;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2 ;
-(void)routingController:(id)arg1 pickedRoutesDidChange:(id)arg2 ;
-(void)routingController:(id)arg1 shouldHijackRoute:(id)arg2 alertStyle:(long long)arg3 busyRouteName:(id)arg4 presentingAppName:(id)arg5 completion:(/*^block*/id)arg6 ;
-(void)_registerNotifications;
-(id)_createVolumeSlider;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(unsigned long long)iconStyle;
-(void)setDelegate:(id<MPAVRoutingViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(MPVolumeGroupSliderCoordinator *)groupSliderCoordinator;
-(void)viewDidLoad;
-(unsigned long long)style;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(MPAVRoutingController *)_routingController;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)_unregisterNotifications;
-(void)_volumeSliderVolumeControlAvailabilityDidChangeNotification:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(CGSize)preferredContentSize;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)setMirroringStyle:(unsigned long long)arg1 ;
-(void)setGroupSliderCoordinator:(MPVolumeGroupSliderCoordinator *)arg1 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(unsigned long long)mirroringStyle;
-(BOOL)sortByIsVideoRoute;
-(void)setEndpointRoute:(MPAVEndpointRoute *)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
@end
