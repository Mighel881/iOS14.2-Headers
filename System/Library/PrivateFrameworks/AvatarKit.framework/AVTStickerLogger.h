/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class NSObject;

@interface AVTStickerLogger : NSObject {

	NSObject*<OS_os_log> _log;

}

@property (nonatomic,readonly) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
+(id)sharedInstance;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)logStartApplyConfiguration:(id)arg1 ;
-(void)logCompletedApplyConfiguration:(id)arg1 ;
-(void)logStartBuildingProp:(id)arg1 ;
-(void)logCompleteBuildingProp:(id)arg1 startedAt:(double)arg2 ;
-(void)logCompleteExport:(id)arg1 startedAt:(double)arg2 ;
-(void)logStartExport:(id)arg1 ;
-(void)logErrorBuildingProp:(id)arg1 ;
-(void)logConfigurationNotFoundForName:(id)arg1 ;
-(void)logErrorCreatingAssetReader:(id)arg1 ;
-(void)logShaderModifier:(id)arg1 appliedToAvatar:(id)arg2 material:(id)arg3 ;
-(void)logShaderModifier:(id)arg1 removedFromAvatar:(id)arg2 material:(id)arg3 ;
-(void)logShaderModifier:(id)arg1 notRemovedFromAvatar:(id)arg2 reason:(id)arg3 ;
-(void)logRemovingShaderModifiers:(id)arg1 fromAvatar:(id)arg2 wereApplied:(BOOL)arg3 ;
-(void)logErrorShaderModifiers:(id)arg1 cantBeRemovedFromAvatar:(id)arg2 errors:(id)arg3 ;
@end

