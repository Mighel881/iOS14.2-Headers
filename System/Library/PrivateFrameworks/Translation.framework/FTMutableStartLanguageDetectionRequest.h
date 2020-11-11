/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:19 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Translation/Translation-Structs.h>
#import <Translation/FTStartLanguageDetectionRequest.h>

@class NSString, NSArray;

@interface FTMutableStartLanguageDetectionRequest : FTStartLanguageDetectionRequest

@property (nonatomic,copy) NSString * speech_id; 
@property (nonatomic,copy) NSString * session_id; 
@property (nonatomic,copy) NSArray * locales; 
@property (assign,nonatomic) long long codec; 
-(long long)codec;
-(void)setCodec:(long long)arg1 ;
-(id)init;
-(NSArray *)locales;
-(NSString *)speech_id;
-(void)setSpeech_id:(NSString *)arg1 ;
-(void)setSession_id:(NSString *)arg1 ;
-(NSString *)session_id;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocales:(NSArray *)arg1 ;
@end
