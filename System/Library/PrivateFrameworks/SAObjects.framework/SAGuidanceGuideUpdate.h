/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAGuidanceGuideSnippet, NSNumber, NSString, SAGuidanceSuggestedUtterances;

@interface SAGuidanceGuideUpdate : SABaseClientBoundCommand

@property (nonatomic,retain) SAGuidanceGuideSnippet * guideSnippet; 
@property (nonatomic,copy) NSNumber * guideTag; 
@property (nonatomic,copy) NSString * languageCode; 
@property (nonatomic,retain) SAGuidanceSuggestedUtterances * suggestedUtterances; 
+(id)guideUpdate;
+(id)guideUpdateWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setLanguageCode:(NSString *)arg1 ;
-(NSString *)languageCode;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(void)setGuideSnippet:(SAGuidanceGuideSnippet *)arg1 ;
-(void)setGuideTag:(NSNumber *)arg1 ;
-(SAGuidanceSuggestedUtterances *)suggestedUtterances;
-(void)setSuggestedUtterances:(SAGuidanceSuggestedUtterances *)arg1 ;
-(NSNumber *)guideTag;
-(SAGuidanceGuideSnippet *)guideSnippet;
-(BOOL)mutatingCommand;
@end
