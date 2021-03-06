/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TILinguisticAssetDownloading
@required
-(void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(/*^block*/id)arg5;
-(void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(/*^block*/id)arg3;
-(void)requestLinguisticAssetsForLanguage:(id)arg1 completion:(/*^block*/id)arg2;

@end

