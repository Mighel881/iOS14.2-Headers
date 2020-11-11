/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoard/SBDeviceApplicationSceneStatusBarStateProxy.h>

@class SBDashBoardHostedAppViewController;

@interface _SBDashBoardHostedAppStatusBarStateProxy : SBDeviceApplicationSceneStatusBarStateProxy {

	SBDashBoardHostedAppViewController* _hostedAppVCBackReference;

}

@property (assign,nonatomic,__weak) SBDashBoardHostedAppViewController * hostedAppVCBackReference;              //@synthesize hostedAppVCBackReference=_hostedAppVCBackReference - In the implementation block
-(long long)_fallbackInterfaceOrientation;
-(double)_statusBarAlpha;
-(BOOL)_suppressInheritedPartStyles;
-(SBDashBoardHostedAppViewController *)hostedAppVCBackReference;
-(void)setHostedAppVCBackReference:(SBDashBoardHostedAppViewController *)arg1 ;
@end
