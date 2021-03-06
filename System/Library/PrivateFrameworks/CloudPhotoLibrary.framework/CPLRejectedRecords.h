/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface CPLRejectedRecords : NSObject {

	NSMutableDictionary* _records;
	NSMutableDictionary* _reasons;

}
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(unsigned long long)count;
-(BOOL)isEqual:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)recordWithScopedIdentifier:(id)arg1 ;
-(void)removeRejectedRecordsWithScopedIdentifiers:(id)arg1 ;
-(void)enumerateRecordsAndReasonsUsingBlock:(/*^block*/id)arg1 ;
-(BOOL)rejectsTheSameRecordsAs:(id)arg1 ;
-(id)rejectedDescriptions;
@end

