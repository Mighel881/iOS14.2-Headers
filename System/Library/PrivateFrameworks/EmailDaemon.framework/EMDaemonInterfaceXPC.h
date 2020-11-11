/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol EMDaemonInterfaceXPC <NSObject>
@required
-(void)setAllowsBackgroundResume:(BOOL)arg1;
-(void)getMessageRepositoryInterface:(/*^block*/id)arg1;
-(void)getOutgoingMessageRepositoryInterface:(/*^block*/id)arg1;
-(void)getAccountRepositoryInterface:(/*^block*/id)arg1;
-(void)getFetchControllerInterface:(/*^block*/id)arg1;
-(void)getMailboxRepositoryInterface:(/*^block*/id)arg1;
-(void)getClientStateInterface:(/*^block*/id)arg1;
-(void)getSearchableIndexInterface:(/*^block*/id)arg1;
-(void)getInteractionLoggerInterface:(/*^block*/id)arg1;
-(void)getVIPManagerInterface:(/*^block*/id)arg1;
-(void)getActivityRegistryInterface:(/*^block*/id)arg1;
-(void)debugStatusWithCompletionHandler:(/*^block*/id)arg1;
-(void)launchForEarlyRecovery:(/*^block*/id)arg1;

@end
