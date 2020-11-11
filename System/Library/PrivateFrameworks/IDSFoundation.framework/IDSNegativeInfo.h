/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDSFoundation/IDSFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface IDSNegativeInfo : NSObject <NSCopying> {

	double _time;
	long long _count;

}

@property (nonatomic,readonly) double time;                  //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) long long count;              //@synthesize count=_count - In the implementation block
-(long long)count;
-(id)description;
-(double)time;
-(id)initWithTime:(double)arg1 count:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
