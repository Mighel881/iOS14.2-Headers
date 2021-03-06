/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitBackingStore/HMBModel.h>

@class NSData;

@interface HMDPersonSettingsModel : HMBModel

@property (retain) NSData * classificationNotificationSettingsData; 
+(id)hmbProperties;
+(BOOL)hmbExcludeFromCloudStorage;
+(id)sentinelParentUUID;
+(id)sentinelModelUUID;
-(id)init;
-(id)classificationNotificationsEnabledForPersonUUID:(id)arg1 ;
-(void)setClassificationNotificationsEnabled:(id)arg1 forPersonUUID:(id)arg2 ;
-(id)unarchivedClassificationNotificationsEnabledForPersonUUID;
-(void)archiveClassificationNotificationsEnabledForPersonUUID:(id)arg1 ;
@end

