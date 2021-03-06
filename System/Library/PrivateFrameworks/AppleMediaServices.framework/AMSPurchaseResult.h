/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSError, AMSPurchase, NSDictionary;

@interface AMSPurchaseResult : NSObject {

	NSString* _correlationID;
	NSError* _error;
	AMSPurchase* _purchase;
	NSDictionary* _responseDictionary;

}

@property (nonatomic,copy) NSString * correlationID;                       //@synthesize correlationID=_correlationID - In the implementation block
@property (nonatomic,copy) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,copy) AMSPurchase * purchase;                         //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,copy) NSDictionary * responseDictionary;              //@synthesize responseDictionary=_responseDictionary - In the implementation block
-(void)setCorrelationID:(NSString *)arg1 ;
-(void)setPurchase:(AMSPurchase *)arg1 ;
-(NSDictionary *)responseDictionary;
-(void)setResponseDictionary:(NSDictionary *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(AMSPurchase *)purchase;
-(NSString *)correlationID;
@end

