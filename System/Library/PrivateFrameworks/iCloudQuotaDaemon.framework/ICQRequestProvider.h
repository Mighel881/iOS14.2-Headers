/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class ACAccount;

@interface ICQRequestProvider : NSObject {

	ACAccount* _account;

}
+(BOOL)attemptSetRequest:(id)arg1 toPostWithJSONDict:(id)arg2 ;
+(void)addEntriesToPostDictionary:(id)arg1 forStub:(id)arg2 ;
+(id)stringTimeOfLastBackup;
-(id)initWithAccount:(id)arg1 ;
-(void)addCommonHeadersToRequest:(id)arg1 ;
-(id)urlForQuotaKey:(id)arg1 ;
@end
