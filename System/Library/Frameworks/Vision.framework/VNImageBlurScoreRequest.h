/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/VNImageBasedRequest.h>

@interface VNImageBlurScoreRequest : VNImageBasedRequest

@property (assign,nonatomic) unsigned long long maximumIntermediateSideLength; 
@property (assign,nonatomic) unsigned long long blurDeterminationMethod; 
+(void)recordDefaultOptionsInDictionary:(id)arg1 ;
+(Class)configurationClass;
-(void)setBlurDeterminationMethod:(unsigned long long)arg1 ;
-(void)setMaximumIntermediateSideLength:(unsigned long long)arg1 ;
-(BOOL)willAcceptCachedResultsFromRequestWithConfiguration:(id)arg1 ;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)maximumIntermediateSideLength;
-(unsigned long long)blurDeterminationMethod;
@end
