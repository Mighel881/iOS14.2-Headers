/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:54 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol NSSNewsAnalyticsSessionManagerObserving <NSObject>
@property (readonly,nonatomic) NSString * sceneSessionIdentifier; 
@required
-(NSString *)sceneSessionIdentifier;
-(void)sessionDidStartWithSessionID:(id)arg1 sourceApplication:(id)arg2;
-(void)sessionDidStartWithSessionID:(id)arg1 sourceApplication:(id)arg2;
-(void)sessionWillResignActive;
-(void)sessionWillEndWithEndReason:(id)arg1;
-(void)sessionWillEndWithEndReason:(id)arg1;

@end
