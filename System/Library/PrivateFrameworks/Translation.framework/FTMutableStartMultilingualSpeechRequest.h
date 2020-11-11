/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTStartMultilingualSpeechRequest.h>

@class FTStartSpeechRequest, NSArray;

@interface FTMutableStartMultilingualSpeechRequest : FTStartMultilingualSpeechRequest

@property (nonatomic,copy) FTStartSpeechRequest * start_speech_request; 
@property (nonatomic,copy) NSArray * language_parameters_by_id; 
-(id)init;
-(NSArray *)language_parameters_by_id;
-(void)setLanguage_parameters_by_id:(NSArray *)arg1 ;
-(FTStartSpeechRequest *)start_speech_request;
-(void)setStart_speech_request:(FTStartSpeechRequest *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
