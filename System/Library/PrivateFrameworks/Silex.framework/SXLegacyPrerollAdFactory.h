/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:55 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/SXVideoAdProviderFactory.h>

@protocol SXScrollObserverManager, SXVolumeProviding;
@class SXViewport, SXAdController, NSString;

@interface SXLegacyPrerollAdFactory : NSObject <SXVideoAdProviderFactory> {

	SXViewport* _viewport;
	id<SXScrollObserverManager> _scrollObserverManager;
	id<SXVolumeProviding> _volumeProvider;
	SXAdController* _adController;

}

@property (nonatomic,readonly) SXViewport * viewport;                                          //@synthesize viewport=_viewport - In the implementation block
@property (nonatomic,readonly) id<SXScrollObserverManager> scrollObserverManager;              //@synthesize scrollObserverManager=_scrollObserverManager - In the implementation block
@property (nonatomic,readonly) id<SXVolumeProviding> volumeProvider;                           //@synthesize volumeProvider=_volumeProvider - In the implementation block
@property (nonatomic,readonly) SXAdController * adController;                                  //@synthesize adController=_adController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXViewport *)viewport;
-(SXAdController *)adController;
-(id<SXVolumeProviding>)volumeProvider;
-(id)createVideoAdProviderForComponentView:(id)arg1 videoPlayerViewController:(id)arg2 analyticsReporter:(id)arg3 ;
-(id<SXScrollObserverManager>)scrollObserverManager;
-(id)initWithViewport:(id)arg1 adController:(id)arg2 scrollObserverManager:(id)arg3 volumeProvider:(id)arg4 ;
@end
