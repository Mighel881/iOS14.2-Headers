/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TipsDaemon/TipsDaemon-Structs.h>
#import <TipsCore/TPSSerializableObject.h>

@class NSString, NSArray, TPSContextualCondition;

@interface TPSContextualInfo : TPSSerializableObject {

	int _priority;
	long long _customizationID;
	long long _displayMaxCount;
	long long _lastModifiedDate;
	NSString* _identifier;
	NSArray* _displayBundleIDs;
	NSArray* _eligibleContext;
	NSArray* _usageEvents;
	TPSContextualCondition* _triggerCondition;
	TPSContextualCondition* _desiredOutcomeCondition;

}

@property (assign,nonatomic) long long customizationID;                                   //@synthesize customizationID=_customizationID - In the implementation block
@property (assign,nonatomic) long long displayMaxCount;                                   //@synthesize displayMaxCount=_displayMaxCount - In the implementation block
@property (assign,nonatomic) long long lastModifiedDate;                                  //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * displayBundleIDs;                                    //@synthesize displayBundleIDs=_displayBundleIDs - In the implementation block
@property (nonatomic,copy) NSArray * eligibleContext;                                     //@synthesize eligibleContext=_eligibleContext - In the implementation block
@property (nonatomic,copy) NSArray * usageEvents;                                         //@synthesize usageEvents=_usageEvents - In the implementation block
@property (nonatomic,copy) TPSContextualCondition * triggerCondition;                     //@synthesize triggerCondition=_triggerCondition - In the implementation block
@property (nonatomic,copy) TPSContextualCondition * desiredOutcomeCondition;              //@synthesize desiredOutcomeCondition=_desiredOutcomeCondition - In the implementation block
@property (nonatomic,readonly) int priority;                                              //@synthesize priority=_priority - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(id)contentDictionaryWithTipDeliveryInfoId:(id)arg1 deliveryInfoMap:(id)arg2 ;
+(void)eventsInfoArrayForContextualInfoDictionary:(id)arg1 triggerEvents:(id*)arg2 desiredOutcomeEvents:(id*)arg3 ;
+(id)identifierFromDictionary:(id)arg1 ;
-(NSArray *)eligibleContext;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setLastModifiedDate:(long long)arg1 ;
-(NSString *)identifier;
-(long long)customizationID;
-(void)setTriggerCondition:(TPSContextualCondition *)arg1 ;
-(TPSContextualCondition *)triggerCondition;
-(void)setEligibleContext:(NSArray *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(int)priority;
-(id)initWithCoder:(id)arg1 ;
-(long long)lastModifiedDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)triggerEventIdentifiers;
-(id)desiredOutcomeEventIdentifiers;
-(long long)_lastModifiedDateFromDictionary:(id)arg1 ;
-(void)setCustomizationID:(long long)arg1 ;
-(void)setDisplayMaxCount:(long long)arg1 ;
-(void)setDisplayBundleIDs:(NSArray *)arg1 ;
-(void)setUsageEvents:(NSArray *)arg1 ;
-(void)setDesiredOutcomeCondition:(TPSContextualCondition *)arg1 ;
-(id)displayBundleID;
-(BOOL)hasChangesFromDictionary:(id)arg1 ;
-(id)conditionForType:(unsigned long long)arg1 ;
-(void)restartTriggerTracking;
-(void)restartDesiredOutcomeTracking;
-(id)dismissalEventIdentifiers;
-(long long)displayMaxCount;
-(NSArray *)displayBundleIDs;
-(NSArray *)usageEvents;
-(TPSContextualCondition *)desiredOutcomeCondition;
@end

