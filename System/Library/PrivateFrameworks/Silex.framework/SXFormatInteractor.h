/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXLayoutCoordinatorDelegate.h>
#import <libobjc.A.dylib/SXPresentationAttributesObserver.h>
#import <libobjc.A.dylib/SXSubscriptionStatusObserving.h>
#import <libobjc.A.dylib/SXDebugLayoutOptionsObserving.h>
#import <libobjc.A.dylib/SXNewsletterSubscriptionStatusObserving.h>
#import <libobjc.A.dylib/SXFormatInteractor.h>

@protocol SXFormatInteractor <NSObject>
@property (assign,nonatomic,__weak) id<SXFormatInteractorDelegate> delegate; 
@required
-(id<SXFormatInteractorDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)updateWithPresentationEnvironment:(id)arg1;

@end


@protocol SXFormatInteractorDelegate, SXLayoutCoordinator, SXLayoutOptionsFactory, SXPresentationAttributesProvider, SXSubscriptionStatusProviding, SXPresentationEnvironment, SXDebugLayoutOptionsProviding, SXNewsletterSubscriptionStatusProviding;
@class NSString;

@interface SXFormatInteractor : NSObject <SXLayoutCoordinatorDelegate, SXPresentationAttributesObserver, SXSubscriptionStatusObserving, SXDebugLayoutOptionsObserving, SXNewsletterSubscriptionStatusObserving, SXFormatInteractor> {

	BOOL _requestedContentHiding;
	id<SXFormatInteractorDelegate> _delegate;
	id<SXLayoutCoordinator> _layoutCoordinator;
	id<SXLayoutOptionsFactory> _layoutOptionsFactory;
	id<SXPresentationAttributesProvider> _presentationAttributesProvider;
	id<SXSubscriptionStatusProviding> _subscriptionStatusProvider;
	id<SXPresentationEnvironment> _presentationEnvironment;
	id<SXDebugLayoutOptionsProviding> _debugLayoutOptionsProvider;
	id<SXNewsletterSubscriptionStatusProviding> _newsletterSubscriptionStatusProvider;

}

@property (nonatomic,readonly) id<SXLayoutCoordinator> layoutCoordinator;                                                     //@synthesize layoutCoordinator=_layoutCoordinator - In the implementation block
@property (nonatomic,readonly) id<SXLayoutOptionsFactory> layoutOptionsFactory;                                               //@synthesize layoutOptionsFactory=_layoutOptionsFactory - In the implementation block
@property (nonatomic,readonly) id<SXPresentationAttributesProvider> presentationAttributesProvider;                           //@synthesize presentationAttributesProvider=_presentationAttributesProvider - In the implementation block
@property (nonatomic,readonly) id<SXSubscriptionStatusProviding> subscriptionStatusProvider;                                  //@synthesize subscriptionStatusProvider=_subscriptionStatusProvider - In the implementation block
@property (assign,nonatomic,__weak) id<SXPresentationEnvironment> presentationEnvironment;                                    //@synthesize presentationEnvironment=_presentationEnvironment - In the implementation block
@property (nonatomic,readonly) id<SXDebugLayoutOptionsProviding> debugLayoutOptionsProvider;                                  //@synthesize debugLayoutOptionsProvider=_debugLayoutOptionsProvider - In the implementation block
@property (nonatomic,readonly) id<SXNewsletterSubscriptionStatusProviding> newsletterSubscriptionStatusProvider;              //@synthesize newsletterSubscriptionStatusProvider=_newsletterSubscriptionStatusProvider - In the implementation block
@property (assign,nonatomic) BOOL requestedContentHiding;                                                                     //@synthesize requestedContentHiding=_requestedContentHiding - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SXFormatInteractorDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
-(void)layoutCoordinator:(id)arg1 cancelledLayoutWithOptions:(id)arg2 ;
-(id<SXFormatInteractorDelegate>)delegate;
-(void)setPresentationEnvironment:(id<SXPresentationEnvironment>)arg1 ;
-(void)newsletterSubscriptionStatusDidChangeFromStatus:(unsigned long long)arg1 ;
-(BOOL)requestedContentHiding;
-(id<SXNewsletterSubscriptionStatusProviding>)newsletterSubscriptionStatusProvider;
-(void)channelSubscriptionStatusDidChangeFromStatus:(long long)arg1 ;
-(void)bundleSubscriptionStatusDidChangeFromStatus:(long long)arg1 ;
-(void)layoutCoordinator:(id)arg1 didIntegrateBlueprint:(id)arg2 ;
-(id<SXDebugLayoutOptionsProviding>)debugLayoutOptionsProvider;
-(void)setDelegate:(id<SXFormatInteractorDelegate>)arg1 ;
-(id<SXLayoutOptionsFactory>)layoutOptionsFactory;
-(id<SXPresentationAttributesProvider>)presentationAttributesProvider;
-(void)layoutCoordinator:(id)arg1 willIntegrateBlueprint:(id)arg2 ;
-(id)initWithLayoutCoordinator:(id)arg1 layoutOptionsFactory:(id)arg2 presentationAttributesProvider:(id)arg3 subscriptionStatusProvider:(id)arg4 debugLayoutOptionsProvider:(id)arg5 newsletterSubscriptionStatusProvider:(id)arg6 ;
-(void)layoutCoordinator:(id)arg1 willLayoutWithParameters:(id)arg2 ;
-(id<SXSubscriptionStatusProviding>)subscriptionStatusProvider;
-(id<SXLayoutCoordinator>)layoutCoordinator;
-(void)setRequestedContentHiding:(BOOL)arg1 ;
-(id<SXPresentationEnvironment>)presentationEnvironment;
-(void)presentationAttributesDidChangeFrom:(id)arg1 toAttributes:(id)arg2 ;
-(void)updateWithPresentationEnvironment:(id)arg1 ;
-(void)debugLayoutOptionsDidChange:(id)arg1 ;
@end

