/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:58 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXHAUltronModelAssetManagerDelegate <NSObject>
@optional
-(void)assets:(id)arg1 totalSizeExpected:(long long)arg2 downloadProgressTotalWritten:(long long)arg3 remainingTimeExpected:(double)arg4 isStalled:(BOOL)arg5;

@required
-(void)assetsReadyForUltronManager:(id)arg1;
-(void)assetsNotReadyForUltronManager:(id)arg1;

@end

