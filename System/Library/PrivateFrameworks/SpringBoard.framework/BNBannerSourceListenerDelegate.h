/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol BNBannerSourceListenerDelegate <NSObject>
@optional
-(void)bannerSourceListener:(id)arg1 presentationSize:(out CGSize*)arg2 containerSize:(out CGSize*)arg3 error:(id*)arg4;
-(id)sceneSpecificationForBannerSourceListener:(id)arg1;
-(BOOL)bannerSourceListener:(id)arg1 requestsRevokingPresentableWithRequestIdentifier:(id)arg2 requesterIdentifier:(id)arg3 animated:(BOOL)arg4 reason:(id)arg5 userInfo:(id)arg6 error:(id*)arg7;
-(BOOL)bannerSourceListener:(id)arg1 requestsRevokingAllPresentablesForRequesterWithIdentifier:(id)arg2 reason:(id)arg3 userInfo:(id)arg4 error:(id*)arg5;

@required
-(id)bannerSourceListener:(id)arg1 layoutDescriptionWithError:(id*)arg2;
-(BOOL)bannerSourceListener:(id)arg1 recommendsSuspending:(BOOL)arg2 forReason:(id)arg3 revokingCurrent:(BOOL)arg4 error:(id*)arg5;
-(BOOL)bannerSourceListener:(id)arg1 requestsPostingPresentable:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 error:(id*)arg5;
-(id)bannerSourceListener:(id)arg1 requestsRevokingPresentablesWithIdentification:(id)arg2 reason:(id)arg3 animated:(BOOL)arg4 userInfo:(id)arg5 error:(id*)arg6;

@end
