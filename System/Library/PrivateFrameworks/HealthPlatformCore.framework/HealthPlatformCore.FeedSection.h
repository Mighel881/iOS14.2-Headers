/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthPlatformCore.framework/HealthPlatformCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, _TtC18HealthPlatformCore4Feed, NSOrderedSet;

@interface HealthPlatformCore.FeedSection : NSManagedObject

@property (copy,nonatomic) NSString * identifier; 
@property (retain,nonatomic) _TtC18HealthPlatformCore4Feed * feed; 
@property (retain,nonatomic) NSOrderedSet * feedItems; 
@property (assign,nonatomic) BOOL isCollapsible; 
@property (assign,nonatomic) long long sortOrder; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

