/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol REMReplicaIDHelperOwner <NSObject>
@property (nonatomic,retain) id<REMReplicaManagerProviding> replicaManagerProvider; 
@required
-(void)setReplicaManagerProvider:(id)arg1;
-(void)replicaIDHelperDidAcquireReplicaUUID:(id)arg1;
-(id<REMReplicaManagerProviding>)replicaManagerProvider;

@end
