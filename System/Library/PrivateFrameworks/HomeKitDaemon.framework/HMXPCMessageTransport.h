/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMXPCMessageTransport <NSObject>
@optional
-(void)fetchUserInfo:(/*^block*/id)arg1;
-(void)updateUserInfo:(id)arg1;

@required
-(void)handleMessage:(id)arg1;
-(void)handleMessage:(id)arg1 responseHandler:(/*^block*/id)arg2;

@end

