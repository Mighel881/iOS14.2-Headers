//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun 22 2020 21:25:24).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/CSWidgetGroupViewControllerProviding-Protocol.h>
#import <SpringBoard/SBExtensionHandling-Protocol.h>
#import <SpringBoard/SBHSidebarWidgetLearningObserver-Protocol.h>
#import <SpringBoard/WGWidgetDiscoveryControllerDelegate-Protocol.h>

@class NSString, SBHSidebarWidgetBootstrappingAdvisor, WGWidgetDiscoveryController;

@interface SBWidgetController : NSObject <WGWidgetDiscoveryControllerDelegate, SBExtensionHandling, SBHSidebarWidgetLearningObserver, CSWidgetGroupViewControllerProviding>
{
    WGWidgetDiscoveryController *_widgetDiscoveryController;
    SBHSidebarWidgetBootstrappingAdvisor *_sidebarWidgetBootstrappingAdvisor;
}


// Remaining properties
@property(nonatomic) _Bool bootstrapFavoriteWidgets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) SBHSidebarWidgetBootstrappingAdvisor *sidebarWidgetBootstrappingAdvisor; // @synthesize sidebarWidgetBootstrappingAdvisor=_sidebarWidgetBootstrappingAdvisor;
@property(readonly) Class superclass;
@property(retain, nonatomic, getter=_widgetDiscoveryController) WGWidgetDiscoveryController *widgetDiscoveryController; // @synthesize widgetDiscoveryController=_widgetDiscoveryController;
@end

