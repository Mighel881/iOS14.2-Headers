/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoAnalysis/PhotoAnalysis-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PHAJobConstraints : NSObject <NSCopying> {

	BOOL _canRunAutomaticBackgroundAnalysis;
	BOOL _canRunAutomaticForegroundAnalysis;
	BOOL _canRunUserInitiatedForegroundAnalysis;
	BOOL _canUseNetwork;
	BOOL _turboMode;
	BOOL _cancelsTurboMode;

}

@property (assign,getter=isTurboMode,nonatomic) BOOL turboMode;                         //@synthesize turboMode=_turboMode - In the implementation block
@property (assign,nonatomic) BOOL cancelsTurboMode;                                     //@synthesize cancelsTurboMode=_cancelsTurboMode - In the implementation block
@property (nonatomic,readonly) BOOL canRunAutomaticBackgroundAnalysis;                  //@synthesize canRunAutomaticBackgroundAnalysis=_canRunAutomaticBackgroundAnalysis - In the implementation block
@property (nonatomic,readonly) BOOL canRunAutomaticForegroundAnalysis;                  //@synthesize canRunAutomaticForegroundAnalysis=_canRunAutomaticForegroundAnalysis - In the implementation block
@property (nonatomic,readonly) BOOL canRunUserInitiatedForegroundAnalysis;              //@synthesize canRunUserInitiatedForegroundAnalysis=_canRunUserInitiatedForegroundAnalysis - In the implementation block
@property (nonatomic,readonly) BOOL canUseNetwork;                                      //@synthesize canUseNetwork=_canUseNetwork - In the implementation block
+(id)constraintsWithAllAllowances;
+(id)constraintsWithNoAllowances;
-(id)statusAsDictionary;
-(void)setTurboMode:(BOOL)arg1 ;
-(id)initWithCanRunAutomaticBackgroundAnalysis:(BOOL)arg1 canRunAutomaticForegroundAnalysis:(BOOL)arg2 canRunUserInitiatedForegroundAnalysis:(BOOL)arg3 canUseNetwork:(BOOL)arg4 ;
-(BOOL)canRunAutomaticForegroundAnalysis;
-(BOOL)canRunUserInitiatedForegroundAnalysis;
-(void)applyConstraints:(id)arg1 usingMask:(id)arg2 ;
-(id)description;
-(BOOL)cancelsTurboMode;
-(id)initFromBitString:(id)arg1 ;
-(void)setCancelsTurboMode:(BOOL)arg1 ;
-(BOOL)canUseNetwork;
-(BOOL)isEqualToConstraints:(id)arg1 ;
-(unsigned)qosClassForProcessing;
-(BOOL)canRunAutomaticBackgroundAnalysis;
-(id)asBitString;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isTurboMode;
@end
