/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class CTXPCServiceSubscriptionInfo, NSArray;

@interface IMCTXPCServiceSubscriptionInfo : NSObject {

	CTXPCServiceSubscriptionInfo* _subscriptionInfo;
	NSArray* _phoneNumbersOfActiveSubscriptions;

}

@property (nonatomic,retain) CTXPCServiceSubscriptionInfo * subscriptionInfo;              //@synthesize subscriptionInfo=_subscriptionInfo - In the implementation block
@property (nonatomic,retain) NSArray * phoneNumbersOfActiveSubscriptions;                  //@synthesize phoneNumbersOfActiveSubscriptions=_phoneNumbersOfActiveSubscriptions - In the implementation block
-(id)subscriptions;
-(void)setSubscriptionInfo:(CTXPCServiceSubscriptionInfo *)arg1 ;
-(id)__im_switchSubscriptionContextFromPhoneNumber:(id)arg1 simID:(id)arg2 ;
-(id)description;
-(id)__im_subscriptionContextForSenderIdentity:(id)arg1 ;
-(id)preferredOrDefaultSubscriptionContext;
-(id)__im_subscriptionContextForPhoneNumber:(id)arg1 ;
-(id)initWithSubscriptionInfo:(id)arg1 ;
-(CTXPCServiceSubscriptionInfo *)subscriptionInfo;
-(id)__im_subscriptionContextForForSimID:(id)arg1 phoneNumber:(id)arg2 ;
-(id)allSubscriptions;
-(id)__im_switchSubscriptionContextFromSubscriptionContext:(id)arg1 ;
-(id)__im_preferredSubscriptionContext;
-(id)__im_phoneNumberForSlotID:(long long)arg1 ;
-(id)_senderIdentityManager;
-(id)__im_subscriptionContextForForSlotID:(long long)arg1 ;
-(id)__im_subscriptionsWithMMSSupport;
-(BOOL)__im_containsPhoneNumber:(id)arg1 ;
-(BOOL)__im_onlyHasActiveSlots;
-(BOOL)__im_hasMultipleSubscriptions;
-(NSArray *)phoneNumbersOfActiveSubscriptions;
-(id)__im_phoneNumberForSlotIDOrDefault:(long long)arg1 ;
-(id)__im_labelForPhoneNumber:(id)arg1 simID:(id)arg2 ;
-(long long)__imSlotIDSForPhoneNumber:(id)arg1 ;
-(id)__imSIMIDForSubscriptionSlot:(long long)arg1 ;
-(id)__im_subscriptionContextOrDefaultForForSlotID:(long long)arg1 ;
-(id)__im_subscriptionContextForForSimID:(id)arg1 ;
-(id)__im_subscriptionContextForPhoneNumberOrDefault:(id)arg1 ;
-(id)__im_subscriptionContextOrDefaultForForSimID:(id)arg1 phoneNumber:(id)arg2 ;
-(id)__im_contactPreferredSubscriptionContextForChatHandleIDs:(id)arg1 ;
-(void)setPhoneNumbersOfActiveSubscriptions:(NSArray *)arg1 ;
@end
