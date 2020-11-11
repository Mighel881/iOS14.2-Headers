/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iCloudQuota.framework/iCloudQuota
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iCloudQuota/_ICQFlowSpecification.h>

@class NSDictionary;

@interface _ICQUpgradeFlowSpecification : _ICQFlowSpecification {

	NSDictionary* _serverDict;
	BOOL _needsWiFi;
	long long _offerType;

}

@property (assign,nonatomic) long long offerType;                      //@synthesize offerType=_offerType - In the implementation block
@property (assign,nonatomic) BOOL needsWiFi;                           //@synthesize needsWiFi=_needsWiFi - In the implementation block
@property (nonatomic,readonly) NSDictionary * serverDict; 
+(id)upgradeFlowSpecificationSampleForLevel:(long long)arg1 ;
+(id)_upgradePageIdentifierForError:(id)arg1 ;
+(id)sanitizedUpgradeFlowServerDict:(id)arg1 ;
-(long long)offerType;
-(void)setOfferType:(long long)arg1 ;
-(id)initWithServerDictionary:(id)arg1 ;
-(NSDictionary *)serverDict;
-(id)upgradeSuccessPage;
-(id)upgradeFailurePage;
-(id)upgradePageForSuccess:(BOOL)arg1 ;
-(id)upgradeSuccessPageForWiFi;
-(id)upgradeFailurePageForNetwork;
-(id)upgradePageForError:(id)arg1 ;
-(BOOL)needsWiFi;
-(void)setNeedsWiFi:(BOOL)arg1 ;
@end
