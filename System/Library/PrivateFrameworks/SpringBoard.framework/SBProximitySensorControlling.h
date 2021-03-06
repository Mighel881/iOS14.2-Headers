/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SBProximitySensorControlling <NSObject>
@property (assign,getter=isProximityDetectionEnabled,nonatomic) BOOL proximityDetectionEnabled; 
@property (assign,nonatomic) BOOL pocketTouchesExpected; 
@required
-(BOOL)isProximityDetectionEnabled;
-(void)setPocketTouchesExpected:(BOOL)arg1;
-(id)suspendProximityDetectionAndMultitouchForSource:(long long)arg1 disableTapToWake:(BOOL)arg2 reason:(id)arg3;
-(void)resetProximityCalibration;
-(id)suspendMultitouchForSource:(long long)arg1 reason:(id)arg2;
-(void)setProximityDetectionEnabled:(BOOL)arg1;
-(id)suspendProximityDetectionForSource:(long long)arg1 reason:(id)arg2;
-(BOOL)pocketTouchesExpected;

@end

