/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSConditionLock.h>

@interface _EFLazyCacheConditionLock : NSConditionLock {

	Aq _waiterCount;

}

@property (readonly) long long waiterCount; 
-(void)decrementWaiterCount;
-(void)incrementWaiterCount;
-(long long)waiterCount;
-(id)initWithCondition:(long long)arg1 ;
@end
