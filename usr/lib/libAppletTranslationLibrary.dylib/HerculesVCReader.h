/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libAppletTranslationLibrary.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface HerculesVCReader : NSObject
+(id)getCurrentTransitSummary:(id)arg1 withError:(id*)arg2 ;
+(id)getBalanceForPass:(unsigned long long)arg1 withRiderClass:(unsigned char)arg2 withTransitSummary:(id)arg3 withRTAData:(id)arg4 forCity:(id)arg5 withError:(id*)arg6 ;
+(id)readBalancesFromVC:(id)arg1 forCity:(id)arg2 withError:(id*)arg3 ;
@end

