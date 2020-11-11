/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData, NMSMutableMediaSyncInfo, NSOrderedSet;

@interface NMSMusicRecommendationsResponse : NSObject {

	NSData* _cachedData;
	NMSMutableMediaSyncInfo* _importedStoreContainerItemMappings;
	NSOrderedSet* _recommendations;

}

@property (nonatomic,readonly) NSData * cachedData;                                                       //@synthesize cachedData=_cachedData - In the implementation block
@property (nonatomic,readonly) NMSMutableMediaSyncInfo * importedStoreContainerItemMappings;              //@synthesize importedStoreContainerItemMappings=_importedStoreContainerItemMappings - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * recommendations;                                            //@synthesize recommendations=_recommendations - In the implementation block
-(NMSMutableMediaSyncInfo *)importedStoreContainerItemMappings;
-(NSData *)cachedData;
-(NSOrderedSet *)recommendations;
-(id)initWithCachedData:(id)arg1 importedStoreContainerItemMappings:(id)arg2 recommendations:(id)arg3 ;
@end
