/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WFSettingsPersistable.h>

@class NSArray, NSString, NSDictionary;

@interface WFSettingsIPV6 : NSObject <WFSettingsPersistable> {

	long long _method;
	NSArray* _addresses;
	NSArray* _prefixLengths;
	NSString* _router;
	NSDictionary* _items;

}

@property (assign,nonatomic) long long method;                      //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSArray * prefixLengths;               //@synthesize prefixLengths=_prefixLengths - In the implementation block
@property (nonatomic,retain) NSArray * addresses;                   //@synthesize addresses=_addresses - In the implementation block
@property (nonatomic,copy) NSString * router;                       //@synthesize router=_router - In the implementation block
@property (nonatomic,retain) NSDictionary * items;                  //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)automaticConfig;
+(id)linkLocalConfig;
-(long long)method;
-(NSString *)router;
-(id)protocol;
-(void)setItems:(NSDictionary *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)addresses;
-(void)setRouter:(NSString *)arg1 ;
-(void)setMethod:(long long)arg1 ;
-(NSString *)description;
-(void)setAddresses:(NSArray *)arg1 ;
-(NSDictionary *)items;
-(NSArray *)prefixLengths;
-(id)initWithMethod:(long long)arg1 addresses:(id)arg2 prefixLengths:(id)arg3 router:(id)arg4 ;
-(void)setPrefixLengths:(NSArray *)arg1 ;
@end
