/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NURule.h>

@class NSPredicate;

@interface NSPredicateRule : NURule {

	NSPredicate* _predicate;

}

@property (nonatomic,retain,readonly) NSPredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(id)debugDescription;
-(NSPredicate *)predicate;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)evaluatePredicateWithSystem:(id)arg1 ;
@end

