/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSManagedObjectID, NSDictionary, NSPersistentHistoryTransaction, NSSet;

@interface NSPersistentHistoryChange : NSObject <NSCopying>

@property (readonly) long long changeID; 
@property (copy,readonly) NSManagedObjectID * changedObjectID; 
@property (readonly) long long changeType; 
@property (copy,readonly) NSDictionary * tombstone; 
@property (readonly) NSPersistentHistoryTransaction * transaction; 
@property (copy,readonly) NSSet * updatedProperties; 
+(id)entityDescription;
+(BOOL)supportsSecureCoding;
+(id)shortStringForChangeType:(long long)arg1 ;
+(id)fetchRequest;
+(id)stringForChangeType:(long long)arg1 ;
+(id)entityDescriptionWithContext:(id)arg1 ;
-(long long)changeType;
-(NSManagedObjectID *)changedObjectID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSSet *)updatedProperties;
-(BOOL)isEqual:(id)arg1 ;
-(NSPersistentHistoryTransaction *)transaction;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)tombstone;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)changeID;
@end

