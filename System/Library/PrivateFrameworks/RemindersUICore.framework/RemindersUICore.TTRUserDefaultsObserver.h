/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RemindersUICore.framework/RemindersUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/REMUserDefaultsObserveToken.h>

@interface RemindersUICore.TTRUserDefaultsObserver : NSObject <REMUserDefaultsObserveToken> {

	 userDefaultsKey;
	 block;
	 userDefaults;
	 removed;

}
-(void)stopObserving;
-(id)init;
-(void)dealloc;
@end
