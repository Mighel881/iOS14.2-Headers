/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSPredicate, NSString;

@interface CKGenericCondition : NSObject <NSCopying, NSSecureCoding> {

	 type;
	 negated;
	 $__lazy_storage_$_sql;

}

@property (readonly,nonatomic) NSPredicate * predicate; 
@property (readonly,nonatomic) NSString * description; 
+(void)setSupportsSecureCoding:(BOOL)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)or:(id)arg1 ;
-(id)and:(id)arg1 ;
-(id)init;
-(id)initWithMatchType:(long long)arg1 value:(id)arg2 negated:(BOOL)arg3 ;
-(id)initWithValue:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSPredicate *)predicate;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)evaluateOn:(id)arg1 ;
-(id)copyWithZone:(void*)arg1 ;
@end

