/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IDSTransactionLogMessage : NSObject {

	NSString* _fromID;
	NSString* _loginID;
	NSString* _accountUniqueID;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSString * fromID;                       //@synthesize fromID=_fromID - In the implementation block
@property (nonatomic,readonly) NSString * loginID;                      //@synthesize loginID=_loginID - In the implementation block
@property (nonatomic,readonly) NSString * accountUniqueID;              //@synthesize accountUniqueID=_accountUniqueID - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                  //@synthesize serviceName=_serviceName - In the implementation block
+(id)transactionLogMessageFromDictionaryRepresentation:(id)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)loginID;
-(id)_dictionaryRepresentation;
-(NSString *)fromID;
-(id)dictionaryRepresentation;
-(NSString *)accountUniqueID;
-(id)_initWithAccountUniqueID:(id)arg1 fromID:(id)arg2 loginID:(id)arg3 serviceName:(id)arg4 ;
-(NSString *)serviceName;
@end

