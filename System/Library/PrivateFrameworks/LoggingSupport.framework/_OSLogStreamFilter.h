/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSPredicateVisitor.h>

@class NSMutableDictionary, NSData;

@interface _OSLogStreamFilter : NSObject <NSPredicateVisitor> {

	NSMutableDictionary* _filter;
	NSMutableDictionary* _pids;
	NSMutableDictionary* _processes;
	NSMutableDictionary* _processImagePaths;
	NSMutableDictionary* _subsystems;
	NSMutableDictionary* _categories;

}

@property (nonatomic,readonly) NSData * data; 
-(void)visitPredicate:(id)arg1 ;
-(void)processComparisonPredicate:(id)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(void)visitPredicateOperator:(id)arg1 ;
-(NSData *)data;
-(void)addProcessID:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)addProcess:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)addProcessImagePath:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)addSubsystem:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)addCategory:(id)arg1 flags:(unsigned long long)arg2 ;
-(void)processLeftExpression:(id)arg1 andRightExpression:(id)arg2 flags:(unsigned long long)arg3 ;
-(unsigned long long)flagsForPredicate:(id)arg1 ;
-(void)visitPredicateExpression:(id)arg1 ;
@end

