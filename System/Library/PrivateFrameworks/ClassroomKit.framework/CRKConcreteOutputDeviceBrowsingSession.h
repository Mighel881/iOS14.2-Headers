/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/CRKOutputDeviceBrowsingSession.h>

@class NSArray, AVOutputDeviceDiscoverySession, AVOutputContext, NSNotificationCenter;

@interface CRKConcreteOutputDeviceBrowsingSession : NSObject <CRKOutputDeviceBrowsingSession> {

	AVOutputDeviceDiscoverySession* _discoverySession;
	AVOutputContext* _outputContext;
	NSNotificationCenter* _notificationCenter;

}

@property (nonatomic,readonly) AVOutputDeviceDiscoverySession * discoverySession;              //@synthesize discoverySession=_discoverySession - In the implementation block
@property (nonatomic,readonly) AVOutputContext * outputContext;                                //@synthesize outputContext=_outputContext - In the implementation block
@property (nonatomic,readonly) NSNotificationCenter * notificationCenter;                      //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,copy,readonly) NSArray * outputDevices; 
+(id)sessionWithOutputContext:(id)arg1 notificationCenter:(id)arg2 ;
-(NSNotificationCenter *)notificationCenter;
-(NSArray *)outputDevices;
-(AVOutputContext *)outputContext;
-(AVOutputDeviceDiscoverySession *)discoverySession;
-(void)invalidate;
-(id)initWithDiscoverySession:(id)arg1 outputContext:(id)arg2 notificationCenter:(id)arg3 ;
-(id)observeBrowsedOutputDeviceChangesWithHandler:(/*^block*/id)arg1 ;
@end

