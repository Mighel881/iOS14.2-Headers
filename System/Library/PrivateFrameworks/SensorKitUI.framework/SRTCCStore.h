/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SensorKitUI.framework/SensorKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SRTCCStore <NSObject>
@required
-(id)bundleIdentifiersForService:(id)arg1;
-(id)bundleIdentifiersDisabledForService:(id)arg1;
-(BOOL)isOverriddenForService:(id)arg1;
-(id)informationForBundleId:(id)arg1;
-(BOOL)setOverride:(BOOL)arg1 forService:(id)arg2;
-(BOOL)resetService:(id)arg1;
-(BOOL)resetService:(id)arg1 forBundleId:(id)arg2;
-(BOOL)setValue:(BOOL)arg1 forService:(id)arg2 bundleId:(id)arg3;

@end

