/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber, INSpeakableString;


@protocol INSetSeatSettingsInCarIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * enableHeating; 
@property (nonatomic,copy) NSNumber * enableCooling; 
@property (nonatomic,copy) NSNumber * enableMassage; 
@property (assign,nonatomic) long long seat; 
@property (nonatomic,copy) NSNumber * level; 
@property (assign,nonatomic) long long relativeLevelSetting; 
@property (nonatomic,copy) INSpeakableString * carName; 
@required
-(long long)seat;
-(id)init;
-(void)setSeat:(long long)arg1;
-(INSpeakableString *)carName;
-(NSNumber *)level;
-(void)setCarName:(id)arg1;
-(NSNumber *)enableHeating;
-(void)setEnableHeating:(id)arg1;
-(NSNumber *)enableCooling;
-(void)setEnableCooling:(id)arg1;
-(NSNumber *)enableMassage;
-(void)setEnableMassage:(id)arg1;
-(long long)relativeLevelSetting;
-(void)setRelativeLevelSetting:(long long)arg1;
-(void)setLevel:(id)arg1;

@end

