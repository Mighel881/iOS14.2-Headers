/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSUserDefaults, HKObserverSet, NSArray, NSString, NSDateComponents, NSDate;

@interface HKMCSettingsManager : NSObject {

	NSUserDefaults* _menstrualCyclesDefaults;
	HKObserverSet* _observers;
	NSArray* _allSettingsToObserve;
	int _hiddenDisplayTypesNotifyToken;
	int _analysisSettingsNotifyToken;
	int _notificationSettingsNotifyToken;
	int _algorithmVersionMismatchSettingsNotifyToken;

}

@property (assign,nonatomic) BOOL menstruationProjectionsEnabled; 
@property (assign,nonatomic) BOOL fertileWindowProjectionsEnabled; 
@property (assign,nonatomic) long long minimumAnalysisStartDayIndex; 
@property (assign,nonatomic) BOOL menstruationProjectionsDisabledForVersionMismatch; 
@property (assign,nonatomic) BOOL fertileWindowProjectionsDisabledForVersionMismatch; 
@property (nonatomic,retain) NSString * localizedTextForVersionMismatchAndDisabledProjections; 
@property (assign,nonatomic) BOOL menstruationNotificationsEnabled; 
@property (assign,nonatomic) BOOL fertileWindowNotificationsEnabled; 
@property (nonatomic,readonly) BOOL notificationsEnabled; 
@property (nonatomic,retain) NSDateComponents * menstruationNotificationTimeOfDay; 
@property (nonatomic,retain) NSDateComponents * fertileWindowNotificationTimeOfDay; 
@property (nonatomic,retain) NSDate * cycleTrackingOnboardingTileDismissedDate; 
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)removeObserver:(id)arg1 ;
-(id)init;
-(BOOL)notificationsEnabled;
-(void)addObserver:(id)arg1 queue:(id)arg2 ;
-(void)_startObservingDefaults;
-(void)dealloc;
-(void)_startObservingNPSNotifications;
-(void)_stopObservingAllDefaults;
-(void)_stopObservingNPSNotifications;
-(void)_analysisSettingsDidUpdate;
-(void)_notificationSettingsDidUpdate;
-(void)_hiddenDisplayTypesDidUpdate;
-(void)_algorithmVersionMismatchSettingsDidUpdate;
-(BOOL)menstruationProjectionsDisabledForVersionMismatch;
-(BOOL)fertileWindowProjectionsDisabledForVersionMismatch;
-(BOOL)menstruationNotificationsEnabled;
-(BOOL)fertileWindowNotificationsEnabled;
-(void)setHidden:(BOOL)arg1 forDisplayTypeIdentifiers:(id)arg2 ;
-(void)_setTestDefaults:(id)arg1 ;
-(BOOL)menstruationProjectionsEnabled;
-(void)setMenstruationProjectionsEnabled:(BOOL)arg1 ;
-(BOOL)fertileWindowProjectionsEnabled;
-(void)setFertileWindowProjectionsEnabled:(BOOL)arg1 ;
-(void)setMenstruationProjectionsDisabledForVersionMismatch:(BOOL)arg1 ;
-(void)setFertileWindowProjectionsDisabledForVersionMismatch:(BOOL)arg1 ;
-(long long)minimumAnalysisStartDayIndex;
-(void)setMinimumAnalysisStartDayIndex:(long long)arg1 ;
-(NSString *)localizedTextForVersionMismatchAndDisabledProjections;
-(void)setLocalizedTextForVersionMismatchAndDisabledProjections:(NSString *)arg1 ;
-(void)setMenstruationNotificationsEnabled:(BOOL)arg1 ;
-(NSDateComponents *)menstruationNotificationTimeOfDay;
-(void)setMenstruationNotificationTimeOfDay:(NSDateComponents *)arg1 ;
-(void)setFertileWindowNotificationsEnabled:(BOOL)arg1 ;
-(NSDateComponents *)fertileWindowNotificationTimeOfDay;
-(void)setFertileWindowNotificationTimeOfDay:(NSDateComponents *)arg1 ;
-(NSDate *)cycleTrackingOnboardingTileDismissedDate;
-(void)setCycleTrackingOnboardingTileDismissedDate:(NSDate *)arg1 ;
-(void)setHidden:(BOOL)arg1 forDisplayTypeIdentifier:(id)arg2 ;
-(void)setMenstruationTrackingDisplayTypesHidden:(BOOL)arg1 ;
-(void)setFertilityTrackingDisplayTypesHidden:(BOOL)arg1 ;
-(BOOL)hiddenForDisplayTypeIdentifier:(id)arg1 ;
-(void)resetAllSettings;
@end
