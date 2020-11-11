/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CXProviderHostProtocol <CXAbstractProviderHostProtocol>
@required
-(oneway void)registerWithConfiguration:(id)arg1;
-(oneway void)reportNewIncomingCallWithUUID:(id)arg1 update:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)reportCallWithUUID:(id)arg1 updated:(id)arg2;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 sentInvitationAtDate:(id)arg2;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 startedConnectingAtDate:(id)arg2;
-(oneway void)reportOutgoingCallWithUUID:(id)arg1 connectedAtDate:(id)arg2;
-(oneway void)reportCallWithUUID:(id)arg1 endedAtDate:(id)arg2 privateReason:(long long)arg3 failureContext:(id)arg4;
-(oneway void)reportAudioFinishedForCallWithUUID:(id)arg1;
-(oneway void)reportCallWithUUID:(id)arg1 changedFrequencyData:(id)arg2 forDirection:(long long)arg3;
-(oneway void)reportCallWithUUID:(id)arg1 changedMeterLevel:(float)arg2 forDirection:(long long)arg3;
-(oneway void)reportCallWithUUID:(id)arg1 crossDeviceIdentifier:(id)arg2 changedBytesOfDataUsed:(long long)arg3;
-(oneway void)requestTransaction:(id)arg1 reply:(/*^block*/id)arg2;

@end
