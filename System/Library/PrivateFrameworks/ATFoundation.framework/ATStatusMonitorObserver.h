/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:22 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ATStatusMonitorObserver <NSObject>
@optional
-(void)monitor:(id)arg1 didUpdateWithStatus:(id)arg2;

@required
-(void)connection:(id)arg1 updatedAssets:(id)arg2;
-(void)connection:(id)arg1 updatedProgress:(id)arg2;

@end

