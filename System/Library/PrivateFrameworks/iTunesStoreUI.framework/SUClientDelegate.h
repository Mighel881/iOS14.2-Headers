/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SUClientDelegate <NSObject>
@optional
-(BOOL)client:(id)arg1 presentComposeReviewViewController:(id)arg2 animated:(BOOL)arg3;
-(id)topViewControllerForClient:(id)arg1;
-(BOOL)client:(id)arg1 presentAccountViewController:(id)arg2 animated:(BOOL)arg3;
-(BOOL)client:(id)arg1 openInternalURL:(id)arg2;
-(id)downloadManagerForClient:(id)arg1 downloadKinds:(id)arg2;
-(id)downloadQueueForClient:(id)arg1 downloadKinds:(id)arg2;

@required
-(BOOL)client:(id)arg1 presentModalViewController:(id)arg2 animated:(BOOL)arg3;

@end

