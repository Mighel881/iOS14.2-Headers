/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <EmailFoundation/EmailFoundation-Structs.h>
#import <libobjc.A.dylib/EFSQLBindable.h>

@class NSString;

@interface EFSQLBinding : NSObject <EFSQLBindable>

@property (nonatomic,readonly) EFSQLBinding * ef_SQLBinding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nullBinding;
+(id)bindingWithData:(id)arg1 ;
+(id)bindingWithDouble:(double)arg1 ;
+(id)bindingWithInt64:(long long)arg1 ;
+(id)bindingWithString:(id)arg1 ;
-(EFSQLBinding *)ef_SQLBinding;
-(void)bindToStatement:(id)arg1 usingIndex:(unsigned long long)arg2 ;
-(void)bindToStatement:(id)arg1 usingName:(id)arg2 ;
-(void)bindTo:(sqlite3_stmtRef)arg1 withSQLIndex:(int)arg2 ;
@end

