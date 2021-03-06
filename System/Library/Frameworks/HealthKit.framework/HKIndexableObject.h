/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HKIndexableObject : NSObject {

	id _object;
	unsigned long long _compoundIndex;

}

@property (nonatomic,copy,readonly) id object;                                //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) unsigned long long compoundIndex;              //@synthesize compoundIndex=_compoundIndex - In the implementation block
@property (nonatomic,readonly) unsigned char outermostIndex; 
+(id)indexableObjectWithObject:(id)arg1 index:(unsigned char)arg2 error:(id*)arg3 ;
+(id)indexableObjectsByApplyingOutermostIndex:(id)arg1 expectedCount:(long long)arg2 error:(id*)arg3 ;
+(id)indexableObjectWithObject:(id)arg1 compoundIndex:(unsigned long long)arg2 ;
+(id)indexableObjectWithObject:(id)arg1 ;
-(id)init;
-(unsigned char)outermostIndex;
-(id)initWithObject:(id)arg1 compoundIndex:(unsigned long long)arg2 ;
-(id)indexableObjectPoppingIndexWithError:(id*)arg1 ;
-(unsigned long long)compoundIndex;
-(id)indexableObjectCollectingPushingIndex:(unsigned char)arg1 error:(id*)arg2 ;
-(id)object;
@end

