/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:27 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WFAction.h>

@interface WFSetVariableAction : WFAction
-(id)variableName;
-(id)accessibilityName;
-(id)outputVariableWithVariableProvider:(id)arg1 UUIDProvider:(id)arg2 ;
-(void)runWithInput:(id)arg1 error:(id*)arg2 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)providedVariableNames;
@end

