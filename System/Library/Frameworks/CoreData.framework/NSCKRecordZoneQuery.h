/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSCKRecordZoneMetadata, NSString, NSDate, NSPredicate, CKQueryCursor;

@interface NSCKRecordZoneQuery : NSManagedObject

@property (nonatomic,retain) NSCKRecordZoneMetadata * recordZone; 
@property (nonatomic,retain) NSString * recordType; 
@property (nonatomic,retain) NSDate * lastFetchDate; 
@property (nonatomic,retain) NSPredicate * predicate; 
@property (nonatomic,retain) CKQueryCursor * queryCursor; 
+(id)zoneQueryForRecordType:(id)arg1 inZone:(id)arg2 inStore:(id)arg3 managedObjectContext:(id)arg4 error:(id*)arg5 ;
+(id)entityPath;
-(id)createQueryForUpdatingRecords;
@end
