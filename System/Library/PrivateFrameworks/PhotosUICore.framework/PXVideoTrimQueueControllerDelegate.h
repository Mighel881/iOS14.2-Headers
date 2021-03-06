/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:56 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXVideoTrimQueueControllerDelegate <NSObject>
@optional
-(void)controller:(id)arg1 willTrimVideoFromSource:(id)arg2;
-(void)controller:(id)arg1 didTrimVideoFromSource:(id)arg2;
-(void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;
-(void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;

@required
-(void)controller:(id)arg1 presentViewController:(id)arg2;
-(void)controller:(id)arg1 dismissViewControllerWithCompletion:(/*^block*/id)arg2;

@end

