/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:43:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@interface NTKBreatheEntryModel : NTKTimelineEntryModel {

	BOOL _isLoading;
	BOOL _isLocked;
	unsigned long long _minutesBreathed;

}

@property (assign,nonatomic) unsigned long long minutesBreathed;              //@synthesize minutesBreathed=_minutesBreathed - In the implementation block
@property (assign,nonatomic) BOOL isLoading;                                  //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic) BOOL isLocked;                                   //@synthesize isLocked=_isLocked - In the implementation block
+(id)companionModel;
+(id)lockedEntryModel;
+(BOOL)supportsFlowerImages;
+(BOOL)familySupportsLiveData:(long long)arg1 ;
+(id)modelWithActivitySummary:(id)arg1 ;
-(BOOL)isLocked;
-(void)setIsLoading:(BOOL)arg1 ;
-(BOOL)isLoading;
-(void)setIsLocked:(BOOL)arg1 ;
-(id)templateForComplicationFamily:(long long)arg1 ;
-(void)setMinutesBreathed:(unsigned long long)arg1 ;
-(id)_modularSmallTemplate;
-(id)_circularSmallTemplate;
-(id)_utilitarianSmallTemplate;
-(id)_extraLargeTemplate;
-(id)_signatureCircularTemplate;
-(id)_signatureBezelTemplate;
-(id)_signatureCornerTemplate;
-(id)_signatureExtraLargeTemplate;
-(id)_circularMediumTemplate;
-(unsigned long long)minutesBreathed;
@end
