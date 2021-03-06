/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INSettingMetadata, NSString, INTemporalEventTrigger;


@protocol INSetLabeledSettingIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSettingMetadata * settingMetadata; 
@property (nonatomic,copy) NSString * labeledValue; 
@property (nonatomic,copy) INTemporalEventTrigger * temporalEventTrigger; 
@required
-(id)init;
-(INTemporalEventTrigger *)temporalEventTrigger;
-(void)setTemporalEventTrigger:(id)arg1;
-(void)setLabeledValue:(id)arg1;
-(NSString *)labeledValue;
-(INSettingMetadata *)settingMetadata;
-(void)setSettingMetadata:(id)arg1;

@end

