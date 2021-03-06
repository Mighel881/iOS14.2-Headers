/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosGraph/PGPotentialMemory.h>

@class NSMutableSet, PGGraphBusinessNode, NSString;

@interface PGPotentialBusinessMemory : PGPotentialMemory {

	NSMutableSet* _mutableMomentNodes;
	PGGraphBusinessNode* _businessNode;
	long long _year;

}

@property (readonly) PGGraphBusinessNode * businessNode;              //@synthesize businessNode=_businessNode - In the implementation block
@property (readonly) long long year;                                  //@synthesize year=_year - In the implementation block
@property (readonly) NSString * business; 
-(long long)year;
-(NSString *)business;
-(id)initWithBusinessNode:(id)arg1 year:(long long)arg2 ;
-(void)addMomentNode:(id)arg1 ;
-(PGGraphBusinessNode *)businessNode;
@end

