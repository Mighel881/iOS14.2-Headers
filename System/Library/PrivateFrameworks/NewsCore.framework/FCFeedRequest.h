/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:53 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FCFeedRange, FCFeedItemFeature;

@interface FCFeedRequest : NSObject <NSCopying> {

	BOOL _cachedOnly;
	NSString* _feedID;
	long long _feedBin;
	FCFeedRange* _feedRange;
	unsigned long long _maxCount;
	FCFeedItemFeature* _requiredFeature;

}

@property (nonatomic,copy) NSString * feedID;                                //@synthesize feedID=_feedID - In the implementation block
@property (assign,nonatomic) long long feedBin;                              //@synthesize feedBin=_feedBin - In the implementation block
@property (nonatomic,copy) FCFeedRange * feedRange;                          //@synthesize feedRange=_feedRange - In the implementation block
@property (assign,nonatomic) unsigned long long maxCount;                    //@synthesize maxCount=_maxCount - In the implementation block
@property (assign,nonatomic) BOOL cachedOnly;                                //@synthesize cachedOnly=_cachedOnly - In the implementation block
@property (nonatomic,copy) FCFeedItemFeature * requiredFeature;              //@synthesize requiredFeature=_requiredFeature - In the implementation block
-(FCFeedRange *)feedRange;
-(unsigned long long)maxCount;
-(void)setFeedID:(NSString *)arg1 ;
-(BOOL)cachedOnly;
-(void)setRequiredFeature:(FCFeedItemFeature *)arg1 ;
-(void)setCachedOnly:(BOOL)arg1 ;
-(void)setFeedRange:(FCFeedRange *)arg1 ;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(FCFeedItemFeature *)requiredFeature;
-(NSString *)feedID;
-(long long)feedBin;
-(void)setFeedBin:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

