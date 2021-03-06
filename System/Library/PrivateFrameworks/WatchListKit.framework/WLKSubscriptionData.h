/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSArray;

@interface WLKSubscriptionData : NSObject <NSSecureCoding> {

	NSDictionary* _backingDictionary;
	NSArray* _subscriptionArray;
	NSDictionary* _account;
	NSDictionary* _family;
	NSDictionary* _subscriptionsByAdamID;
	long long _activeSubscriptionsCount;
	NSDictionary* _activeTVPlusSubscription;

}
+(BOOL)supportsSecureCoding;
-(id)subscriptions;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)currentFamily;
-(BOOL)isTVPlusSubscriber;
-(unsigned long long)activeSubscriptionsCount;
-(id)subscriptionByAdamID:(id)arg1 ;
-(id)currentAccount;
-(id)activeTVPlusSubscription;
-(BOOL)isEqualToSubscriptionData:(id)arg1 ;
@end

