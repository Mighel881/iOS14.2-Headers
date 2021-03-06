/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TSAppMonitorType
@property (assign,nonatomic) BOOL isActive; 
@property (readonly,nonatomic) BOOL isTracking; 
@required
-(BOOL)isTracking;
-(id)onWindowWillBecomeForegroundWithBlock:(/*^block*/id)arg1;
-(void)setIsActive:(BOOL)arg1;
-(id)onWindowDidBecomeBackgroundWithBlock:(/*^block*/id)arg1;
-(BOOL)isActive;

@end

