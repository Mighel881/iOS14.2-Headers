/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAAceView.h>

@class NSArray, NSString;

@interface SAMacFileSearchView : SAAceView

@property (nonatomic,copy) NSArray * entities; 
@property (assign,nonatomic) long long numResults; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSString * searchTitle; 
+(id)fileSearchView;
+(id)fileSearchViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setEntities:(NSArray *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)query;
-(NSArray *)entities;
-(void)setSearchTitle:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)searchTitle;
-(void)setNumResults:(long long)arg1 ;
-(long long)numResults;
@end

