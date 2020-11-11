/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, UIView, NSString;


@protocol UIFocusEnvironment <NSObject>
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
@optional
-(id)soundIdentifierForFocusUpdateInContext:(id)arg1;
-(UIView *)preferredFocusedView;
-(NSString *)focusGroupIdentifier;

@required
-(BOOL)shouldUpdateFocusInContext:(id)arg1;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
-(NSArray *)preferredFocusEnvironments;
-(void)updateFocusIfNeeded;
-(void)setNeedsFocusUpdate;
-(id<UIFocusItemContainer>)focusItemContainer;
-(id<UIFocusEnvironment>)parentFocusEnvironment;

@end
