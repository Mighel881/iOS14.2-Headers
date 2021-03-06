/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FPItem, NSString, CSSearchableItem;

@interface CSFPItem : NSObject {

	FPItem* _internal;

}

@property (nonatomic,readonly) NSString * providerIdentifier; 
@property (nonatomic,readonly) NSString * itemIdentifier; 
@property (nonatomic,readonly) CSSearchableItem * searchableItem; 
+(void)initialize;
+(id)itemWithFileURL:(id)arg1 ;
+(id)itemWithFileURL:(id)arg1 forEUID:(unsigned)arg2 ;
-(NSString *)itemIdentifier;
-(NSString *)providerIdentifier;
-(id)initWithFPItem:(id)arg1 ;
-(CSSearchableItem *)searchableItem;
@end

