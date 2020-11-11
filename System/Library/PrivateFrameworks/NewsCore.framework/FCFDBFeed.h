/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSManagedObject.h>

@class NSString, NSNumber, NSDate, NSOrderedSet;

@interface FCFDBFeed : NSManagedObject

@property (nonatomic,retain) NSString * feedID; 
@property (assign,nonatomic) NSNumber * lookupID; 
@property (nonatomic,retain) NSDate * refreshDate; 
@property (assign,nonatomic) unsigned long long refreshedToOrder; 
@property (nonatomic,retain) NSOrderedSet * segments; 
-(id)prune;
-(void)willTurnIntoFault;
-(void)awakeFromFetch;
-(void)willAccessFeedRange:(id)arg1 ;
-(id)firstSegmentFollowingFeedRange:(id)arg1 ;
-(void)enumerateGapsWithBlock:(/*^block*/id)arg1 ;
-(void)insertSegment:(id)arg1 ;
-(void)_visitContiguousSegmentsInRange:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)contiguousRangeInRange:(id)arg1 ;
-(id)contiguousSegmentsInFeedRange:(id)arg1 ;
-(void)insertFeedItems:(id)arg1 ckCursor:(id)arg2 plausibleRange:(id)arg3 segmentEntity:(id)arg4 itemEntity:(id)arg5 itemIndexEntity:(id)arg6 moc:(id)arg7 indexFeatures:(BOOL)arg8 ;
@end
