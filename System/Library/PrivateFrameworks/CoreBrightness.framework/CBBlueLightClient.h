/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:46:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreBrightness/CoreBrightness-Structs.h>
@class BrightnessSystemClient;

@interface CBBlueLightClient : NSObject {

	BrightnessSystemClient* bsc;
	/*^block*/id clientBlock;
	BOOL ownsClient;
	BOOL notificationActive;
	BOOL rangeSet;
	SCD_Struct_CB9 defaultCctRange;
	BOOL rangeOverridden;
	SCD_Struct_CB9 cctRange;
	BOOL _supported;

}

@property (assign) BOOL supported;              //@synthesize supported=_supported - In the implementation block
+(BOOL)supportsBlueLightReduction;
-(void)setSupported:(BOOL)arg1 ;
-(BOOL)setCCTRange:(SCD_Struct_CB9*)arg1 ;
-(BOOL)setActive:(BOOL)arg1 ;
-(BOOL)getCCT:(float*)arg1 ;
-(id)init;
-(BOOL)getBlueLightStatus:(SCD_Struct_Ni8*)arg1 ;
-(BOOL)setCCT:(float)arg1 withPeriod:(float)arg2 commit:(BOOL)arg3 ;
-(BOOL)getStrength:(float*)arg1 ;
-(BOOL)setEnabled:(BOOL)arg1 ;
-(BOOL)setMode:(int)arg1 ;
-(id)initWithClientObj:(id)arg1 ;
-(BOOL)setCCT:(float)arg1 commit:(BOOL)arg2 ;
-(BOOL)getWarningCCT:(float*)arg1 ;
-(void)enableNotifications;
-(BOOL)setSchedule:(const SCD_Struct_Ni5*)arg1 ;
-(BOOL)setEnabled:(BOOL)arg1 withOption:(int)arg2 ;
-(void)setStatusNotificationBlock:(/*^block*/id)arg1 ;
-(BOOL)getCCTRange:(SCD_Struct_CB9*)arg1 ;
-(BOOL)setStrength:(float)arg1 withPeriod:(float)arg2 commit:(BOOL)arg3 ;
-(void)suspendNotifications:(BOOL)arg1 ;
-(BOOL)supported;
-(void)suspendNotifications:(BOOL)arg1 force:(BOOL)arg2 ;
-(void)disableNotifications;
-(BOOL)parseStatusDictionary:(id)arg1 intoStruct:(SCD_Struct_Ni8*)arg2 ;
-(BOOL)setStrength:(float)arg1 commit:(BOOL)arg2 ;
-(BOOL)getDefaultCCTRange:(SCD_Struct_CB9*)arg1 ;
-(BOOL)getWarningStrength:(float*)arg1 ;
-(void)dealloc;
@end

