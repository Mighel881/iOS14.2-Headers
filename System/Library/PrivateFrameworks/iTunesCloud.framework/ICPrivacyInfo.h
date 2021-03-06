/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <iTunesCloud/iTunesCloud-Structs.h>
@class NSMutableDictionary;

@interface ICPrivacyInfo : NSObject {

	NSMutableDictionary* _cache;
	NSMutableDictionary* _observers;
	os_unfair_lock_s _lock;

}

@property (nonatomic,readonly) BOOL privacyAcknowledgementRequiredForMedia; 
@property (nonatomic,readonly) BOOL privacyAcknowledgementRequiredForMusic; 
+(id)sharedPrivacyInfo;
+(BOOL)_queryPrivacyAcknowledgementRequiredForIdentifier:(id)arg1 ;
+(id)_onboardingKitPrivacyIdentifierForPrivacyIdentifier:(id)arg1 ;
-(void)_handleUserIdentityStoreDidChangeNotification:(id)arg1 ;
-(BOOL)privacyAcknowledgementRequiredForMusic;
-(id)init;
-(void)acknowledgePrivacyPolicyForIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)privacyAcknowledgementRequiredForIdentifier:(id)arg1 ;
-(BOOL)privacyAcknowledgementRequiredForBundleIdentifier:(id)arg1 ;
-(id)beginObservingPrivacyAcknowledgementForIdentifier:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)endObservingPrivacyAcknowledgementForIdentifier:(id)arg1 withToken:(id)arg2 ;
-(void)_updateForPrivacyAcknowledgementChanged;
-(BOOL)_privacyAcknowledgementRequiredForVideos;
-(BOOL)privacyAcknowledgementRequiredForMedia;
-(BOOL)_privacyAcknowledgementRequiredForIdentifier:(id)arg1 ;
@end

