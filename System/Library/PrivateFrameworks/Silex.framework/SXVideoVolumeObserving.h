/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SXVideoVolumeObserving <NSObject>
@property (nonatomic,readonly) BOOL muted; 
@property (nonatomic,readonly) float volume; 
@property (setter=onVolumeChange:,nonatomic,copy) id volumeChangeBlock; 
@property (setter=onMuteStateChange:,nonatomic,copy) id muteStateChangeBlock; 
@required
-(float)volume;
-(BOOL)muted;
-(id)volumeChangeBlock;
-(id)muteStateChangeBlock;
-(void)onVolumeChange:(/*^block*/id)arg1;
-(void)onMuteStateChange:(/*^block*/id)arg1;

@end

