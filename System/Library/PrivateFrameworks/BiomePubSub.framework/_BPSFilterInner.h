/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BPSFilterProducer.h>

@interface _BPSFilterInner : BPSFilterProducer {

	/*^block*/id _isIncluded;

}

@property (nonatomic,readonly) id isIncluded;              //@synthesize isIncluded=_isIncluded - In the implementation block
-(id)isIncluded;
-(id)initWithDownstream:(id)arg1 isIncluded:(/*^block*/id)arg2 ;
-(id)receiveNewValue:(id)arg1 ;
@end
