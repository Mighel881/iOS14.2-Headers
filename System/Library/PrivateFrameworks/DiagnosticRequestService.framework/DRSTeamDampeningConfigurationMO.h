/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, DRSDampeningConfigurationMO, DRSDampeningManagerMO;

@interface DRSTeamDampeningConfigurationMO : NSManagedObject

@property (nonatomic,copy) NSString * teamID; 
@property (nonatomic,retain) NSSet * categoryConfigurations; 
@property (nonatomic,retain) DRSDampeningConfigurationMO * defaultConfiguration; 
@property (nonatomic,retain) DRSDampeningManagerMO * parentDampeningManager; 
+(id)fetchRequest;
@end

