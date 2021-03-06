/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BiomePubSub.framework/BiomePubSub
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BiomePubSub/BPSPublisher.h>

@class NSArray;

@interface BPSOrderedMerge : BPSPublisher {

	NSArray* _publishers;
	/*^block*/id _comparator;

}

@property (nonatomic,readonly) NSArray * publishers;              //@synthesize publishers=_publishers - In the implementation block
@property (nonatomic,copy) id comparator;                         //@synthesize comparator=_comparator - In the implementation block
-(id)bookmarkableUpstreams;
-(id)initWithUpstreams:(id)arg1 bookmarkState:(id)arg2 ;
-(BOOL)canStoreInternalStateInBookmark;
-(id)comparator;
-(id)init;
-(void)subscribe:(id)arg1 ;
-(NSArray *)publishers;
-(void)setComparator:(id)arg1 ;
-(id)initWithPublishers:(id)arg1 comparator:(/*^block*/id)arg2 ;
-(id)initWithA:(id)arg1 b:(id)arg2 comparator:(/*^block*/id)arg3 ;
@end

