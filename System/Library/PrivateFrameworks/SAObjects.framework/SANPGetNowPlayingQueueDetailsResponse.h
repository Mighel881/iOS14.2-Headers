/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSArray, NSString;

@interface SANPGetNowPlayingQueueDetailsResponse : SABaseCommand <SAServerBoundCommand, SABackgroundContextObject>

@property (nonatomic,copy) NSArray * nextItems; 
@property (nonatomic,copy) NSArray * previousItems; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getNowPlayingQueueDetailsResponse;
+(id)getNowPlayingQueueDetailsResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(NSArray *)nextItems;
-(NSArray *)previousItems;
-(void)setPreviousItems:(NSArray *)arg1 ;
-(void)setNextItems:(NSArray *)arg1 ;
@end

