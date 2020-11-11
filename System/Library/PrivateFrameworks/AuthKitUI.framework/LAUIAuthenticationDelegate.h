/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:40 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol LAUIAuthenticationDelegate <NSObject>
@optional
-(id)localizedCallerName;
-(void)authenticationResult:(id)arg1 error:(id)arg2 context:(id)arg3;
-(void)biometricNoMatch;
-(id)localizedSubTitleForMechanisms:(unsigned long long)arg1;
-(void)processBiometricMatchWithCompletionHandler:(/*^block*/id)arg1;
-(id)callerIconBundlePath;

@end
