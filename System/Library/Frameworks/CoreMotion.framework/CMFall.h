/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface CMFall : NSObject
+(BOOL)areStatsAvailable;
-(BOOL)setStatsEnabled:(BOOL)arg1 ;
-(unsigned long long)setDataCollectionConfiguration:(unsigned long long)arg1 ;
-(id)fallConfig;
-(id)sendStatsDataToUrl:(id)arg1 ;
-(void)sendStatsDataToUrl:(id)arg1 onCompletion:(/*^block*/id)arg2 ;
-(void)simulateEvent:(unsigned long long)arg1 ;
@end

