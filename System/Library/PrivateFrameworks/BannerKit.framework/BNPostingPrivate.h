/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:31 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BannerKit.framework/BannerKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BNPostingPrivate <BNPosting>
@optional
-(BOOL)revokePresentableWithRequestIdentifier:(id)arg1 requesterIdentifier:(id)arg2 reason:(id)arg3 options:(unsigned long long)arg4 animated:(BOOL)arg5 userInfo:(id)arg6 error:(out id*)arg7;

@required
-(id)revokePresentablesWithIdentification:(id)arg1 reason:(id)arg2 options:(unsigned long long)arg3 animated:(BOOL)arg4 userInfo:(id)arg5 error:(out id*)arg6;

@end
