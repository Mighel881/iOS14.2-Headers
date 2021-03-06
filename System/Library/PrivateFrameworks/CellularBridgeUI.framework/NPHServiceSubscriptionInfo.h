/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CellularBridgeUI.framework/CellularBridgeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CTXPCServiceSubscriptionContext, NSString, NSError;

@interface NPHServiceSubscriptionInfo : NSObject {

	BOOL _shouldShowAddNewRemotePlan;
	BOOL _shouldOfferRemotePlan;
	BOOL _shouldOfferTrialPlan;
	BOOL _shouldOfferSignupCompletion;
	CTXPCServiceSubscriptionContext* _serviceSubscriptionContext;
	NSString* _trialPlanType;
	NSString* _SIMStatus;
	unsigned long long _planFlows;
	NSError* _persistentError;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionContext * serviceSubscriptionContext;              //@synthesize serviceSubscriptionContext=_serviceSubscriptionContext - In the implementation block
@property (assign,nonatomic) BOOL shouldShowAddNewRemotePlan;                                           //@synthesize shouldShowAddNewRemotePlan=_shouldShowAddNewRemotePlan - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferRemotePlan;                                                //@synthesize shouldOfferRemotePlan=_shouldOfferRemotePlan - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferTrialPlan;                                                 //@synthesize shouldOfferTrialPlan=_shouldOfferTrialPlan - In the implementation block
@property (assign,nonatomic) BOOL shouldOfferSignupCompletion;                                          //@synthesize shouldOfferSignupCompletion=_shouldOfferSignupCompletion - In the implementation block
@property (nonatomic,retain) NSString * trialPlanType;                                                  //@synthesize trialPlanType=_trialPlanType - In the implementation block
@property (setter=IMStatus,nonatomic,retain) NSString * SIMStatus;                                      //@synthesize SIMStatus=_SIMStatus - In the implementation block
@property (assign,nonatomic) unsigned long long planFlows;                                              //@synthesize planFlows=_planFlows - In the implementation block
@property (nonatomic,retain) NSError * persistentError;                                                 //@synthesize persistentError=_persistentError - In the implementation block
-(id)description;
-(void)setSIMStatus:(NSString *)arg1 ;
-(NSString *)SIMStatus;
-(NSString *)trialPlanType;
-(CTXPCServiceSubscriptionContext *)serviceSubscriptionContext;
-(BOOL)shouldShowAddNewRemotePlan;
-(BOOL)shouldOfferRemotePlan;
-(BOOL)shouldOfferTrialPlan;
-(BOOL)shouldOfferSignupCompletion;
-(unsigned long long)planFlows;
-(NSError *)persistentError;
-(void)setServiceSubscriptionContext:(CTXPCServiceSubscriptionContext *)arg1 ;
-(void)setShouldShowAddNewRemotePlan:(BOOL)arg1 ;
-(void)setShouldOfferRemotePlan:(BOOL)arg1 ;
-(void)setShouldOfferTrialPlan:(BOOL)arg1 ;
-(void)setShouldOfferSignupCompletion:(BOOL)arg1 ;
-(void)setTrialPlanType:(NSString *)arg1 ;
-(void)setPlanFlows:(unsigned long long)arg1 ;
-(void)setPersistentError:(NSError *)arg1 ;
@end

