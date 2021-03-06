/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface WDClinicalSampleAccountsParser : NSObject {

	NSString* _accountFilename;

}

@property (nonatomic,copy) NSString * accountFilename;              //@synthesize accountFilename=_accountFilename - In the implementation block
+(id)_jsonDictionaryFromJSONObject:(id)arg1 subElement:(id)arg2 error:(id*)arg3 ;
+(id)_stringOnlyDictionaryFromJSONDictionary:(id)arg1 ;
-(id)initWithAccountFilename:(id)arg1 ;
-(id)parsedAccountsWithError:(id*)arg1 ;
-(id)_parseAccountsFromJSONData:(id)arg1 error:(id*)arg2 ;
-(id)_parseProviderFromSampleAccountJSONDict:(id)arg1 error:(id*)arg2 ;
-(id)_parseBatchesFromSampleAccountJSONDict:(id)arg1 error:(id*)arg2 ;
-(NSString *)accountFilename;
-(id)_parseGatewayFromProviderJSONDict:(id)arg1 error:(id*)arg2 ;
-(void)setAccountFilename:(NSString *)arg1 ;
@end

