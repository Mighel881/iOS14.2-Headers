/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SKUIDynamicBarAnimatorDelegate <NSObject>
@optional
-(void)dynamicBarAnimatorWillLeaveSteadyState:(id)arg1;
-(void)dynamicBarAnimatorWillEnterSteadyState:(id)arg1;

@required
-(BOOL)dynamicBarAnimator:(id)arg1 canHideBarsByDraggingWithOffset:(double)arg2;
-(void)dynamicBarAnimatorDidUpdate:(id)arg1;

@end
