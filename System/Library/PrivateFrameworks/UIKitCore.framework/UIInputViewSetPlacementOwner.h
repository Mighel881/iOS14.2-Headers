/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIInputViewSetPlacement, UIInputViewSet, UIView;


@protocol UIInputViewSetPlacementOwner <NSObject>
@property (readonly) BOOL keyboardController; 
@property (retain,readonly) UIInputViewSetPlacement * placement; 
@property (nonatomic,retain,readonly) id<UIInputViewSetPlacementApplicator> applicator; 
@property (retain,readonly) UIInputViewSet * inputViewSet; 
@property (retain,readonly) UIView * hostView; 
@property (retain,readonly) UIView * containerView; 
@property (assign) BOOL hideInputViewBackdrops; 
@property (readonly) long long inputViewBackdropStyle; 
@required
-(UIInputViewSet *)inputViewSet;
-(UIInputViewSetPlacement *)placement;
-(UIView *)hostView;
-(UIView *)containerView;
-(BOOL)keyboardController;
-(id<UIInputViewSetPlacementApplicator>)applicator;
-(long long)inputViewBackdropStyle;
-(void)setHideInputViewBackdrops:(BOOL)arg1;
-(BOOL)hideInputViewBackdrops;

@end
