/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:17 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol QLCustomItemViewControllerHost <NSObject>
@required
-(void)setFullScreen:(BOOL)arg1;
-(void)presentShareSheetWithPopoverTracker:(id)arg1 customSharedURL:(id)arg2 dismissCompletion:(/*^block*/id)arg3;
-(void)forwardMessageToHostOfCustomViewController:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)dismissQuickLook;

@end
