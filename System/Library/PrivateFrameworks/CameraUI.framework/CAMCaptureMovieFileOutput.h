/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVFCapture/AVCaptureMovieFileOutput.h>
#import <libobjc.A.dylib/AVCaptureFileOutputRecordingDelegate.h>

@protocol OS_dispatch_queue, AVCaptureFileOutputRecordingDelegate;
@class CAMCaptureEngine, NSObject, NSMutableDictionary, NSMutableArray, NSDictionary, NSString;

@interface CAMCaptureMovieFileOutput : AVCaptureMovieFileOutput <AVCaptureFileOutputRecordingDelegate> {

	CAMCaptureEngine* __captureEngine;
	NSObject*<OS_dispatch_queue> __userInfoQueue;
	NSMutableDictionary* __userInfoBySettingsID;
	NSMutableArray* __removeOnCompletionSettingsIDs;
	NSDictionary* _currentUserInfo;
	NSDictionary* _userInfoForNextCapture;
	id<AVCaptureFileOutputRecordingDelegate> _wrappedDelegate;

}

@property (nonatomic,__weak,readonly) CAMCaptureEngine * _captureEngine;                                   //@synthesize _captureEngine=__captureEngine - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> _userInfoQueue;                                //@synthesize _userInfoQueue=__userInfoQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _userInfoBySettingsID;                                //@synthesize _userInfoBySettingsID=__userInfoBySettingsID - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _removeOnCompletionSettingsIDs;                            //@synthesize _removeOnCompletionSettingsIDs=__removeOnCompletionSettingsIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * currentUserInfo;                                                 //@synthesize currentUserInfo=_currentUserInfo - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfoForNextCapture;                                          //@synthesize userInfoForNextCapture=_userInfoForNextCapture - In the implementation block
@property (assign,nonatomic,__weak) id<AVCaptureFileOutputRecordingDelegate> wrappedDelegate;              //@synthesize wrappedDelegate=_wrappedDelegate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopRecording;
-(NSDictionary *)userInfo;
-(id<AVCaptureFileOutputRecordingDelegate>)wrappedDelegate;
-(void)captureOutput:(id)arg1 didStartRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 ;
-(id)initWithEngine:(id)arg1 ;
-(NSDictionary *)userInfoForNextCapture;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setUserInfoForNextCapture:(NSDictionary *)arg1 ;
-(CAMCaptureEngine *)_captureEngine;
-(NSMutableDictionary *)_userInfoBySettingsID;
-(void)handleNotification:(id)arg1 payload:(id)arg2 ;
-(NSDictionary *)currentUserInfo;
-(NSObject*<OS_dispatch_queue>)_userInfoQueue;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(void)setCurrentUserInfo:(NSDictionary *)arg1 ;
-(void)setWrappedDelegate:(id<AVCaptureFileOutputRecordingDelegate>)arg1 ;
-(NSMutableArray *)_removeOnCompletionSettingsIDs;
-(void)startRecordingToOutputFileURL:(id)arg1 recordingDelegate:(id)arg2 ;
@end

