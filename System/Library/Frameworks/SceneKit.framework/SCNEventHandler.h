/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class SCNNode, SCNView;


@protocol SCNEventHandler <SCNCameraControlConfiguration>
@property (assign,nonatomic) BOOL enabled; 
@property (assign,nonatomic) BOOL enableFreeCamera; 
@property (nonatomic,readonly) SCNNode * freeCamera; 
@property (assign,nonatomic) SCNView * view; 
@required
-(BOOL)enabled;
-(SCNView *)view;
-(void)setEnabled:(BOOL)arg1;
-(void)setView:(id)arg1;
-(id)gestureRecognizers;
-(void)sceneWillChange;
-(void)sceneDidChange;
-(void)viewWillDrawAtTime:(double)arg1;
-(void)viewDidDrawAtTime:(double)arg1;
-(void)cameraWillChange;
-(void)cameraDidChange;
-(BOOL)wantsRedraw;
-(void)setEnableFreeCamera:(BOOL)arg1;
-(SCNNode *)freeCamera;
-(BOOL)enableFreeCamera;
-(void)activateFreeCamera;

@end

