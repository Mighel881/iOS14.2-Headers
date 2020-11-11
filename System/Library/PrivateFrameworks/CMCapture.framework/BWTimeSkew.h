/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CMCapture/CMCapture-Structs.h>
@interface BWTimeSkew : NSObject {

	SCD_Struct_BW8 _native;
	SCD_Struct_BW8 _original;
	SCD_Struct_BW8 _adjusted;
	BOOL _isBracketFrame;
	BOOL _isSISFrame;
	BOOL _isStartOfDiscontinuity;

}

@property (nonatomic,readonly) SCD_Struct_BW8 native;                  //@synthesize native=_native - In the implementation block
@property (nonatomic,readonly) SCD_Struct_BW8 original;                //@synthesize original=_original - In the implementation block
@property (assign,nonatomic) SCD_Struct_BW8 adjusted;                  //@synthesize adjusted=_adjusted - In the implementation block
@property (nonatomic,readonly) BOOL isBracketFrame;                    //@synthesize isBracketFrame=_isBracketFrame - In the implementation block
@property (nonatomic,readonly) BOOL isSISFrame;                        //@synthesize isSISFrame=_isSISFrame - In the implementation block
@property (assign,nonatomic) BOOL isStartOfDiscontinuity;              //@synthesize isStartOfDiscontinuity=_isStartOfDiscontinuity - In the implementation block
-(void)setIsStartOfDiscontinuity:(BOOL)arg1 ;
-(BOOL)isBracketFrame;
-(SCD_Struct_BW8)original;
-(id)description;
-(BOOL)isSISFrame;
-(SCD_Struct_BW8)adjusted;
-(SCD_Struct_BW8)native;
-(id)initWithNativeTime:(SCD_Struct_BW8)arg1 originalTime:(SCD_Struct_BW8)arg2 isBracketFrame:(BOOL)arg3 isSISFrame:(BOOL)arg4 ;
-(BOOL)isStartOfDiscontinuity;
-(void)setAdjusted:(SCD_Struct_BW8)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
