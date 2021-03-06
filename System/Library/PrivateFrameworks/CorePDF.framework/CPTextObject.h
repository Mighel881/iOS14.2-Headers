/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CorePDF/CorePDF-Structs.h>
#import <CorePDF/CPChunk.h>

@interface CPTextObject : CPChunk {

	CGPoint anchor;
	BOOL metricInfoCalculated;
	float maxFontSize;
	double maxFontLineHeight;

}
-(float)maxFontSize;
-(void)calculateMetrics;
-(void)translateObjectYBy:(double)arg1 ;
-(void)clearCachedInfo;
-(double)maxFontLineHeight;
@end

