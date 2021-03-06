/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreModelObject.h>

@class NSNumber, NSString;

@interface HMDHomeMediaSettingsModel : HMDBackingStoreModelObject

@property (nonatomic,copy) NSNumber * minimumMediaUserPrivilege; 
@property (nonatomic,copy) NSNumber * mediaPeerToPeerEnabled; 
@property (nonatomic,copy) NSString * mediaPassword; 
+(id)properties;
+(id)modelIDForHome:(id)arg1 ;
+(id)defaultModelForHome:(id)arg1 ;
+(id)modelNamespace;
@end

