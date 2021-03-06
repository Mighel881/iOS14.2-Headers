/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAUISnippet.h>

@class NSString, NSArray, SAIntentGroupProtobufMessage, NSNumber;

@interface SAIntentGroupSnippet : SAUISnippet

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intentResponse; 
@property (nonatomic,copy) NSString * jsonEncodedIntent; 
@property (nonatomic,copy) NSString * jsonEncodedIntentResponse; 
@property (nonatomic,retain) id<SAServerBoundCommand> processSynapseFlowCommand; 
@property (nonatomic,copy) NSArray * snippetTemplates; 
@property (assign,nonatomic) BOOL widgetAllowed; 
@property (nonatomic,copy) NSNumber * widgetIndex; 
+(id)snippet;
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)appId;
-(id)groupIdentifier;
-(SAIntentGroupProtobufMessage *)intent;
-(id)encodedClassName;
-(id<SAServerBoundCommand>)processSynapseFlowCommand;
-(void)setProcessSynapseFlowCommand:(id<SAServerBoundCommand>)arg1 ;
-(NSArray *)snippetTemplates;
-(void)setSnippetTemplates:(NSArray *)arg1 ;
-(BOOL)widgetAllowed;
-(void)setWidgetAllowed:(BOOL)arg1 ;
-(NSNumber *)widgetIndex;
-(void)setWidgetIndex:(NSNumber *)arg1 ;
-(SAIntentGroupProtobufMessage *)intentResponse;
-(NSString *)jsonEncodedIntent;
-(void)setJsonEncodedIntent:(NSString *)arg1 ;
-(void)setIntentResponse:(SAIntentGroupProtobufMessage *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setAppId:(NSString *)arg1 ;
-(NSString *)jsonEncodedIntentResponse;
-(void)setJsonEncodedIntentResponse:(NSString *)arg1 ;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
@end

