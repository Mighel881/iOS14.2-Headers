/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSPersistentStoreRequest.h>

@class NSSet, NSNotification;

@interface NSSaveChangesRequest : NSPersistentStoreRequest {

	NSSet* _insertedObjects;
	NSSet* _updatedObjects;
	NSSet* _deletedObjects;
	NSSet* _optimisticallyLockedObjects;
	unsigned long long _flags;
	NSNotification* _mutatedObjectIDsNotification;

}

@property (readonly) NSSet * insertedObjects; 
@property (readonly) NSSet * updatedObjects; 
@property (readonly) NSSet * deletedObjects; 
@property (readonly) NSSet * lockedObjects; 
+(void)initialize;
-(BOOL)hasChanges;
-(BOOL)_secureOperation;
-(void)_setSecureOperation:(BOOL)arg1 ;
-(id)init;
-(void)setDeletedObjects:(NSSet *)arg1 ;
-(NSSet *)insertedObjects;
-(id)initWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3 lockedObjects:(id)arg4 ;
-(unsigned long long)requestType;
-(id)description;
-(char)_retryHandlerCount;
-(NSSet *)updatedObjects;
-(NSSet *)deletedObjects;
-(NSSet *)lockedObjects;
-(void)_setChangedObjectIDsNotification:(id)arg1 ;
-(void)_setRetryHandlerCount:(char)arg1 ;
-(void)dealloc;
-(id)_changedObjectIDsNotification;
@end

