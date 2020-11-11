/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SampleAnalysis/SABinaryLoadInfo.h>

@interface SABinaryLoadInfoTrackingHighestOffset : SABinaryLoadInfo {

	BOOL _isInKernelAddressSpace;
	unsigned long long _highestOffset;

}

@property (assign) unsigned long long highestOffset;              //@synthesize highestOffset=_highestOffset - In the implementation block
-(BOOL)isInKernelAddressSpace;
-(unsigned long long)highestOffset;
-(void)setHighestOffset:(unsigned long long)arg1 ;
@end
