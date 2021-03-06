/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, AVConferenceXPCClient;

@interface AVCTestMonitor : NSObject {

	id _delegate;
	NSObject*<OS_dispatch_queue> _delegateNotificationQueue;
	AVConferenceXPCClient* _connection;

}
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)setEnableOneToOneMode:(BOOL)arg1 ;
-(id)delegate;
-(void)setEmulatedRxPLR:(double)arg1 ;
-(void)setForcedCapBitrate:(int)arg1 ;
-(void)setForcedTargetBitrate:(int)arg1 ;
-(void)setCannedReplayPath:(id)arg1 ;
-(void)setEnableLoopbackInterface:(BOOL)arg1 ;
-(void)dealloc;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(id)delegateNotificationQueue;
-(void)setupNotificationQueue:(id)arg1 ;
-(void)requestReport;
-(void)updateAudioInjectConfig:(id)arg1 ;
-(void)forceNetworkCellular:(BOOL)arg1 ;
-(void)setEmulatedNetworkConfigurationPath:(id)arg1 ;
@end

