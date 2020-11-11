/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHandwriting/CHPostprocessingStep.h>

@interface CHTransliterateChineseStep : CHPostprocessingStep {

	void* _icuTransliterator;

}

@property (assign,nonatomic) void* icuTransliterator;              //@synthesize icuTransliterator=_icuTransliterator - In the implementation block
-(id)init;
-(id)process:(id)arg1 ;
-(void)dealloc;
-(void*)icuTransliterator;
-(void)setIcuTransliterator:(void*)arg1 ;
@end
