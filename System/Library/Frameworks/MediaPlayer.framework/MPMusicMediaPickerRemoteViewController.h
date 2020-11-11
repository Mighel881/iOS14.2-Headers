/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/MPMusicMediaPickerClientController.h>

@class MPMediaPickerController, NSString;

@interface MPMusicMediaPickerRemoteViewController : _UIRemoteViewController <MPMusicMediaPickerClientController> {

	MPMediaPickerController* _mediaPickerController;

}

@property (assign,nonatomic,__weak) MPMediaPickerController * mediaPickerController;              //@synthesize mediaPickerController=_mediaPickerController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(MPMediaPickerController *)mediaPickerController;
-(void)setMediaPickerController:(MPMediaPickerController *)arg1 ;
-(void)remoteMediaPickerDidCancel;
-(void)remoteMediaPickerDidPickMediaItems:(id)arg1 ;
-(void)remoteMediaPickerDidPickPlaybackArchive:(id)arg1 ;
@end
