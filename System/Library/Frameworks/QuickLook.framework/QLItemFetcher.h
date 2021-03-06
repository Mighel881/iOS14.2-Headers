/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMapTable, NSNumber;

@interface QLItemFetcher : NSObject <NSSecureCoding> {

	NSMapTable* _observersToBlocks;
	long long _fetchingState;

}

@property (assign,nonatomic) long long fetchingState;              //@synthesize fetchingState=_fetchingState - In the implementation block
@property (readonly) NSNumber * itemSize; 
+(BOOL)supportsSecureCoding;
-(void)setFetchingState:(long long)arg1 ;
-(long long)fetchingState;
-(void)prepareShareableItem:(/*^block*/id)arg1 ;
-(id)fetchedContent;
-(id)newItemProvider;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(id)shareableItem;
-(BOOL)isLongFetchOperation;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)itemSize;
-(void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_notifyObservers;
-(BOOL)canBeCanceled;
-(void)cancelFetch;
-(void)registerObserver:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

