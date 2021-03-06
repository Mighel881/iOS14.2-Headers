/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RERelevanceProviderManager.h>
#import <libobjc.A.dylib/REPredictorObserver.h>
#import <libobjc.A.dylib/REActivityRelevanceProviderManagerProperties.h>

@class NSString;

@interface REActivityRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REActivityRelevanceProviderManagerProperties> {

	float _activeEnergy;
	float _exerciseTime;
	float _standHour;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) float activeEnergy; 
@property (nonatomic,readonly) float exerciseTime; 
@property (nonatomic,readonly) float standHour; 
+(id)_features;
+(Class)_relevanceProviderClass;
+(BOOL)_wantsSeperateRelevanceQueue;
-(id)initWithQueue:(id)arg1 ;
-(void)pause;
-(void)resume;
-(id)_valueForProvider:(id)arg1 feature:(id)arg2 ;
-(float)activeEnergy;
-(void)_prepareForUpdate;
-(void)predictorDidUpdate:(id)arg1 ;
-(float)exerciseTime;
-(float)standHour;
@end

