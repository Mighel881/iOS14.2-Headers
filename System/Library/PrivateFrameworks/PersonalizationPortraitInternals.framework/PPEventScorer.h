/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDictionary, EAEmailAddressSet, NSSet;

@interface PPEventScorer : NSObject {

	NSDictionary* _pastEventTitlesAndParticipants;
	double _earliestStartTime;
	BOOL _shouldConsiderAlarms;
	EAEmailAddressSet* _emailVIPEmailAddresses;
	NSSet* _favoritesEmailAddresses;
	int _rankingOptions;
	long long _pastTitlesCount;

}
+(void)setLocationsOfInterestLocations:(id)arg1 withReferenceDate:(id)arg2 ;
+(void)clearAssetCache;
+(id)emailAddressFromEKAttendee:(id)arg1 ;
+(id)eventScorerConfig;
+(id)participantsInEvent:(id)arg1 ;
+(id)cacheKeyforCoreRoutineCacheForStartDate:(id)arg1 endDate:(id)arg2 ;
+(BOOL)scoreIsExtraordinary:(double)arg1 rankingOptions:(int)arg2 ;
+(id)enrichDictionary:(id)arg1 withEvent:(id)arg2 ;
-(id)init;
-(id)scoreNotes:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreParticipantStatusAndCount:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreEvent:(id)arg1 usingDate:(id)arg2 ;
-(id)scorePastEventVolumesWithFeatureSchema:(id)arg1 ;
-(id)coreRoutineLocationsOfInterestLocationsUsingDate:(id)arg1 ;
-(id)scoreTravelTimeSet:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreDuration:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreAttachments:(id)arg1 withFeatureSchema:(id)arg2 ;
-(BOOL)isHomeCalendar:(id)arg1 ;
-(id)scoreAlarmIsSet:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreSelfAttendeeRole:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)favoriteEmailAddresses;
-(id)scoreCalendar:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreTitle:(id)arg1 withFeatureSchema:(id)arg2 ;
-(void)setFavoritesEmailAddresses:(id)arg1 ;
-(id)scoreUnusualStartTime:(id)arg1 withFeatureSchema:(id)arg2 ;
-(void)setEmailVIPEmailAddresses:(id)arg1 ;
-(id)initWithPastEventTitlesAndParticipants:(id)arg1 andEarliestStartTime:(double)arg2 shouldConsiderAlarms:(BOOL)arg3 withOptions:(int)arg4 ;
-(id)scoreAvailabilityStatus:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreParticipantsInEmailVIPAndFavorites:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreURL:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreRecurrenceRules:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreParticipantsInPast:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreSuggestionsInfo:(id)arg1 withFeatureSchema:(id)arg2 ;
-(id)scoreContentModifications:(id)arg1 withFeatureSchema:(id)arg2 ;
-(BOOL)isWorkCalendar:(id)arg1 ;
-(id)scoreCoreRoutine:(id)arg1 usingDate:(id)arg2 withFeatureSchema:(id)arg3 ;
-(id)emailVIPEmailAddresses;
@end

