/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoverSheet/CoverSheet-Structs.h>
#import <CoverSheet/CSCoverSheetViewControllerBase.h>
#import <libobjc.A.dylib/SBUIPoseidonContainerViewControllerLockStatusProvider.h>
#import <libobjc.A.dylib/SBUIPoseidonContainerViewControllerDelegate.h>

@protocol SBUIBiometricResource, SBFAuthenticationStatusProvider;
@class SBUIPoseidonContainerViewController, UIView, NSString;

@interface CSPoseidonViewController : CSCoverSheetViewControllerBase <SBUIPoseidonContainerViewControllerLockStatusProvider, SBUIPoseidonContainerViewControllerDelegate> {

	SBUIPoseidonContainerViewController* _poseidonContainerViewController;
	id<SBUIBiometricResource> _biometricResource;
	id<SBFAuthenticationStatusProvider> _authenticationStatusProvider;

}

@property (nonatomic,retain) SBUIPoseidonContainerViewController * poseidonContainerViewController;              //@synthesize poseidonContainerViewController=_poseidonContainerViewController - In the implementation block
@property (nonatomic,retain) id<SBUIBiometricResource> biometricResource;                                        //@synthesize biometricResource=_biometricResource - In the implementation block
@property (nonatomic,retain) id<SBFAuthenticationStatusProvider> authenticationStatusProvider;                   //@synthesize authenticationStatusProvider=_authenticationStatusProvider - In the implementation block
@property (nonatomic,readonly) UIView * poseidonView; 
@property (nonatomic,readonly) BOOL isBiometricLockedOut; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SBFAuthenticationStatusProvider>)authenticationStatusProvider;
-(BOOL)handleEvent:(id)arg1 ;
-(void)setAuthenticationStatusProvider:(id<SBFAuthenticationStatusProvider>)arg1 ;
-(void)poseidonContainerViewControllerCoachingStateDidChange:(id)arg1 ;
-(double)poseidonContainerViewControllerIdleUntilShimmerDuration:(id)arg1 ;
-(double)poseidonContainerViewControllerRestToOpenIdleDuration:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setBiometricResource:(id<SBUIBiometricResource>)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id<SBUIBiometricResource>)biometricResource;
-(BOOL)isBiometricLockedOut;
-(SBUIPoseidonContainerViewController *)poseidonContainerViewController;
-(void)viewDidLoad;
-(void)setPoseidonContainerViewController:(SBUIPoseidonContainerViewController *)arg1 ;
-(void)aggregateAppearance:(id)arg1 ;
-(UIView *)poseidonView;
@end

