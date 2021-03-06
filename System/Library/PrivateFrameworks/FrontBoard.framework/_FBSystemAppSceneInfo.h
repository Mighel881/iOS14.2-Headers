/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class FBSScene, FBSSceneTransitionContext;

@interface _FBSystemAppSceneInfo : NSObject {

	BOOL _hasSentFBSWorkspaceDelegateSceneCreate;
	FBSScene* _FBSScene;
	FBSSceneTransitionContext* _pendingTransitionContext;

}

@property (nonatomic,retain) FBSScene * FBSScene;                                               //@synthesize FBSScene=_FBSScene - In the implementation block
@property (assign,nonatomic) BOOL hasSentFBSWorkspaceDelegateSceneCreate;                       //@synthesize hasSentFBSWorkspaceDelegateSceneCreate=_hasSentFBSWorkspaceDelegateSceneCreate - In the implementation block
@property (nonatomic,retain) FBSSceneTransitionContext * pendingTransitionContext;              //@synthesize pendingTransitionContext=_pendingTransitionContext - In the implementation block
-(FBSScene *)FBSScene;
-(BOOL)hasSentFBSWorkspaceDelegateSceneCreate;
-(FBSSceneTransitionContext *)pendingTransitionContext;
-(void)setPendingTransitionContext:(FBSSceneTransitionContext *)arg1 ;
-(void)setFBSScene:(FBSScene *)arg1 ;
-(void)setHasSentFBSWorkspaceDelegateSceneCreate:(BOOL)arg1 ;
@end

