/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailCore/ECAccount.h>

@interface ECPOPAccount : ECAccount

@property (assign,nonatomic) long long bigMessageWarningSize; 
@property (assign,nonatomic) long long daysAfterDownloadToDeleteMessagesFromServer; 
@property (nonatomic,readonly) BOOL daysAfterDownloadToDeleteMessagesFromServerIsSet; 
@property (assign,nonatomic) long long deletionPolicy; 
@property (assign,nonatomic) BOOL hasNotFinishedFirstTimeSync; 
+(id)standardPorts;
+(id)standardSSLPorts;
-(long long)defaultSecurePortNumber;
-(long long)defaultPortNumber;
-(long long)bigMessageWarningSize;
-(void)setBigMessageWarningSize:(long long)arg1 ;
-(long long)daysAfterDownloadToDeleteMessagesFromServer;
-(void)setDaysAfterDownloadToDeleteMessagesFromServer:(long long)arg1 ;
-(BOOL)daysAfterDownloadToDeleteMessagesFromServerIsSet;
-(long long)deletionPolicy;
-(void)setDeletionPolicy:(long long)arg1 ;
-(BOOL)hasNotFinishedFirstTimeSync;
-(void)setHasNotFinishedFirstTimeSync:(BOOL)arg1 ;
@end

