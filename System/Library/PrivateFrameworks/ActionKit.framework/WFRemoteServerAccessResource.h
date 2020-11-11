/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFGranularAccessResource.h>

@class NSArray;

@interface WFRemoteServerAccessResource : WFGranularAccessResource {

	NSArray* _requestedURLs;

}

@property (nonatomic,copy) NSArray * requestedURLs;              //@synthesize requestedURLs=_requestedURLs - In the implementation block
+(BOOL)isSystemResource;
+(Class)perWorkflowStateClass;
-(id)icon;
-(id)name;
-(unsigned long long)globalLevelStatus;
-(id)localizedWorkflowLevelNotDeterminedStatusMessage;
-(id)localizedWorkflowLevelDeniedStatusMessage;
-(id)localizedWorkflowLevelPromptTemplate;
-(id)localizedWorkflowLevelMessageTemplate;
-(id)requestedEntries;
-(void)setRequestedURLs:(NSArray *)arg1 ;
-(NSArray *)requestedURLs;
@end
