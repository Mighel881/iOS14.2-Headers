/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SUCoreMobileAssetDelegate <NSObject>
@optional
-(void)maDownloadProgress:(id)arg1;
-(void)maDownloadStalled:(id)arg1;
-(void)maDownloaded:(id)arg1;
-(void)maDownloadFailed:(id)arg1;
-(void)maAssetRemoved;
-(void)maAssetRemoveFailed:(id)arg1;
-(void)maAnomaly:(id)arg1;

@end
