/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FCAVAssetKeyCacheType
@required
-(void)saveKeyServerCertificate:(id)arg1;
-(id)keyServerCertificate;
-(id)assetKeyForURI:(id)arg1;
-(void)removeAllAssetKeys;
-(void)saveAssetKeyData:(id)arg1 creationDate:(id)arg2 expirationDate:(id)arg3 forURI:(id)arg4;
-(void)clearKeyServerCertificate;

@end
