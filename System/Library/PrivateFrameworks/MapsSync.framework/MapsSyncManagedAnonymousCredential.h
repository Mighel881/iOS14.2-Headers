/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSData, NSDate, NSUUID, NSSet;

@interface MapsSyncManagedAnonymousCredential : NSManagedObject

@property (copy,nonatomic) NSData * anonymousId; 
@property (copy,nonatomic) NSDate * createTime; 
@property (copy,nonatomic) NSUUID * identifier; 
@property (copy,nonatomic) NSData * mapsToken; 
@property (copy,nonatomic) NSDate * mapsTokenCreatedAt; 
@property (assign,nonatomic) long long mapsTokenTTL; 
@property (copy,nonatomic) NSDate * modificationTime; 
@property (assign,nonatomic) long long positionIndex; 
@property (retain,nonatomic) NSSet * reviewedPlaces; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end
