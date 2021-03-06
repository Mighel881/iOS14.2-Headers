/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSUUID;

@interface REMResolutionToken : NSObject <NSSecureCoding, NSCopying> {

	long long _counter;
	double _modificationTime;
	NSUUID* _replicaID;

}

@property (assign,nonatomic) long long counter;                    //@synthesize counter=_counter - In the implementation block
@property (assign,nonatomic) double modificationTime;              //@synthesize modificationTime=_modificationTime - In the implementation block
@property (nonatomic,retain) NSUUID * replicaID;                   //@synthesize replicaID=_replicaID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)resolutionTokenWithJSONObject:(id)arg1 ;
-(long long)counter;
-(id)init;
-(double)modificationTime;
-(id)initWithDefaultValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setModificationTime:(double)arg1 ;
-(long long)compare:(id)arg1 ;
-(void)setReplicaID:(NSUUID *)arg1 ;
-(void)update;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSUUID *)replicaID;
-(id)initWithCoder:(id)arg1 ;
-(void)setCounter:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCounter:(long long)arg1 modificationTime:(double)arg2 replicaID:(id)arg3 ;
@end

