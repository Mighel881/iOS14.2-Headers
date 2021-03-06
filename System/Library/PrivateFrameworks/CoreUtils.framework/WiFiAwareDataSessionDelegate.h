/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WiFiAwareDataSessionDelegate <NSObject>
@optional
-(void)dataSession:(id)arg1 receivedControlDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3 onInterfaceIndex:(unsigned)arg4;

@required
-(void)dataSessionRequestStarted:(id)arg1;
-(void)dataSession:(id)arg1 failedToStartWithError:(long long)arg2;
-(void)dataSession:(id)arg1 confirmedForPeerDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3;
-(void)dataSession:(id)arg1 terminatedWithReason:(long long)arg2;

@end

