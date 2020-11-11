/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INNumericSettingValue, NSString;


@protocol INSetNumericSettingIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INNumericSettingValue * oldValue; 
@property (nonatomic,copy) INNumericSettingValue * updatedValue; 
@property (nonatomic,copy) INNumericSettingValue * minValue; 
@property (nonatomic,copy) INNumericSettingValue * maxValue; 
@property (nonatomic,copy) NSString * errorDetail; 
@required
-(INNumericSettingValue *)oldValue;
-(void)setOldValue:(id)arg1;
-(long long)code;
-(INNumericSettingValue *)minValue;
-(INNumericSettingValue *)maxValue;
-(INNumericSettingValue *)updatedValue;
-(void)setUpdatedValue:(id)arg1;
-(NSString *)errorDetail;
-(void)setErrorDetail:(id)arg1;
-(void)setMinValue:(id)arg1;
-(void)setMaxValue:(id)arg1;

@end
