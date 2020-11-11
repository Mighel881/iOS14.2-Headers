/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:34:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIFocusEnvironmentInternal.h>
#import <UIKitCore/_UISceneComponentProviding.h>
#import <UIKitCore/_UIFocusEnvironmentPrivate.h>
#import <UIKit/UIFocusItemContainer.h>
#import <UIKitCore/_UIFocusRegionContainer.h>

@class UIScene, UIFocusSystem, _UIFocusMovementPerformer, _UIFocusScrollManager, _UIScreenFocusSystemManager, _UIFocusActiveSceneObserver, NSArray, UIView, NSString;

@interface _UIFocusSystemSceneComponent : NSObject <_UIFocusEnvironmentInternal, _UISceneComponentProviding, _UIFocusEnvironmentPrivate, UIFocusItemContainer, _UIFocusRegionContainer> {

	UIScene* _scene;
	UIFocusSystem* _focusSystem;
	_UIFocusMovementPerformer* _movementPerformer;
	_UIFocusScrollManager* _scrollManager;
	_UIScreenFocusSystemManager* _screenManager;
	_UIFocusActiveSceneObserver* _activeSceneObserver;

}

@property (nonatomic,retain) UIFocusSystem * focusSystem;                                                                     //@synthesize focusSystem=_focusSystem - In the implementation block
@property (nonatomic,readonly) _UIFocusMovementPerformer * movementPerformer;                                                 //@synthesize movementPerformer=_movementPerformer - In the implementation block
@property (nonatomic,readonly) _UIFocusScrollManager * scrollManager;                                                         //@synthesize scrollManager=_scrollManager - In the implementation block
@property (nonatomic,readonly) _UIScreenFocusSystemManager * screenManager;                                                   //@synthesize screenManager=_screenManager - In the implementation block
@property (nonatomic,readonly) _UIFocusActiveSceneObserver * activeSceneObserver;                                             //@synthesize activeSceneObserver=_activeSceneObserver - In the implementation block
@property (getter=_focusMapContainer,nonatomic,__weak,readonly) id<_UIFocusRegionContainer> focusMapContainer; 
@property (assign,nonatomic) BOOL areChildrenFocused; 
@property (getter=_isEligibleForFocusInteraction,nonatomic,readonly) BOOL eligibleForFocusInteraction; 
@property (getter=_preferredFocusMovementStyle,nonatomic,readonly) long long preferredFocusMovementStyle; 
@property (getter=_linearFocusMovementSequences,nonatomic,copy,readonly) NSArray * linearFocusMovementSequences; 
@property (nonatomic,copy,readonly) NSArray * preferredFocusEnvironments; 
@property (nonatomic,__weak,readonly) id<UIFocusEnvironment> parentFocusEnvironment; 
@property (nonatomic,readonly) id<UIFocusItemContainer> focusItemContainer; 
@property (nonatomic,__weak,readonly) UIView * preferredFocusedView; 
@property (nonatomic,copy,readonly) NSString * focusGroupIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;                                         //@synthesize scene=_scene - In the implementation block
@property (nonatomic,readonly) id<UICoordinateSpace> coordinateSpace; 
+(BOOL)__applicationIsSpringBoard;
+(BOOL)platformSupportsFocusSystem;
+(id)sceneComponentForView:(id)arg1 ;
+(BOOL)_platformAlwaysWantsFocusSystemForScene:(id)arg1 ;
+(id)_screenForScene:(id)arg1 ;
+(BOOL)_platformWantsFocusSystemForScene:(id)arg1 ;
+(id)sceneComponentForFocusSystem:(id)arg1 ;
+(BOOL)needsFocusSystem;
-(UIScene *)_scene;
-(BOOL)shouldUpdateFocusInContext:(id)arg1 ;
-(void)_setScene:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(NSArray *)preferredFocusEnvironments;
-(id)_preferredFocusRegionCoordinateSpace;
-(void)updateFocusIfNeeded;
-(id)_regionForFocusedItem:(id)arg1 inCoordinateSpace:(id)arg2 ;
-(void)setNeedsFocusUpdate;
-(UIFocusSystem *)focusSystem;
-(id<UIFocusItemContainer>)focusItemContainer;
-(void)_searchForFocusRegionsInContext:(id)arg1 ;
-(id)_windowScene;
-(id)initWithScene:(id)arg1 ;
-(NSString *)description;
-(void)_tearDownFocusSystem;
-(void)_sceneWillInvalidate:(id)arg1 ;
-(UIView *)preferredFocusedView;
-(_UIFocusScrollManager *)scrollManager;
-(void)_adjustFocusForAccessibilityIfNeeded:(id)arg1 ;
-(_UIFocusActiveSceneObserver *)activeSceneObserver;
-(id<UICoordinateSpace>)coordinateSpace;
-(id<UIFocusEnvironment>)parentFocusEnvironment;
-(void)_setupFocusSystem;
-(void)_setNeedsNonDeferredFocusUpdate;
-(id)_focusMapContainer;
-(void)_updateFocusSystemState;
-(id)focusItemsInRect:(CGRect)arg1 ;
-(void)setFocusSystem:(UIFocusSystem *)arg1 ;
-(_UIScreenFocusSystemManager *)screenManager;
-(_UIFocusMovementPerformer *)movementPerformer;
@end
