/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/_NURenderResult.h>
#import <libobjc.A.dylib/PIStillReframeResult.h>

@class VNSaliencyImageObservation, NSArray, NSString;

@interface _PIStillReframeResult : _NURenderResult <PIStillReframeResult> {

	double _confidence;
	VNSaliencyImageObservation* _saliencyObservation;
	NSArray* _ANODSubjects;
	CGRect _bounds;

}

@property (assign,nonatomic) CGRect bounds;                                                 //@synthesize bounds=_bounds - In the implementation block
@property (assign,nonatomic) double confidence;                                             //@synthesize confidence=_confidence - In the implementation block
@property (nonatomic,retain) VNSaliencyImageObservation * saliencyObservation;              //@synthesize saliencyObservation=_saliencyObservation - In the implementation block
@property (nonatomic,copy) NSArray * ANODSubjects;                                          //@synthesize ANODSubjects=_ANODSubjects - In the implementation block
@property (readonly) id<NURenderStatistics> statistics; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBounds:(CGRect)arg1 ;
-(double)confidence;
-(VNSaliencyImageObservation *)saliencyObservation;
-(CGRect)bounds;
-(void)setConfidence:(double)arg1 ;
-(void)setSaliencyObservation:(VNSaliencyImageObservation *)arg1 ;
-(void)setANODSubjects:(NSArray *)arg1 ;
-(NSArray *)ANODSubjects;
@end

