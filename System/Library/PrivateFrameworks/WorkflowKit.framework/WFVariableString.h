/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:33 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/WFVariableSerialization.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSAttributedString, NSString;

@interface WFVariableString : NSObject <WFVariableSerialization, NSCopying> {

	NSArray* _stringsAndVariables;

}

@property (nonatomic,readonly) NSAttributedString * attributedString; 
@property (nonatomic,readonly) NSArray * stringsAndVariables;                               //@synthesize stringsAndVariables=_stringsAndVariables - In the implementation block
@property (nonatomic,readonly) NSArray * variables; 
@property (nonatomic,readonly) NSString * stringByRemovingVariables; 
@property (nonatomic,readonly) NSString * stringByReplacingVariablesWithNames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attributedStringWithVariable:(id)arg1 ;
+(BOOL)dictionaryIsSerializedVariableString:(id)arg1 ;
-(id)substringWithRange:(NSRange)arg1 ;
-(NSAttributedString *)attributedString;
-(id)initWithAttributedString:(id)arg1 ;
-(id)stringByReplacingCharactersInRange:(NSRange)arg1 withVariable:(id)arg2 ;
-(id)stringByReplacingCharactersInRange:(NSRange)arg1 withVariableString:(id)arg2 ;
-(id)attributedStringByAddingTypingAttributes:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithVariable:(id)arg1 ;
-(id)serializedRepresentation;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSArray *)variables;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3 ;
-(id)initWithStringsAndVariables:(id)arg1 ;
-(id)initWithAttachmentCharacterString:(id)arg1 variableGetter:(/*^block*/id)arg2 ;
-(void)processWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processIntoContentItemsWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)processIntoStringsAndAttachmentsWithContext:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)stringByRemovingVariables;
-(NSString *)stringByReplacingVariablesWithNames;
-(NSArray *)stringsAndVariables;
-(id)variablesOfType:(id)arg1 ;
-(BOOL)representsSingleContentVariable;
-(void)addVariableDelegate:(id)arg1 ;
-(void)removeVariableDelegate:(id)arg1 ;
@end
