/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSMutableArray, NSMutableSet, HMIDESMutableFloatArray, NSArray, NSSet, NSString;

@interface HMIMutableCluster : HMFObject <HMFLogging> {

	NSMutableArray* _faceprintUUIDs;
	NSMutableSet* _linkedEntityUUIDs;
	HMIDESMutableFloatArray* _centroid;

}

@property (readonly) HMIDESMutableFloatArray * centroid;              //@synthesize centroid=_centroid - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (readonly) NSArray * faceprintUUIDs; 
@property (readonly) NSSet * linkedEntityUUIDs; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(unsigned long long)count;
-(HMIDESMutableFloatArray *)centroid;
-(id)initWithFaceprint:(id)arg1 ;
-(NSArray *)faceprintUUIDs;
-(void)addLinkedEntityUUIDs:(id)arg1 ;
-(NSSet *)linkedEntityUUIDs;
-(void)addFaceprints:(id)arg1 ;
@end
