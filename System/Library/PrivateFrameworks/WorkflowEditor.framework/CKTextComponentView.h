/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowEditor.framework/WorkflowEditor
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowEditor/WorkflowEditor-Structs.h>
#import <UIKitCore/UIControl.h>

@class CKTextComponentViewControlTracker, CKTextComponentLayer, CKTextKitRenderer;

@interface CKTextComponentView : UIControl {

	CKTextComponentViewControlTracker* _controlTracker;

}

@property (nonatomic,readonly) CKTextComponentLayer * textLayer; 
@property (nonatomic,readonly) CKTextComponentViewControlTracker * controlTracker; 
@property (nonatomic,retain) CKTextKitRenderer * renderer; 
+(Class)layerClass;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CKTextKitRenderer *)renderer;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setBackgroundColor:(id)arg1 ;
-(BOOL)isAccessibilityElement;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setRenderer:(CKTextKitRenderer *)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(id)accessibilityAttributedLabel;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(CKTextComponentLayer *)textLayer;
-(CKTextComponentViewControlTracker *)controlTracker;
@end
