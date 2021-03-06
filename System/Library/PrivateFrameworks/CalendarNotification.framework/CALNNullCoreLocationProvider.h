/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:11 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarNotification.framework/CalendarNotification
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CALNCoreLocationProvider.h>

@class NSString;

@interface CALNNullCoreLocationProvider : NSObject <CALNCoreLocationProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(int)authorizationStatusForBundle:(id)arg1 ;
-(int)authorizationStatusForBundleIdentifier:(id)arg1 ;
-(void)markAsHavingReceivedLocationWithEffectiveBundleIdentifier:(id)arg1 ;
-(BOOL)preciseLocationAuthorizedForBundle:(id)arg1 ;
-(BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)arg1 ;
@end

