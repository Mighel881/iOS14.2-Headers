/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWNodeFileCoordinatorStatusDelegate <NSObject>
@required
-(void)fileCoordinator:(id)arg1 sentMarkerBufferForFileWriterAction:(id)arg2 withPTS:(SCD_Struct_BW8)arg3 settingsID:(long long)arg4 errorCode:(int)arg5;
-(void)fileCoordinator:(id)arg1 stoppedBeforeStartedRecordingForSettings:(id)arg2 pendingIrisMovieInfos:(id)arg3 errorCode:(int)arg4;

@end

