/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSSet, NSObject, NSDate;

@interface FCFetchGroup : NSObject {

	BOOL _shouldFilter;
	BOOL _isUserFacing;
	NSSet* _keys;
	id _context;
	long long _qualityOfService;
	long long _relativePriority;
	unsigned long long _numberOfFetchAttempts;
	NSObject*<OS_dispatch_queue> _completionQueue;
	/*^block*/id _completion;
	NSDate* _requestDate;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> completionQueue;              //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,copy,readonly) id completion;                                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSDate * requestDate;                                        //@synthesize requestDate=_requestDate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * keys;                                         //@synthesize keys=_keys - In the implementation block
@property (nonatomic,readonly) id context;                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL shouldFilter;                                         //@synthesize shouldFilter=_shouldFilter - In the implementation block
@property (nonatomic,readonly) long long qualityOfService;                                //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,readonly) long long relativePriority;                                //@synthesize relativePriority=_relativePriority - In the implementation block
@property (nonatomic,readonly) BOOL isUserFacing;                                         //@synthesize isUserFacing=_isUserFacing - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfFetchAttempts;                    //@synthesize numberOfFetchAttempts=_numberOfFetchAttempts - In the implementation block
-(void)fireCompletion;
-(NSSet *)keys;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(long long)qualityOfService;
-(id)completion;
-(unsigned long long)numberOfFetchAttempts;
-(long long)comparePriority:(id)arg1 ;
-(id)context;
-(BOOL)shouldFilter;
-(id)initWithKeys:(id)arg1 context:(id)arg2 shouldFilter:(BOOL)arg3 qualityOfService:(long long)arg4 relativePriority:(long long)arg5 completionQueue:(id)arg6 completion:(/*^block*/id)arg7 ;
-(void)setRequestDate:(NSDate *)arg1 ;
-(long long)relativePriority;
-(BOOL)isUserFacing;
-(void)setNumberOfFetchAttempts:(unsigned long long)arg1 ;
-(NSDate *)requestDate;
@end

