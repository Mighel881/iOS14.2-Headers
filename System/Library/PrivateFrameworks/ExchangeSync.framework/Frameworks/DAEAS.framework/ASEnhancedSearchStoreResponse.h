/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DAEAS/ASItem.h>

@class NSString, NSNumber, NSMutableArray, NSArray;

@interface ASEnhancedSearchStoreResponse : ASItem {

	NSString* _store;
	NSNumber* _status;
	NSNumber* _total;
	NSString* _range;
	NSMutableArray* _mResults;

}

@property (nonatomic,retain) NSMutableArray * mResults;              //@synthesize mResults=_mResults - In the implementation block
@property (nonatomic,readonly) NSArray * results; 
@property (nonatomic,copy) NSString * store;                         //@synthesize store=_store - In the implementation block
@property (nonatomic,copy) NSNumber * status;                        //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) NSNumber * total;                         //@synthesize total=_total - In the implementation block
@property (nonatomic,copy) NSString * range;                         //@synthesize range=_range - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(NSArray *)results;
-(NSString *)range;
-(NSNumber *)total;
-(void)setRange:(NSString *)arg1 ;
-(NSNumber *)status;
-(void)addResult:(id)arg1 ;
-(void)setStatus:(NSNumber *)arg1 ;
-(void)setTotal:(NSNumber *)arg1 ;
-(id)description;
-(NSString *)store;
-(void)setStore:(NSString *)arg1 ;
-(NSMutableArray *)mResults;
-(void)setMResults:(NSMutableArray *)arg1 ;
@end
