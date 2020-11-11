/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <TSUtility/TSUtility-Structs.h>
@interface TSULRUCacheElement : NSObject {

	atomic<unsigned long> _counter;
	id _object;
	unsigned long long _counterValue;

}

@property (nonatomic,readonly) id object;                                    //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) unsigned long long counterValue;              //@synthesize counterValue=_counterValue - In the implementation block
-(id)object;
-(unsigned long long)counterValue;
-(id)initWithObject:(id)arg1 counter:(unsigned long long)arg2 ;
-(void)p_updateCounter:(unsigned long long)arg1 ;
-(unsigned long long)p_counterValue;
@end
