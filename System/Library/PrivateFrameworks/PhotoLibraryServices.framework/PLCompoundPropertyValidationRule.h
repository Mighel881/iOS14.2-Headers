/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:32 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotoLibraryServices/PLPropertyValidationRule.h>

@class NSArray;

@interface PLCompoundPropertyValidationRule : PLPropertyValidationRule {

	long long _compoundType;
	NSArray* _rules;

}

@property (assign,nonatomic) long long compoundType;              //@synthesize compoundType=_compoundType - In the implementation block
@property (nonatomic,retain) NSArray * rules;                     //@synthesize rules=_rules - In the implementation block
+(id)andCompoundPropertyValidationRuleWithRules:(id)arg1 ;
+(id)orCompoundPropertyValidationRuleWithRules:(id)arg1 ;
-(NSArray *)rules;
-(id)predicate;
-(id)currentValuesOfObject:(id)arg1 ;
-(void)setCompoundType:(long long)arg1 ;
-(id)initWithType:(long long)arg1 rules:(id)arg2 ;
-(long long)compoundType;
-(void)setRules:(NSArray *)arg1 ;
-(id)keyPaths;
@end

