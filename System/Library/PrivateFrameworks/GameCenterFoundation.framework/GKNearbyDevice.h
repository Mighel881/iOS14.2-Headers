/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, GKDiscovery, GKPlayer;

@interface GKNearbyDevice : NSObject {

	NSString* _deviceID;
	GKDiscovery* _discovery;
	GKPlayer* _player;
	long long _state;

}

@property (nonatomic,retain) NSString * deviceID;                  //@synthesize deviceID=_deviceID - In the implementation block
@property (assign,nonatomic) long long state;                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) GKDiscovery * discovery;              //@synthesize discovery=_discovery - In the implementation block
@property (nonatomic,retain) GKPlayer * player;                    //@synthesize player=_player - In the implementation block
+(id)nearbyDeviceWithID:(id)arg1 discovery:(id)arg2 ;
-(void)setPlayer:(GKPlayer *)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)setDiscovery:(GKDiscovery *)arg1 ;
-(NSString *)deviceID;
-(long long)state;
-(GKPlayer *)player;
-(void)setDeviceID:(NSString *)arg1 ;
-(GKDiscovery *)discovery;
-(void)sendDictionary:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

