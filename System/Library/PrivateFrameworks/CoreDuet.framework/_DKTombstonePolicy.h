/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray, NSPredicate;

@interface _DKTombstonePolicy : NSObject {

	NSArray* _requirements;
	NSPredicate* _predicateForEventsRequiredToBeTombstoned;
	NSPredicate* _eventPredicateForEventsRequiredToBeTombstoned;
	NSArray* _propertiesToFetchForTombstones;

}

@property (nonatomic,readonly) NSArray * requirements; 
@property (nonatomic,readonly) NSPredicate * predicateForEventsRequiredToBeTombstoned; 
@property (nonatomic,readonly) NSArray * propertiesToFetchForTombstones; 
+(id)defaultPolicy;
-(id)init;
-(NSPredicate *)predicateForEventsRequiredToBeTombstoned;
-(id)initWithRequirements:(id)arg1 ;
-(NSArray *)requirements;
-(NSArray *)propertiesToFetchForTombstones;
-(id)tombstonesForPartialEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2 ;
-(id)tombstonesForEvents:(id)arg1 resultingFromRequirementsWithIdentifiers:(id*)arg2 ;
@end
