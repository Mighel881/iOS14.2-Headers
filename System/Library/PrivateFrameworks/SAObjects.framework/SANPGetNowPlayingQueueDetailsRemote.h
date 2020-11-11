/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:10 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SANPGetNowPlayingQueueDetails;

@interface SANPGetNowPlayingQueueDetailsRemote : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (nonatomic,retain) SANPGetNowPlayingQueueDetails * queueDetails; 
@property (assign,nonatomic) double routeTimeout; 
+(id)getNowPlayingQueueDetailsRemote;
+(id)getNowPlayingQueueDetailsRemoteWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(double)routeTimeout;
-(void)setRouteTimeout:(double)arg1 ;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(SANPGetNowPlayingQueueDetails *)queueDetails;
-(void)setQueueDetails:(SANPGetNowPlayingQueueDetails *)arg1 ;
-(BOOL)mutatingCommand;
@end
