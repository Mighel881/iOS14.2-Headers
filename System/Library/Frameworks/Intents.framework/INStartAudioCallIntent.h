/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INStartAudioCallIntentExport.h>

@class NSArray, NSString;

@interface INStartAudioCallIntent : INIntent <INStartAudioCallIntentExport>

@property (nonatomic,readonly) BOOL useSpeaker; 
@property (nonatomic,readonly) long long destinationType; 
@property (nonatomic,copy,readonly) NSArray * contacts; 
@property (assign,nonatomic) long long audioRoute; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (assign,nonatomic) long long recordTypeForRedialing; 
@property (assign,setter=setTTYType:,nonatomic) long long ttyType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_ignoredParameters;
-(BOOL)cd_saveToPeopleStore;
-(id)cd_sender;
-(id)cd_groupName;
-(id)cd_recipients;
-(long long)cd_interactionMechanism;
-(id)verb;
-(void)_setMetadata:(id)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(void)setRecordTypeForRedialing:(long long)arg1 ;
-(long long)recordTypeForRedialing;
-(long long)ttyType;
-(NSArray *)contacts;
-(void)setDomain:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(void)setVerb:(id)arg1 ;
-(void)setDestinationType:(long long)arg1 ;
-(void)setTTYType:(long long)arg1 ;
-(void)setPreferredCallProvider:(long long)arg1 ;
-(id)initWithDestinationType:(long long)arg1 contacts:(id)arg2 ;
-(id)_validParameterCombinationsWithSchema:(id)arg1 ;
-(id)_currentParameterCombination;
-(id)_typedBackingStore;
-(long long)_intentCategory;
-(id)_categoryVerb;
-(void)setParametersByName:(id)arg1 ;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(long long)preferredCallProvider;
-(id)domain;
-(void)setAudioRoute:(long long)arg1 ;
-(long long)audioRoute;
-(BOOL)configureAttributeSet:(id)arg1 includingData:(BOOL)arg2 ;
-(BOOL)useSpeaker;
-(void)setUseSpeaker:(BOOL)arg1 ;
-(id)initWithContacts:(id)arg1 ;
-(id)_subtitleWithLocalizer:(id)arg1 fromBundleURL:(id)arg2 ;
-(long long)destinationType;
-(id)_spotlightContentType;
@end

