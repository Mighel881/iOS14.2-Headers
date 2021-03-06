/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItem.h>
#import <libobjc.A.dylib/HUTriggerLikeItem.h>

@protocol HUTriggerLikeItem;
@class HMHome, HFItem, NSDictionary, NSArray, NSNumber, HFTriggerNaturalLanguageOptions, HFTriggerItem, HURecommendationItem, HMTrigger, NSString;

@interface HUAvailableTriggerItem : HFItem <HUTriggerLikeItem> {

	HMHome* _home;
	HFItem*<HUTriggerLikeItem> _sourceItem;
	NSDictionary* _naturalLanguageTitleOptions;
	NSArray* _relatedServiceLikeItems;
	NSNumber* _activeValue;
	HFTriggerNaturalLanguageOptions* _triggerNaturalLanguageOptions;

}

@property (nonatomic,retain) NSNumber * activeValue;                                                       //@synthesize activeValue=_activeValue - In the implementation block
@property (nonatomic,readonly) HFItem*<HFServiceLikeItem> preferredRelatedItem; 
@property (nonatomic,retain) HFTriggerNaturalLanguageOptions * triggerNaturalLanguageOptions;              //@synthesize triggerNaturalLanguageOptions=_triggerNaturalLanguageOptions - In the implementation block
@property (nonatomic,readonly) HMHome * home;                                                              //@synthesize home=_home - In the implementation block
@property (nonatomic,readonly) HFItem*<HUTriggerLikeItem> sourceItem;                                      //@synthesize sourceItem=_sourceItem - In the implementation block
@property (nonatomic,readonly) HFTriggerItem * triggerItem; 
@property (nonatomic,readonly) HURecommendationItem * recommendationItem; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,retain) NSDictionary * naturalLanguageTitleOptions;                                   //@synthesize naturalLanguageTitleOptions=_naturalLanguageTitleOptions - In the implementation block
@property (nonatomic,retain) NSArray * relatedServiceLikeItems;                                            //@synthesize relatedServiceLikeItems=_relatedServiceLikeItems - In the implementation block
@property (nonatomic,readonly) HMTrigger * trigger; 
@property (nonatomic,readonly) NSString * identifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setActive:(BOOL)arg1 ;
-(HMTrigger *)trigger;
-(NSString *)identifier;
-(BOOL)isActive;
-(void)setSourceItem:(HFItem*<HUTriggerLikeItem>)arg1 ;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(HFItem*<HUTriggerLikeItem>)sourceItem;
-(HMHome *)home;
-(void)resetActiveToDefault;
-(HURecommendationItem *)recommendationItem;
-(id)buildersForActivating:(BOOL)arg1 inHome:(id)arg2 withContext:(id)arg3 serviceLikeItems:(id)arg4 ;
-(HFTriggerItem *)triggerItem;
-(id)matchingTrigger;
-(id)recommendationNaturalLanguageTitleWithOptions:(id)arg1 ;
-(void)setNaturalLanguageTitleOptions:(NSDictionary *)arg1 ;
-(id)initWithHome:(id)arg1 containingItem:(id)arg2 relatedToServiceLikeItems:(id)arg3 ;
-(void)setActiveValue:(NSNumber *)arg1 ;
-(NSArray *)relatedServiceLikeItems;
-(id)removalTriggerBuildersForTriggers:(id)arg1 home:(id)arg2 context:(id)arg3 relatedItems:(id)arg4 ;
-(NSNumber *)activeValue;
-(NSDictionary *)naturalLanguageTitleOptions;
-(void)_updateNaturalLanguageOptions;
-(HFTriggerNaturalLanguageOptions *)triggerNaturalLanguageOptions;
-(void)setTriggerNaturalLanguageOptions:(HFTriggerNaturalLanguageOptions *)arg1 ;
-(void)replaceSourceItem:(id)arg1 ;
-(HFItem*<HFServiceLikeItem>)preferredRelatedItem;
-(void)setRelatedServiceLikeItems:(NSArray *)arg1 ;
@end

