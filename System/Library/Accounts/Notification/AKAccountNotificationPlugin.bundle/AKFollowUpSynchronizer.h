/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Accounts/Notification/AKAccountNotificationPlugin.bundle/AKAccountNotificationPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AKAccountNotificationPlugin/AKAppleIDAuthenticationDelegate.h>

@protocol AKFollowUpProvider;
@class AKAppleIDAuthenticationController, NSString;

@interface AKFollowUpSynchronizer : NSObject <AKAppleIDAuthenticationDelegate> {

	id<AKFollowUpProvider> _followupProvider;
	AKAppleIDAuthenticationController* _controller;

}

@property (nonatomic,retain) id<AKFollowUpProvider> followupProvider;                     //@synthesize followupProvider=_followupProvider - In the implementation block
@property (nonatomic,retain) AKAppleIDAuthenticationController * controller;              //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)updateSynchronizeTimeForAccount:(id)arg1 inStore:(id)arg2 ;
+(void)updateSynchronizeTimeNoSaveForAccount:(id)arg1 ;
-(AKAppleIDAuthenticationController *)controller;
-(BOOL)authenticationController:(id)arg1 shouldContinueWithAuthenticationResults:(id)arg2 error:(id)arg3 forContext:(id)arg4 ;
-(BOOL)shouldSynchronizeForAccount:(id)arg1 ;
-(id<AKFollowUpProvider>)followupProvider;
-(BOOL)synchronizeFollowUpsForAccount:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(void)setFollowupProvider:(id<AKFollowUpProvider>)arg1 ;
-(void)setController:(AKAppleIDAuthenticationController *)arg1 ;
-(id)_authController;
@end

