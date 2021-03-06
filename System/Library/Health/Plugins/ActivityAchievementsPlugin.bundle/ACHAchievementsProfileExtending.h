/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Health/Plugins/ActivityAchievementsPlugin.bundle/ActivityAchievementsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class ACHAchievementStore, ACHTemplateStore;


@protocol ACHAchievementsProfileExtending <NSObject>
@property (nonatomic,readonly) ACHAchievementStore * achievementStore; 
@property (nonatomic,readonly) ACHTemplateStore * templateStore; 
@required
-(ACHAchievementStore *)achievementStore;
-(void)requestIncrementalEvaluationForAwardingSource:(id)arg1 evaluationBlock:(/*^block*/id)arg2;
-(void)requestImmediateUpdateForTemplateSource:(id)arg1;
-(void)deregisterTemplateSource:(id)arg1 awardingSource:(id)arg2;
-(void)registerTemplateSource:(id)arg1 awardingSource:(id)arg2;
-(ACHTemplateStore *)templateStore;

@end

