/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAceView.h>

@class NSString;

@interface SAARParaphrasedAlternativeResult : SAAceView

@property (nonatomic,retain) id<SAClientBoundCommand> command; 
@property (nonatomic,copy) NSString * displayText; 
@property (nonatomic,copy) NSString * paraphrasedIntent; 
+(id)paraphrasedAlternativeResult;
+(id)paraphrasedAlternativeResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id<SAClientBoundCommand>)command;
-(id)encodedClassName;
-(NSString *)paraphrasedIntent;
-(void)setParaphrasedIntent:(NSString *)arg1 ;
-(NSString *)displayText;
-(void)setDisplayText:(NSString *)arg1 ;
-(void)setCommand:(id<SAClientBoundCommand>)arg1 ;
@end

