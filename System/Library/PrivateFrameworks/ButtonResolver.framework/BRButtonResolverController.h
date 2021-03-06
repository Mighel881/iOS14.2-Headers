/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ButtonResolver.framework/ButtonResolver
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSSet;

@interface BRButtonResolverController : NSObject {

	NSSet* _interfaces;

}

@property (nonatomic,readonly) BOOL isReady; 
@property (nonatomic,readonly) id propertyList; 
@property (nonatomic,readonly) unsigned long long maxAssetSlots; 
@property (nonatomic,readonly) unsigned long long unusedAssetSlots; 
+(id)sharedInstance;
-(BOOL)setGlobalConfigs:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(unsigned long long)maxAssetSlots;
-(BOOL)disableStates:(id)arg1 clearAsset:(BOOL)arg2 error:(id*)arg3 ;
-(id)description;
-(BOOL)playState:(unsigned long long)arg1 forSpeed:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)propertyList;
-(BOOL)enableStates:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)unusedAssetSlots;
-(BOOL)isReady;
-(void)scheduleReadyNotificationOnDispatchQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(BOOL)setConfigs:(id)arg1 withAssets:(id)arg2 forStates:(id)arg3 error:(id*)arg4 ;
@end

