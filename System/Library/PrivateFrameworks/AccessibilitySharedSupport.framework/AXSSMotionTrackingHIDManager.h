/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXSSMotionTrackingHIDManagerDelegate, OS_dispatch_queue;
@class NSObject, HIDManager, NSMutableArray, NSArray;

@interface AXSSMotionTrackingHIDManager : NSObject {

	BOOL __monitoring;
	id<AXSSMotionTrackingHIDManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> __hidManagerDispatchQueue;
	HIDManager* __hidManager;
	NSMutableArray* __devices;

}

@property (assign,nonatomic) BOOL _monitoring;                                                      //@synthesize _monitoring=__monitoring - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> _hidManagerDispatchQueue;                 //@synthesize _hidManagerDispatchQueue=__hidManagerDispatchQueue - In the implementation block
@property (nonatomic,retain) HIDManager * _hidManager;                                              //@synthesize _hidManager=__hidManager - In the implementation block
@property (nonatomic,retain) NSMutableArray * _devices;                                             //@synthesize _devices=__devices - In the implementation block
@property (nonatomic,copy,readonly) NSArray * devices; 
@property (assign,nonatomic,__weak) id<AXSSMotionTrackingHIDManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<AXSSMotionTrackingHIDManagerDelegate>)delegate;
-(void)setDelegate:(id<AXSSMotionTrackingHIDManagerDelegate>)arg1 ;
-(NSMutableArray *)_devices;
-(BOOL)_monitoring;
-(void)stopMonitoring;
-(void)startMonitoring;
-(NSArray *)devices;
-(HIDManager *)_hidManager;
-(void)dealloc;
-(void)set_monitoring:(BOOL)arg1 ;
-(void)set_hidManager:(HIDManager *)arg1 ;
-(NSObject*<OS_dispatch_queue>)_hidManagerDispatchQueue;
-(void)_deviceNotification:(id)arg1 added:(BOOL)arg2 ;
-(void)set_hidManagerDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)set_devices:(NSMutableArray *)arg1 ;
@end
