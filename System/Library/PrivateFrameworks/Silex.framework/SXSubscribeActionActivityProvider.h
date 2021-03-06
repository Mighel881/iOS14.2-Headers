/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXActionActivityProvider.h>

@protocol SXSubscribeActionHandler, SXViewControllerPresenting, SXActionManager;
@class NSString;

@interface SXSubscribeActionActivityProvider : NSObject <SXActionActivityProvider> {

	id<SXSubscribeActionHandler> _handler;
	id<SXViewControllerPresenting> _viewControllerPresenting;
	id<SXActionManager> _actionManager;

}

@property (nonatomic,readonly) id<SXSubscribeActionHandler> handler;                                 //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) id<SXViewControllerPresenting> viewControllerPresenting;              //@synthesize viewControllerPresenting=_viewControllerPresenting - In the implementation block
@property (nonatomic,__weak,readonly) id<SXActionManager> actionManager;                             //@synthesize actionManager=_actionManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SXActionManager>)actionManager;
-(id<SXViewControllerPresenting>)viewControllerPresenting;
-(id)initWithHandler:(id)arg1 viewControllerPresenting:(id)arg2 actionManager:(id)arg3 ;
-(id)activityGroupForAction:(id)arg1 ;
-(id<SXSubscribeActionHandler>)handler;
@end

