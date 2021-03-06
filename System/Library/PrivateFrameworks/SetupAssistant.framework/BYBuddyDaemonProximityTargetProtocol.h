/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BYBuddyDaemonProximityTargetProtocol <NSObject>
@required
-(void)proximititySetupCompleted:(id)arg1;
-(void)displayProximityPinCode:(id)arg1 visual:(BOOL)arg2;
-(void)dismissProximityPinCode;
-(void)proximityConnectionPreparing:(id)arg1;
-(void)proximityConnectionInitiated;
-(void)proximityConnectionTerminated;
-(void)proximityConnectionReconnected;
-(void)receivedLanguages:(id)arg1 locale:(id)arg2 model:(id)arg3 deviceClass:(id)arg4 accessibilitySettings:(id)arg5;

@end

