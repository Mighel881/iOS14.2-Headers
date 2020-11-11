/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@interface NUKeyframeSequence : NSObject {

	unsigned long long _count;
	SCD_Struct_NU6* _times;
	BOOL _ownsTimes;
	long long _interpolation;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) long long interpolation;               //@synthesize interpolation=_interpolation - In the implementation block
-(id)init;
-(unsigned long long)count;
-(void)dealloc;
-(id)initWithInterpolation:(long long)arg1 count:(unsigned long long)arg2 times:(SCD_Struct_NU6*)arg3 ;
-(id)initWithKeyframeSequence:(id)arg1 ;
-(long long)indexOfKeyframeAtOrBeforeTime:(SCD_Struct_NU6)arg1 ;
-(SCD_Struct_NU6)timeOfKeyframeAtIndex:(long long)arg1 ;
-(4)interpolantAtTime:(SCD_Struct_NU6)arg1 ;
-(id)sparseSequence;
-(long long)interpolation;
@end
