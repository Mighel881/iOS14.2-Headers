/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface PXSectionedChangeDetailsRepository : NSObject {

	NSMutableArray* _allChangeDetails;
	NSObject*<OS_dispatch_queue> _internalQueue;
	long long _historyLimit;

}

@property (nonatomic,readonly) long long historyLimit;              //@synthesize historyLimit=_historyLimit - In the implementation block
-(id)init;
-(long long)historyLimit;
-(id)changeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
-(id)coalescedChangeDetailsFromDataSourceIdentifier:(unsigned long long)arg1 toDataSourceIdentifier:(unsigned long long)arg2 ;
-(void)addChangeDetails:(id)arg1 ;
-(id)initWithChangeHistoryLimit:(long long)arg1 ;
@end

