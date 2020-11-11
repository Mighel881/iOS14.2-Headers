/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSString;

@interface SAHACurrentHome : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSString * currentHomeIdentifier; 
@property (nonatomic,copy) NSString * currentHomeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)currentHome;
+(id)currentHomeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setCurrentHomeName:(NSString *)arg1 ;
-(void)setCurrentHomeIdentifier:(NSString *)arg1 ;
-(NSString *)currentHomeIdentifier;
-(NSString *)currentHomeName;
@end
