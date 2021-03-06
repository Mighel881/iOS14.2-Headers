/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:49:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProximityControl.framework/ProximityControl
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PCActivatable
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (nonatomic,copy) id invalidationHandler; 
@property (nonatomic,copy) id interruptionHandler; 
@required
-(void)activateWithCompletion:(/*^block*/id)arg1;
-(id)interruptionHandler;
-(id)invalidationHandler;
-(void)setInterruptionHandler:(/*^block*/id)arg1;
-(void)setDispatchQueue:(id)arg1;
-(void)setInvalidationHandler:(/*^block*/id)arg1;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)invalidate;

@end

