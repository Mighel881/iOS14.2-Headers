/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class NSUUID;

@interface HMDBackingStoreLogDropOperationsWithUUID : HMDBackingStoreOperation {

	NSUUID* _uuid;
	long long _maskValue;
	long long _compareValue;

}

@property (nonatomic,retain) NSUUID * uuid;                       //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long maskValue;                 //@synthesize maskValue=_maskValue - In the implementation block
@property (assign,nonatomic) long long compareValue;              //@synthesize compareValue=_compareValue - In the implementation block
-(void)setUuid:(NSUUID *)arg1 ;
-(NSUUID *)uuid;
-(id)mainReturningError;
-(long long)maskValue;
-(long long)compareValue;
-(void)setMaskValue:(long long)arg1 ;
-(void)setCompareValue:(long long)arg1 ;
-(id)initWithUUID:(id)arg1 pushingTo:(unsigned long long)arg2 resultBlock:(/*^block*/id)arg3 ;
@end

