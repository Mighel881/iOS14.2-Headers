/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXResource.h>
#import <libobjc.A.dylib/SXEmbedResource.h>
@class NSString, NSDate;


@protocol SXEmbedResource <SXResource>
@property (nonatomic,readonly) NSString * HTML; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@required
-(NSString *)HTML;
-(NSDate *)expirationDate;

@end


@class NSString, NSDate, NSURL;

@interface SXEmbedResource : SXResource <SXEmbedResource>

@property (nonatomic,readonly) NSString * HTML; 
@property (nonatomic,readonly) NSDate * expirationDate; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSURL * URL; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDate *)expirationDate;
-(NSString *)HTML;
-(id)expirationDateWithValue:(id)arg1 withType:(int)arg2 ;
@end
