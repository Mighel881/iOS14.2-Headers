/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BaseBoard/BSAbstractDefaultDomain.h>

@class NSString;

@interface BKSIAPDefaults : BSAbstractDefaultDomain

@property (nonatomic,retain) NSString * videoTVOutSystem; 
@property (nonatomic,readonly) NSString * videoTVOutSignal; 
@property (nonatomic,readonly) NSString * videoTVOutReservedForIPodOut; 
@property (nonatomic,readonly) NSString * videoTVOutReservedForRemoteUI; 
-(void)setVideoTVOutReservedForIPodOut:(NSString *)arg1 ;
-(NSString *)videoTVOutReservedForIPodOut;
-(void)setVideoTVOutSystem:(NSString *)arg1 ;
-(NSString *)videoTVOutSystem;
-(void)setVideoTVOutSignal:(NSString *)arg1 ;
-(NSString *)videoTVOutSignal;
-(void)setVideoTVOutReservedForRemoteUI:(NSString *)arg1 ;
-(NSString *)videoTVOutReservedForRemoteUI;
-(id)init;
-(void)_bindAndRegisterDefaults;
@end
