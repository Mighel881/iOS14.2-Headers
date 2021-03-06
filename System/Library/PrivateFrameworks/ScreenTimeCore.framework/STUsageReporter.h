/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@class NSDateInterval, NSNumber, NSFetchedResultsController, NSSet, NSArray, NSDate, NSString;

@interface STUsageReporter : NSObject <NSFetchedResultsControllerDelegate> {

	BOOL _includeTotalUsageDetailItem;
	NSDateInterval* _dateInterval;
	NSNumber* _userDSID;
	NSFetchedResultsController* _fetchedResultsController;
	NSFetchedResultsController* _installedAppsController;
	NSSet* _installedBundleIdentifiers;

}

@property (copy,readonly) NSDateInterval * dateInterval;                                        //@synthesize dateInterval=_dateInterval - In the implementation block
@property (copy,readonly) NSNumber * userDSID;                                                  //@synthesize userDSID=_userDSID - In the implementation block
@property (readonly) NSFetchedResultsController * fetchedResultsController;                     //@synthesize fetchedResultsController=_fetchedResultsController - In the implementation block
@property (nonatomic,retain) NSFetchedResultsController * installedAppsController;              //@synthesize installedAppsController=_installedAppsController - In the implementation block
@property (copy) NSSet * installedBundleIdentifiers;                                            //@synthesize installedBundleIdentifiers=_installedBundleIdentifiers - In the implementation block
@property (readonly) double totalScreenTime; 
@property (readonly) long long totalPickups; 
@property (readonly) long long totalNotifications; 
@property (assign) BOOL includeTotalUsageDetailItem;                                            //@synthesize includeTotalUsageDetailItem=_includeTotalUsageDetailItem - In the implementation block
@property (copy,readonly) NSArray * categoryUsage; 
@property (copy,readonly) NSArray * applicationAndWebUsage; 
@property (copy,readonly) NSArray * pickups; 
@property (copy,readonly) NSArray * notifications; 
@property (copy,readonly) NSDate * firstPickup; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)keyPathsForValuesAffectingNotifications;
-(void)controllerDidChangeContent:(id)arg1 ;
-(NSFetchedResultsController *)fetchedResultsController;
-(NSDateInterval *)dateInterval;
-(NSArray *)pickups;
-(NSNumber *)userDSID;
-(NSArray *)notifications;
-(id)_categoryUsageWithoutAllUsageItem;
-(BOOL)includeTotalUsageDetailItem;
-(double)totalScreenTime;
-(NSSet *)installedBundleIdentifiers;
-(void)_updateInstalledBundleIdentifiers;
-(long long)totalNotifications;
-(long long)totalPickups;
-(void)_enumerateUsageBlocksWithUnitGranularity:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)_ratiosForCategory:(id)arg1 perCalendarUnit:(unsigned long long)arg2 useTotalScreenTime:(BOOL)arg3 ;
-(id)_firstPickupFromUsageBlocks:(id)arg1 ;
-(NSFetchedResultsController *)installedAppsController;
-(void)setInstalledBundleIdentifiers:(NSSet *)arg1 ;
-(id)initWithUsage:(id)arg1 dateInterval:(id)arg2 ;
-(BOOL)generateReport:(id*)arg1 ;
-(NSArray *)categoryUsage;
-(NSArray *)applicationAndWebUsage;
-(id)screenTimeUsagePerCalendarUnit:(unsigned long long)arg1 ;
-(id)categoryRatiosPerCalendarUnit:(unsigned long long)arg1 numberOfCategories:(unsigned long long)arg2 ;
-(id)ratiosForCategory:(id)arg1 perCalendarUnit:(unsigned long long)arg2 ;
-(id)ratiosForApplication:(id)arg1 perCalendarUnit:(unsigned long long)arg2 ;
-(id)ratiosForWebDomain:(id)arg1 perCalendarUnit:(unsigned long long)arg2 ;
-(id)pickupsPerCalendarUnit:(unsigned long long)arg1 ;
-(id)pickupRatiosForApplication:(id)arg1 perCalendarUnit:(unsigned long long)arg2 ;
-(NSDate *)firstPickup;
-(id)firstPickupOfIntervalWithMostPickups:(unsigned long long*)arg1 perCalendarUnit:(unsigned long long)arg2 ;
-(id)notificationsPerCalendarUnit:(unsigned long long)arg1 ;
-(id)notificationRatiosForApplication:(id)arg1 perCalendarUnit:(unsigned long long)arg2 ;
-(void)setIncludeTotalUsageDetailItem:(BOOL)arg1 ;
-(void)setInstalledAppsController:(NSFetchedResultsController *)arg1 ;
@end

