/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PSITopAssetsResultDelegate, OS_dispatch_queue;
#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSObject, NSArray;

@interface PSITopAssetsResult : NSObject {

	id<PSITopAssetsResultDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSArray* _assetUUIDs;
	const CFArrayRef _assetIds;

}

@property (nonatomic,retain) const CFArrayRef assetIds;                                   //@synthesize assetIds=_assetIds - In the implementation block
@property (assign,nonatomic,__weak) id<PSITopAssetsResultDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long assetMatchCount; 
@property (nonatomic,readonly) NSArray * assetUUIDs; 
-(id)init;
-(id<PSITopAssetsResultDelegate>)delegate;
-(void)setAssetIds:(const CFArrayRef)arg1 ;
-(void)setDelegate:(id<PSITopAssetsResultDelegate>)arg1 ;
-(unsigned long long)assetMatchCount;
-(void)fetchAssetUUIDsWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSArray *)assetUUIDs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(const CFArrayRef)assetIds;
-(void)dealloc;
@end
