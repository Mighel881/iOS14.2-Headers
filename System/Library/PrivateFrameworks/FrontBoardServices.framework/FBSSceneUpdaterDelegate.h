/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FBSSceneUpdaterDelegate <NSObject>
@required
-(void)updater:(id)arg1 didReceiveActions:(id)arg2;
-(void)updater:(id)arg1 didUpdateSettings:(id)arg2 withDiff:(id)arg3 transitionContext:(id)arg4 completion:(/*^block*/id)arg5;
-(void)updater:(id)arg1 didReceiveMessage:(id)arg2 withResponse:(/*^block*/id)arg3;

@end

