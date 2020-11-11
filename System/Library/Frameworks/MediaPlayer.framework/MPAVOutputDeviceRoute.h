/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MediaPlayer/MPAVRoute.h>

@class NSArray;

@interface MPAVOutputDeviceRoute : MPAVRoute {

	void* _logicalLeaderOutputDevice;
	NSArray* _outputDevices;

}

@property (nonatomic,readonly) NSArray * outputDevices;                            //@synthesize outputDevices=_outputDevices - In the implementation block
@property (nonatomic,readonly) void* logicalLeaderOutputDevice;                    //@synthesize logicalLeaderOutputDevice=_logicalLeaderOutputDevice - In the implementation block
@property (getter=isGroupLeader,nonatomic,readonly) BOOL groupLeader; 
+(void*)logicalLeaderFromOutputDevices:(id)arg1 ;
+(id)localDeviceUID;
+(long long)pickableRouteTypeForOutputDevice:(void*)arg1 ;
-(id)routeName;
-(id)clusterComposition;
-(BOOL)isAppleTVRoute;
-(NSArray *)outputDevices;
-(BOOL)isProxyGroupPlayer;
-(BOOL)canFetchMediaDataFromSender;
-(BOOL)canPlayEncryptedProgressiveDownloadAssets;
-(long long)pickableRouteType;
-(BOOL)presentsOptimizedUserInterfaceWhenPlayingFetchedAudioOnlyAssets;
-(BOOL)_anyOutputDevicePassesTest:(/*^block*/id)arg1 ;
-(BOOL)isGroupLeader;
-(BOOL)canAccessRemoteAssets;
-(long long)routeType;
-(BOOL)supportsWirelessDisplay;
-(BOOL)isVolumeControlAvailable;
-(id)routeUID;
-(void*)logicalLeaderOutputDevice;
-(BOOL)isDeviceRoute;
-(BOOL)supportsAirPlayGrouping;
-(BOOL)requiresPassword;
-(id)description;
-(BOOL)isHomePodRoute;
-(id)groupUID;
-(BOOL)isStereoPair;
-(long long)routeSubtype;
-(BOOL)isCarplayRoute;
-(BOOL)isSplitterCapable;
-(BOOL)_anyOutputDevicePassesMRFunction:(/*function pointer*/void*)arg1 ;
-(BOOL)isB520Route;
-(BOOL)supportsGrouping;
-(long long)originalRouteSubtype;
-(BOOL)isHomeTheaterRoute;
-(BOOL)isPickedOnPairedDevice;
-(BOOL)isLowLatencyRoute;
-(BOOL)isAirPlayRoute;
-(BOOL)isClusterRoute;
-(BOOL)isDeviceSpeakerRoute;
-(id)playingPairedDeviceName;
-(id)initWithOutputDevices:(id)arg1 ;
-(id)productIdentifier;
@end
