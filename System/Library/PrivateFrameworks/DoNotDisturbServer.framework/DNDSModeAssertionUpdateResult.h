/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface DNDSModeAssertionUpdateResult : NSObject <NSCopying> {

	NSArray* _assertions;
	NSArray* _invalidations;

}

@property (nonatomic,copy,readonly) NSArray * assertions;                 //@synthesize assertions=_assertions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * invalidations;              //@synthesize invalidations=_invalidations - In the implementation block
+(id)emptyResult;
-(NSArray *)assertions;
-(id)initWithAssertions:(id)arg1 invalidations:(id)arg2 ;
-(id)resultCombiningWithResult:(id)arg1 ;
-(NSArray *)invalidations;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

