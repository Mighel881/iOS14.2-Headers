/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INTimer, INSpeakableString;


@protocol INSetTimerAttributeIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTimer * targetTimer; 
@property (assign,nonatomic) double toDuration; 
@property (nonatomic,copy) INSpeakableString * toLabel; 
@required
-(id)init;
-(INSpeakableString *)toLabel;
-(double)toDuration;
-(void)setToLabel:(id)arg1;
-(void)setToDuration:(double)arg1;
-(INTimer *)targetTimer;
-(void)setTargetTimer:(id)arg1;

@end

