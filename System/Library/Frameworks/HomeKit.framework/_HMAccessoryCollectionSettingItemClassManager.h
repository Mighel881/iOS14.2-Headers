/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class HMFUnfairLock, NSMutableDictionary;

@interface _HMAccessoryCollectionSettingItemClassManager : NSObject {

	HMFUnfairLock* _lock;
	NSMutableDictionary* _classes;

}
+(id)defaultItemValueClasses;
+(id)sharedManager;
-(id)init;
-(id)itemValueClassesForKeyPath:(id)arg1 ;
-(void)setItemValueClasses:(id)arg1 forKeyPath:(id)arg2 ;
@end

