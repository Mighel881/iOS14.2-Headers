/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/BKSAccelerometerDelegate.h>

@protocol CKDeviceOrientationManagerDelegate;
@class BKSAccelerometer, NSMutableSet, NSString;

@interface CKDeviceOrientationManager : NSObject <BKSAccelerometerDelegate> {

	id<CKDeviceOrientationManagerDelegate> _delegate;
	BKSAccelerometer* _accelerometer;
	NSMutableSet* _listenerKeys;

}

@property (nonatomic,retain) BKSAccelerometer * accelerometer;                                                         //@synthesize accelerometer=_accelerometer - In the implementation block
@property (nonatomic,retain) NSMutableSet * listenerKeys;                                                              //@synthesize listenerKeys=_listenerKeys - In the implementation block
@property (assign,nonatomic,__weak) id<CKDeviceOrientationManagerDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (getter=isListeningForOrientationEvents,nonatomic,readonly) BOOL listeningForOrientationEvents; 
@property (nonatomic,readonly) long long currentDeviceOrientation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<CKDeviceOrientationManagerDelegate>)delegate;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)beginListeningForOrientationEventsWithKey:(id)arg1 ;
-(void)accelerometer:(id)arg1 didChangeDeviceOrientation:(long long)arg2 ;
-(void)endListeningForOrientationEventsWithKey:(id)arg1 ;
-(BOOL)isListeningForOrientationEvents;
-(void)setDelegate:(id<CKDeviceOrientationManagerDelegate>)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(NSMutableSet *)listenerKeys;
-(void)_updateListeningState;
-(long long)_springboardDeviceLockOrientation;
-(BKSAccelerometer *)accelerometer;
-(BOOL)_wantsOrientationEvents;
-(void)_broadcastOrientation:(long long)arg1 ;
-(void)setAccelerometer:(BKSAccelerometer *)arg1 ;
-(void)setListenerKeys:(NSMutableSet *)arg1 ;
-(void)invalidate;
-(void)dealloc;
-(long long)currentDeviceOrientation;
@end
