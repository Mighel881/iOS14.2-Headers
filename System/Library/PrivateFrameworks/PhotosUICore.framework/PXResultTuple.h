/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PHFetchResult, NSPredicate;

@interface PXResultTuple : NSObject {

	BOOL _fetchedWithReverseSortOrder;
	PHFetchResult* _fetchResult;
	PHFetchResult* _curatedFetchResult;
	PHFetchResult* _keyAssetsFetchResult;
	NSPredicate* _filterPredicate;

}

@property (nonatomic,readonly) PHFetchResult * fetchResult;                       //@synthesize fetchResult=_fetchResult - In the implementation block
@property (nonatomic,readonly) BOOL fetchedWithReverseSortOrder;                  //@synthesize fetchedWithReverseSortOrder=_fetchedWithReverseSortOrder - In the implementation block
@property (nonatomic,readonly) PHFetchResult * curatedFetchResult;                //@synthesize curatedFetchResult=_curatedFetchResult - In the implementation block
@property (nonatomic,readonly) PHFetchResult * keyAssetsFetchResult;              //@synthesize keyAssetsFetchResult=_keyAssetsFetchResult - In the implementation block
@property (nonatomic,readonly) NSPredicate * filterPredicate;                     //@synthesize filterPredicate=_filterPredicate - In the implementation block
-(NSPredicate *)filterPredicate;
-(PHFetchResult *)curatedFetchResult;
-(PHFetchResult *)keyAssetsFetchResult;
-(id)initWithFetchResult:(id)arg1 fetchedWithReverseSortOrder:(BOOL)arg2 curatedFetchResult:(id)arg3 keyAssetsFetchResult:(id)arg4 filterPredicate:(id)arg5 ;
-(BOOL)fetchedWithReverseSortOrder;
-(id)resultTupleUpdatedWithChange:(id)arg1 ;
-(id)description;
-(PHFetchResult *)fetchResult;
@end

