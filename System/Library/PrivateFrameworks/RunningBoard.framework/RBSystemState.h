/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RunningBoard/RunningBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableSet, NSSet;

@interface RBSystemState : NSObject <NSCopying, NSMutableCopying> {

	NSMutableSet* _tags;
	BOOL _preventLaunch;
	BOOL _preventIdleSleep;
	NSMutableSet* _preventIdleSleepIdentifiers;
	NSMutableSet* _preventLaunchPredicates;

}

@property (nonatomic,readonly) BOOL preventIdleSleep;                             //@synthesize preventIdleSleep=_preventIdleSleep - In the implementation block
@property (nonatomic,readonly) BOOL preventLaunch;                                //@synthesize preventLaunch=_preventLaunch - In the implementation block
@property (nonatomic,readonly) NSSet * preventIdleSleepIdentifiers;               //@synthesize preventIdleSleepIdentifiers=_preventIdleSleepIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSSet * tags;                                 //@synthesize tags=_tags - In the implementation block
@property (nonatomic,copy,readonly) NSSet * preventLaunchPredicates;              //@synthesize preventLaunchPredicates=_preventLaunchPredicates - In the implementation block
-(BOOL)preventIdleSleep;
-(NSSet *)preventIdleSleepIdentifiers;
-(unsigned long long)hash;
-(NSSet *)tags;
-(BOOL)preventLaunch;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSSet *)preventLaunchPredicates;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

