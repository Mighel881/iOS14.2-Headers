/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUAppleMusicItem.h>

@class ACAccount;

@interface HUAppleMusicAccountItem : HUAppleMusicItem {

	ACAccount* _account;

}

@property (nonatomic,readonly) ACAccount * account;              //@synthesize account=_account - In the implementation block
-(id)init;
-(ACAccount *)account;
-(id)_subclass_updateWithOptions:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg1 account:(id)arg2 ;
@end
