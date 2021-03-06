/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:00 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class _WKWebAuthenticationPanel;


@protocol _SFAuthenticatorDialog
@property (nonatomic,readonly) _WKWebAuthenticationPanel * panel; 
@property (assign,nonatomic) BOOL isForUpdateOnly; 
@required
-(_WKWebAuthenticationPanel *)panel;
-(void)updateWebAuthenticationPanel:(long long)arg1;
-(BOOL)isForUpdateOnly;
-(void)setIsForUpdateOnly:(BOOL)arg1;
-(void)requestPINWithRemainingRetries:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2;
-(void)selectAssertionResponse:(id)arg1 source:(long long)arg2 completionHandler:(/*^block*/id)arg3;
-(void)decidePolicyForLocalAuthenticatorWithCompletionHandler:(/*^block*/id)arg1;

@end

