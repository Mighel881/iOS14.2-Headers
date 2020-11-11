/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class PSIGroupResult, NSArray, NSString;

@interface PLSearchResult : NSObject {

	PSIGroupResult* _groupResult;

}

@property (nonatomic,readonly) PSIGroupResult * groupResult;                 //@synthesize groupResult=_groupResult - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long categoryMask; 
@property (nonatomic,readonly) NSArray * searchTokens; 
@property (nonatomic,readonly) NSArray * contentStrings; 
@property (nonatomic,readonly) NSArray * lookupIdentifiers; 
@property (nonatomic,readonly) NSArray * matchRanges; 
@property (nonatomic,readonly) NSString * transientToken; 
@property (nonatomic,readonly) NSString * keyAssetUUID; 
@property (nonatomic,readonly) unsigned long long assetCount; 
@property (nonatomic,readonly) NSString * groupDescription; 
@property (readonly) NSString * owningContentString; 
-(NSArray *)searchTokens;
-(NSString *)transientToken;
-(long long)categoryAtIndex:(long long)arg1 ;
-(NSString *)keyAssetUUID;
-(NSArray *)matchRanges;
-(unsigned long long)type;
-(NSArray *)contentStrings;
-(NSArray *)lookupIdentifiers;
-(NSString *)owningContentString;
-(id)tokensAtIndex:(long long)arg1 ;
-(id)matchRangesAtIndex:(long long)arg1 ;
-(BOOL)isContentStringTextSearchableAtIndex:(long long)arg1 ;
-(BOOL)isMatchedByIdentifierAtIndex:(long long)arg1 ;
-(BOOL)isImplicitlyTokenized;
-(unsigned long long)assetCount;
-(unsigned long long)categoryMask;
-(NSString *)groupDescription;
-(PSIGroupResult *)groupResult;
-(id)initWithGroupResult:(id)arg1 ;
-(unsigned long long)groupCount;
@end
