/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFOperation.h>

@protocol HMIHomePersonManagerDataSource;
@class NSSet;

@interface HMIRemoveFaceCropsOperation : HMFOperation {

	id<HMIHomePersonManagerDataSource> _dataSource;
	NSSet* _faceCropUUIDs;

}

@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) NSSet * faceCropUUIDs;                                      //@synthesize faceCropUUIDs=_faceCropUUIDs - In the implementation block
+(id)logCategory;
-(void)main;
-(id<HMIHomePersonManagerDataSource>)dataSource;
-(id)initWithDataSource:(id)arg1 faceCropUUIDs:(id)arg2 ;
-(NSSet *)faceCropUUIDs;
@end

