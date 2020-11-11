/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UISettings.h>

@class SBAttentionAwarenessSettings, SBProximitySettings;

@interface SBRootSettings : _UISettings {

	SBAttentionAwarenessSettings* _attentionAwarenessSettings;
	SBProximitySettings* _proximitySettings;

}

@property (retain) SBAttentionAwarenessSettings * attentionAwarenessSettings;              //@synthesize attentionAwarenessSettings=_attentionAwarenessSettings - In the implementation block
@property (retain) SBProximitySettings * proximitySettings;                                //@synthesize proximitySettings=_proximitySettings - In the implementation block
-(void)setProximitySettings:(SBProximitySettings *)arg1 ;
-(void)setAttentionAwarenessSettings:(SBAttentionAwarenessSettings *)arg1 ;
-(SBAttentionAwarenessSettings *)attentionAwarenessSettings;
-(SBProximitySettings *)proximitySettings;
@end
