/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSPredicate, NSSet, NSMutableSet, NSError, NSArray;

@interface CNPredicateValidator : NSObject <NSPredicateVisitor> {

	BOOL _validated;
	NSPredicate* _predicate;
	NSSet* _allowedKeysSet;
	NSMutableSet* _usedKeysSet;
	NSError* _error;

}

@property (nonatomic,retain) NSSet * allowedKeysSet;                  //@synthesize allowedKeysSet=_allowedKeysSet - In the implementation block
@property (nonatomic,retain) NSMutableSet * usedKeysSet;              //@synthesize usedKeysSet=_usedKeysSet - In the implementation block
@property (assign,nonatomic) BOOL validated;                          //@synthesize validated=_validated - In the implementation block
@property (nonatomic,retain) NSError * error;                         //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                 //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSArray * allowedKeys; 
@property (nonatomic,copy,readonly) NSArray * usedKeys; 
-(BOOL)validateWithError:(id*)arg1 ;
-(void)visitPredicate:(id)arg1 ;
-(NSArray *)usedKeys;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(void)setAllowedKeys:(NSArray *)arg1 ;
-(BOOL)validated;
-(NSArray *)allowedKeys;
-(NSMutableSet *)usedKeysSet;
-(void)setValidated:(BOOL)arg1 ;
-(void)setAllowedKeysSet:(NSSet *)arg1 ;
-(NSSet *)allowedKeysSet;
-(void)setUsedKeysSet:(NSMutableSet *)arg1 ;
-(void)resetUsedKeys;
-(void)visitPredicateExpression:(id)arg1 ;
@end
