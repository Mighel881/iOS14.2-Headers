/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BWFigVideoCaptureStreamStillImageCaptureDelegate <NSObject>
@required
-(void)captureStream:(id)arg1 didCapturePreBracketedEV0ImageWithPTS:(SCD_Struct_BW8)arg2;
-(void)captureStreamWillWaitForTimeMachineToFill:(id)arg1;
-(void)captureStream:(id)arg1 didCaptureReferenceFrameWithPTS:(SCD_Struct_BW8)arg2 referenceFrameBracketedCaptureSequenceNumber:(id)arg3;
-(void)captureStream:(id)arg1 stillImageCaptureError:(int)arg2;
-(void)captureStreamDidCompleteStillImageCapture:(id)arg1;
-(void)captureStreamWillBeginStillImageCapture:(id)arg1;

@end
