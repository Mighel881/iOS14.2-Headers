/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <IDS/IDSTransactionLogMessage.h>

@class NSDictionary;

@interface IDSTransactionLogDictionaryMessage : IDSTransactionLogMessage {

	NSDictionary* _dictionaryValue;

}

@property (nonatomic,readonly) NSDictionary * dictionaryValue;              //@synthesize dictionaryValue=_dictionaryValue - In the implementation block
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSDictionary *)dictionaryValue;
-(id)initWithDictionary:(id)arg1 accountUniqueID:(id)arg2 fromID:(id)arg3 loginID:(id)arg4 serviceName:(id)arg5 ;
@end

