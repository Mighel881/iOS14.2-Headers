/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, SBLockScreenLegibilitySettings;


@protocol SBLockScreenPluginMutableAppearance <SBLockScreenPluginAppearance>
@property (assign,getter=isHidden,nonatomic) BOOL hidden; 
@property (assign,nonatomic) unsigned long long restrictedCapabilities; 
@property (assign,nonatomic) long long backgroundStyle; 
@property (assign,nonatomic) long long presentationStyle; 
@property (assign,nonatomic) long long notificationBehavior; 
@property (nonatomic,copy) NSArray * elementOverrides; 
@property (nonatomic,retain) SBLockScreenLegibilitySettings * legibilitySettings; 
@property (assign,nonatomic) CGRect presentationRegion; 
@required
-(SBLockScreenLegibilitySettings *)legibilitySettings;
-(BOOL)isHidden;
-(unsigned long long)restrictedCapabilities;
-(long long)presentationStyle;
-(void)setBackgroundStyle:(long long)arg1;
-(void)setRestrictedCapabilities:(unsigned long long)arg1;
-(long long)backgroundStyle;
-(void)setHidden:(BOOL)arg1;
-(void)setPresentationStyle:(long long)arg1;
-(void)setLegibilitySettings:(id)arg1;
-(long long)notificationBehavior;
-(void)setNotificationBehavior:(long long)arg1;
-(CGRect)presentationRegion;
-(void)setPresentationRegion:(CGRect)arg1;
-(NSArray *)elementOverrides;
-(void)setElementOverrides:(id)arg1;

@end

