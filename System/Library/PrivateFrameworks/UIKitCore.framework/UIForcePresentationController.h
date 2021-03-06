/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIGestureRecognizer, UIView, _UIStatesFeedbackGenerator;


@protocol UIForcePresentationController <NSObject>
@property (nonatomic,copy) id presentationPhaseCompletionBlock; 
@property (nonatomic,retain) UIGestureRecognizer * panningGestureRecognizer; 
@property (assign,nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed; 
@property (nonatomic,readonly) UIView * _revealContainerView; 
@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackGenerator; 
@property (assign,nonatomic,__weak) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate; 
@optional
-(void)_willCommitPresentation;

@required
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(void)setFeedbackGenerator:(id)arg1;
-(void)set_sourceViewSnapshotAndScaleTransformSuppressed:(BOOL)arg1;
-(BOOL)_sourceViewSnapshotAndScaleTransformSuppressed;
-(void)setPresentationPhaseCompletionBlock:(/*^block*/id)arg1;
-(void)setForcePresentationControllerDelegate:(id)arg1;
-(id)presentationPhaseCompletionBlock;
-(id<_UIForcePresentationControllerDelegate>)forcePresentationControllerDelegate;
-(void)setPanningGestureRecognizer:(id)arg1;
-(UIGestureRecognizer *)panningGestureRecognizer;
-(UIView *)_revealContainerView;
-(BOOL)_canDismissPresentation;
-(BOOL)_canCommitPresentation;

@end

