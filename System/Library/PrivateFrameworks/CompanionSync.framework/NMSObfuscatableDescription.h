/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableArray;

@interface NMSObfuscatableDescription : NSObject {

	NSString* _prefixString;
	NSMutableArray* _items;

}

@property (nonatomic,retain) NSMutableArray * items;               //@synthesize items=_items - In the implementation block
@property (nonatomic,retain) NSString * prefixString;              //@synthesize prefixString=_prefixString - In the implementation block
-(id)init;
-(void)setItems:(NSMutableArray *)arg1 ;
-(id)description;
-(id)CPSafeDescription;
-(NSMutableArray *)items;
-(NSString *)prefixString;
-(id)_descriptionObfuscated:(BOOL)arg1 ;
-(void)addDescriptionFormat:(id)arg1 value:(id)arg2 ;
-(void)addObfuscatedDescriptionFormat:(id)arg1 value:(id)arg2 ;
-(void)setPrefixString:(NSString *)arg1 ;
@end

