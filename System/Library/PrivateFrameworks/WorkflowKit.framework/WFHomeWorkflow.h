/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class WFWorkflow, NSData, HFTriggerActionsSetsUISummary, NSString, NSArray;

@interface WFHomeWorkflow : NSObject {

	WFWorkflow* _cachedWorkflow;
	NSData* _data;
	HFTriggerActionsSetsUISummary* _actionSetsSummary;

}

@property (nonatomic,retain) HFTriggerActionsSetsUISummary * actionSetsSummary;              //@synthesize actionSetsSummary=_actionSetsSummary - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                                           //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryString; 
@property (nonatomic,copy,readonly) NSArray * summaryIconNames; 
@property (nonatomic,copy,readonly) NSArray * summaryIconDescriptors; 
@property (nonatomic,readonly) BOOL requiresDeviceUnlock; 
+(void)setCachedHomes:(id)arg1 ;
-(id)debugDescription;
-(BOOL)requiresDeviceUnlock;
-(NSString *)summaryString;
-(NSData *)data;
-(NSArray *)summaryIconDescriptors;
-(HFTriggerActionsSetsUISummary *)actionSetsSummary;
-(id)initWithData:(id)arg1 ;
-(NSArray *)summaryIconNames;
-(id)triggerActionSetsBuilders;
-(id)actionSetsFromTriggerActionSetsBuilders:(id)arg1 ;
-(id)workflowWithEnvironment:(long long)arg1 error:(id*)arg2 ;
-(void)setActionSetsSummary:(HFTriggerActionsSetsUISummary *)arg1 ;
@end
